#ifndef __CRC32__
#define __CRC32__

#include <global.h>

#define POLY 0xedb88320

uint32_t crc32c(uint32_t crc, unsigned char *buf, size_t len);

#endif