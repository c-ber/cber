/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       r2_list.h
编码格式:     ASCII
作者:         chenbin
创建:         May 20, 2016
历史:
    1.日期    :May 20, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_R2_LIST_H_
#define MODULES_DPI_R2_LIST_H_


#define RA2XX_PLATFORM

struct cmb_list_head {
    struct cmb_list_head *next, *prev;
};

#define CMB_LIST_HEAD_INIT(name) { &(name), &(name) }

#define CMB_LIST_HEAD(name) \
    struct cmb_list_head name = CMB_LIST_HEAD_INIT(name)

#define CMB_INIT_LIST_HEAD(ptr) do { \
    (ptr)->next = (ptr); (ptr)->prev = (ptr); \
} while (0)

/*
 * Insert a new entry between two known consecutive entries.
 *
 * This is only for internal list manipulation where we know
 * the prev/next entries already!
 */
static inline void cmb__list_add(  struct cmb_list_head *new,
                                  struct cmb_list_head *prev,
                                  struct cmb_list_head *next)
{
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}

/**
 * cmblist_add - add a new entry
 * @new: new entry to be added
 * @head: list head to add it after
 *
 * Insert a new entry after the specified head.
 * This is good for implementing stacks.
 */
static inline void cmb_list_add(struct cmb_list_head *new, struct cmb_list_head *head)
{
    cmb__list_add(new, head, head->next);
}

/**
 * cmb_list_add_tail - add a new entry
 * @new: new entry to be added
 * @head: list head to add it before
 *
 * Insert a new entry before the specified head.
 * This is useful for implementing queues.
 */
static inline void cmb_list_add_tail(struct cmb_list_head *new, struct cmb_list_head *head)
{
    cmb__list_add(new, head->prev, head);
}



/*
 * Delete a list entry by making the prev/next entries
 * point to each other.
 *
 * This is only for internal list manipulation where we know
 * the prev/next entries already!
 */
static inline void cmb__list_del(struct cmb_list_head * prev, struct cmb_list_head * next)
{
    next->prev = prev;
    prev->next = next;
}

/**
 * cmb_list_del - deletes entry from list.
 * @entry: the element to delete from the list.
 * Note: list_empty on entry does not return true after this, the entry is
 * in an undefined state.
 */
static inline void cmb_list_del(struct cmb_list_head *entry)
{
    cmb__list_del(entry->prev, entry->next);
    CMB_INIT_LIST_HEAD(entry);
}


/**
 * list_del_init - deletes entry from list and reinitialize it.
 * @entry: the element to delete from the list.
 */
static inline void cmb_list_del_init(struct cmb_list_head *entry)
{
    cmb__list_del(entry->prev, entry->next);
    CMB_INIT_LIST_HEAD(entry);
}

/**
 * list_move - delete from one list and add as another's head
 * @list: the entry to move
 * @head: the head that will precede our entry
 */
static inline void cmb_list_move(struct cmb_list_head *list, struct cmb_list_head *head)
{
    cmb__list_del(list->prev, list->next);
    cmb_list_add(list, head);
}

/**
 * cmb_list_move_tail - delete from one list and add as another's tail
 * @list: the entry to move
 * @head: the head that will follow our entry
 */
static inline void cmb_list_move_tail(  struct cmb_list_head *list,
                                        struct cmb_list_head *head)
{
        cmb__list_del(list->prev, list->next);
        cmb_list_add_tail(list, head);
}

/**
 * cmb_list_empty - tests whether a list is empty
 * @head: the list to test.
 */
static inline int cmb_list_empty(const struct cmb_list_head *head)
{
    return head->next == head;
}


#define cmb_container_of(ptr, type, member) ({          \
        const __typeof( ((type *)0)->member ) *__mptr = (ptr);  \
        (type *)( (char *)__mptr - offsetof(type,member) );})

/**
 * cmb_list_entry - get the struct for this entry
 * @ptr:    the &struct cmb_list_head pointer.
 * @type:   the type of the struct this is embedded in.
 * @member: the name of the list_struct within the struct.
 */
//#ifdef  FreeBSD
#if 1

#define cmb_list_entry(ptr, type, member) \
    ((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))

#else

#define cmb_list_entry(ptr, type, member) \
                cmb_container_of(ptr, type, member)

#endif


/**
 * cmb_list_for_each    -   iterate over a list
 * @pos:    the &struct cmb_list_head to use as a loop counter.
 * @head:   the head for your list.
 */
#define cmb_list_for_each(pos, head) \
    for (pos = (head)->next; pos != (head); \
            pos = pos->next)

/**
 * __list_for_each  -   iterate over a list
 * @pos:    the &struct cmb_list_head to use as a loop counter.
 * @head:   the head for your list.
 *
 * This variant differs from cmb_list_for_each() in that it's the
 * simplest possible list iteration code, no prefetching is done.
 * Use this for code that knows the list to be very short (empty
 * or 1 entry) most of the time.
 */
#define cmb__list_for_each(pos, head) \
    for (pos = (head)->next; pos != (head); pos = pos->next)

/**
 * list_for_each_prev   -   iterate over a list backwards
 * @pos:    the &struct cmb_list_head to use as a loop counter.
 * @head:   the head for your list.
 */
#define cmb_list_for_each_prev(pos, head) \
    for (pos = (head)->prev;  pos != (head); \
            pos = pos->prev)

/**
 * list_for_each_safe   -   iterate over a list safe against removal of list entry
 * @pos:    the &struct cmb_list_head to use as a loop counter.
 * @n:      another &struct cmb_list_head to use as temporary storage
 * @head:   the head for your list.
 */
#define cmb_list_for_each_safe(pos, n, head) \
    for (pos = (head)->next, n = pos->next; pos != (head); \
        pos = n, n = pos->next)

/**
 * list_for_each_entry  -   iterate over list of given type
 * @pos:    the type * to use as a loop counter.
 * @head:   the head for your list.
 * @member: the name of the list_struct within the struct.
 */
#define cmb_list_for_each_entry1(pos, head, member)             \
    for (pos = cmb_list_entry((head)->next, typeof(*pos), member);  \
            &pos->member != (head);     \
            pos = cmb_list_entry(pos->member.next, typeof(*pos), member))

//#endif

//freebsd can not use typeof(*pos).
#define cmb_list_for_each_entry(pos, head, member, type)                \
    for (pos = cmb_list_entry((head)->next, type, member);  \
            &pos->member != (head);     \
            pos = cmb_list_entry(pos->member.next, type, member))


#define cmb_list_for_each_entry_safe(pos, n, head, member, type)            \
    for (pos = cmb_list_entry((head)->next, type, member),  \
        n = cmb_list_entry(pos->member.next, type, member); \
         &pos->member != (head);                    \
         pos = n, n = cmb_list_entry(n->member.next, type, member))

#endif /* MODULES_DPI_R2_LIST_H_ */
