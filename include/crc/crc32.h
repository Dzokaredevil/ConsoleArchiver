#ifndef CRC32_H_
# define CRC32_H_

#include <stdint.h>

#define POLY_NORMAL     0x04C11DB7
#define POLY_REVERSED   0xEDB88320
#define POLY_REV_REC    0x82608EDB

void generate_crc32_table();
uint32_t crc32(uint32_t crc, const void *buf, uint64_t len);

#endif
