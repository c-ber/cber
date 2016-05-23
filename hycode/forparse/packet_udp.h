#ifndef __PACKET_UDP_H
#define __PACKET_UDP_H


#define UDP_HLEN 8

struct udp_hdr {
  uint16_t src;
  uint16_t dest;  /* src/dest UDP ports */
  uint16_t len;
  uint16_t chksum;
};





#endif
