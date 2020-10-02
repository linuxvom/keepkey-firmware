#ifndef __U2F_KEYS_H_INCLUDED__
#define __U2F_KEYS_H_INCLUDED__

#include <stdint.h>

const uint8_t U2F_ATT_PRIV_KEY[] = {
    0x30, 0x6e, 0xf6, 0x85, 0xc7, 0x84, 0x7a, 0x12, 0xf2, 0x7d, 0xbd,
    0x75, 0xe1, 0xa4, 0xb0, 0x9e, 0x1e, 0xd7, 0x4c, 0xda, 0x92, 0x1f,
    0x74, 0x15, 0x83, 0x80, 0x16, 0xab, 0x71, 0xcf, 0x08, 0xd4};

const uint8_t U2F_ATT_CERT[] = {
    0x30, 0x82, 0x01, 0x1b, 0x30, 0x81, 0xc2, 0x02, 0x09, 0x00, 0xf7, 0x7a,
    0x58, 0x7a, 0xaf, 0xba, 0x23, 0x98, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86,
    0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x16, 0x31, 0x14, 0x30, 0x12,
    0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0b, 0x4b, 0x65, 0x65, 0x70, 0x4b,
    0x65, 0x79, 0x20, 0x55, 0x32, 0x46, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x38,
    0x31, 0x30, 0x30, 0x34, 0x32, 0x33, 0x33, 0x36, 0x33, 0x32, 0x5a, 0x17,
    0x0d, 0x32, 0x38, 0x31, 0x30, 0x30, 0x31, 0x32, 0x33, 0x33, 0x36, 0x33,
    0x32, 0x5a, 0x30, 0x16, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04,
    0x03, 0x0c, 0x0b, 0x4b, 0x65, 0x65, 0x70, 0x4b, 0x65, 0x79, 0x20, 0x55,
    0x32, 0x46, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce,
    0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01,
    0x07, 0x03, 0x42, 0x00, 0x04, 0xd1, 0x26, 0x19, 0x31, 0x55, 0xe9, 0x4e,
    0xc1, 0x68, 0x46, 0x46, 0xd1, 0xf7, 0xeb, 0xb0, 0x50, 0xc1, 0x85, 0x74,
    0x4d, 0xba, 0xa8, 0x2c, 0x1f, 0x95, 0xa6, 0x71, 0xd2, 0x9b, 0x24, 0xfd,
    0x75, 0x76, 0xa9, 0xf9, 0xcc, 0xd9, 0x5b, 0xc8, 0xc4, 0xd0, 0x08, 0xe0,
    0x89, 0x8c, 0x9f, 0x07, 0x80, 0x7d, 0xe6, 0x63, 0x7e, 0xf3, 0x2b, 0x93,
    0x57, 0xf5, 0x7b, 0x0a, 0x97, 0x88, 0xf1, 0x20, 0xeb, 0x30, 0x0a, 0x06,
    0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x48, 0x00,
    0x30, 0x45, 0x02, 0x21, 0x00, 0x96, 0xdf, 0x7e, 0xa3, 0xd4, 0x60, 0x93,
    0x2b, 0x77, 0xbe, 0xfe, 0x2c, 0xa6, 0x73, 0x5e, 0x95, 0xbb, 0x67, 0x52,
    0x36, 0xb2, 0x36, 0x9c, 0xba, 0x67, 0xb1, 0x79, 0x07, 0xa8, 0xd9, 0xaf,
    0xdc, 0x02, 0x20, 0x3e, 0x71, 0x24, 0xe0, 0xb4, 0x1e, 0xaf, 0xe8, 0x12,
    0x6c, 0x12, 0x98, 0xa6, 0xfc, 0xb1, 0x04, 0x26, 0x01, 0x6b, 0x08, 0x85,
    0x39, 0x1e, 0xf5, 0xd1, 0xda, 0x4e, 0x7a, 0x1a, 0x5a, 0x8b, 0xe4,
};

#endif  // __U2F_KEYS_H_INCLUDED__
