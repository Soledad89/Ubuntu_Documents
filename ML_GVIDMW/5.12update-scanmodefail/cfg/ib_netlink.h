#ifndef __IB_NETLINK_H__
#define __IB_NETLINK_H__

//netlink message type definition
//user space application uses this message convey its pid to device driver
#define IB_U_PID   0
//device driver send this message to user space application to
//indicate that a new batch of data is available
#define IB_K_NEW   1

//information board netlink protocal definition
#define NL_IB      31

struct packet_info
{
  int wp;
};

struct u_packet_info
{
  struct nlmsghdr hdr;
  struct packet_info info;
};

#endif
