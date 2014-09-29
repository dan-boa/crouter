#include "globals.h"
#include <linux/if_ether.h>
#include <linux/if_packet.h>
#include <linux/if_arp.h>

void send_ethernet_packet();

void send_icmp_packet(char *if_name, unsigned char *dest_mac, void *packet);