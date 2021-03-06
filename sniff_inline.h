#ifndef SNIFF_INLINE_H
#define SNIFF_INLINE_H

#include "pcap_queue.h"
#include "voipmonitor.h"

#if SNIFFER_INLINE_FUNCTIONS
inline
#endif
iphdr2 *convertHeaderIP_GRE(iphdr2 *header_ip);

#if SNIFFER_INLINE_FUNCTIONS
inline
#endif
bool parseEtherHeader(int pcapLinklayerHeaderType, u_char* packet,
		      sll_header *&header_sll, ether_header *&header_eth, u_int &header_ip_offset, int &protocol);

#if SNIFFER_INLINE_FUNCTIONS
inline
#endif
int pcapProcess(pcap_pkthdr** header, u_char** packet, bool *destroy,
		bool enableDefrag, bool enableCalcMD5, bool enableDedup, bool enableDump,
		pcapProcessData *ppd, int pcapLinklayerHeaderType, pcap_dumper_t *pcapDumpHandle, const char *interfaceName);

#if SNIFFER_INLINE_FUNCTIONS
#include "sniff_inline.cpp"
#endif

#endif

