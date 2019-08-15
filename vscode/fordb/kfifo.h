#ifndef _LINUX_KFIFO_H
#define _LINUX_KFIFO_H

#include "cvmx_common.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define IS_ERR(t) (NULL == t)

#define kmalloc(v1,v2) malloc(v1)

//取a和b中最小值
#define min(a, b) (((a) < (b)) ? (a) : (b))

struct kfifo {
	unsigned char *buffer;	/* the buffer holding the data */
	unsigned int size;	/* the size of the allocated buffer */
	unsigned int in;	/* data is added at offset (in % size) */
	unsigned int out;	/* data is extracted from off. (out % size) */
	cvmx_spinlock_t *lock;	/* protects concurrent modifications */
};

extern struct kfifo *kfifo_init(unsigned char *buffer, unsigned int size,
				cvmx_spinlock_t *lock);
extern struct kfifo *kfifo_alloc(unsigned int size, cvmx_spinlock_t *lock);
extern void kfifo_free(struct kfifo *fifo);
extern unsigned int __kfifo_put(struct kfifo *fifo,
				const unsigned char *buffer, unsigned int len);
extern unsigned int __kfifo_get(struct kfifo *fifo,
				unsigned char *buffer, unsigned int len);

/**
 * __kfifo_reset - removes the entire FIFO contents, no locking version
 * @fifo: the fifo to be emptied.
 */
static inline void __kfifo_reset(struct kfifo *fifo)
{
	fifo->in = fifo->out = 0;
}

/**
 * kfifo_reset - removes the entire FIFO contents
 * @fifo: the fifo to be emptied.
 */
static inline void kfifo_reset(struct kfifo *fifo)
{
	cvmx_spinlock_lock(fifo->lock);

	__kfifo_reset(fifo);

	cvmx_spinlock_unlock(fifo->lock);
}

/**
 * kfifo_put - puts some data into the FIFO
 * @fifo: the fifo to be used.
 * @buffer: the data to be added.
 * @len: the length of the data to be added.
 *
 * This function copies at most @len bytes from the @buffer into
 * the FIFO depending on the free space, and returns the number of
 * bytes copied.
 */
static inline unsigned int kfifo_put(struct kfifo *fifo,
				const unsigned char *buffer, unsigned int len)
{
	unsigned int ret;

	cvmx_spinlock_lock(fifo->lock);

	ret = __kfifo_put(fifo, buffer, len);

	cvmx_spinlock_unlock(fifo->lock);

	return ret;
}

/**
 * kfifo_get - gets some data from the FIFO
 * @fifo: the fifo to be used.
 * @buffer: where the data must be copied.
 * @len: the size of the destination buffer.
 *
 * This function copies at most @len bytes from the FIFO into the
 * @buffer and returns the number of copied bytes.
 */
static inline unsigned int kfifo_get(struct kfifo *fifo,
				     unsigned char *buffer, unsigned int len)
{
	unsigned int ret;

	cvmx_spinlock_lock(fifo->lock);

	ret = __kfifo_get(fifo, buffer, len);

	/*
	 * optimization: if the FIFO is empty, set the indices to 0
	 * so we don't wrap the next time
	 */
	if (fifo->in == fifo->out)
		fifo->in = fifo->out = 0;

	cvmx_spinlock_unlock(fifo->lock);

	return ret;
}

/**
 * __kfifo_len - returns the number of bytes available in the FIFO, no locking version
 * @fifo: the fifo to be used.
 */
static inline unsigned int __kfifo_len(struct kfifo *fifo)
{
	return fifo->in - fifo->out;
}

/**
 * kfifo_len - returns the number of bytes available in the FIFO
 * @fifo: the fifo to be used.
 */
static inline unsigned int kfifo_len(struct kfifo *fifo)
{
	unsigned int ret;

	cvmx_spinlock_lock(fifo->lock);

	ret = __kfifo_len(fifo);

	cvmx_spinlock_unlock(fifo->lock);

	return ret;
}

#endif
