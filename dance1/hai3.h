#include "Arduino.h"

const unsigned char hai3_raw[] PROGMEM = {
  0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x7e, 0x82, 0x7f, 0x7e, 0x80,
  0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x84, 0x81, 0x81, 0x7f, 0x80,
  0x80, 0x80, 0x81, 0x80, 0x7f, 0x7f, 0x80, 0x7d, 0x7d, 0x7c, 0x7c, 0x7e,
  0x80, 0x80, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7f, 0x81, 0x83, 0x81, 0x80,
  0x7e, 0x7e, 0x7f, 0x7f, 0x7f, 0x80, 0x7e, 0x7f, 0x7d, 0x7d, 0x7e, 0x7d,
  0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7d, 0x7a, 0x7d, 0x7c, 0x7d, 0x7f, 0x80,
  0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7f, 0x7e, 0x7c, 0x7f, 0x80, 0x7f, 0x7e,
  0x7d, 0x7e, 0x7e, 0x7e, 0x7e, 0x7c, 0x7f, 0x80, 0x7e, 0x7d, 0x7d, 0x7d,
  0x7d, 0x7e, 0x7f, 0x7e, 0x7e, 0x7d, 0x7f, 0x80, 0x7c, 0x7e, 0x7c, 0x7c,
  0x7e, 0x7e, 0x7b, 0x7b, 0x7d, 0x7d, 0x7e, 0x7e, 0x7c, 0x7b, 0x7c, 0x7d,
  0x7d, 0x7d, 0x7e, 0x82, 0x7f, 0x7d, 0x7e, 0x80, 0x80, 0x7e, 0x7d, 0x7e,
  0x80, 0x80, 0x81, 0x81, 0x81, 0x7e, 0x7e, 0x7e, 0x7f, 0x81, 0x7f, 0x7e,
  0x7c, 0x7e, 0x80, 0x81, 0x7d, 0x7c, 0x7f, 0x80, 0x7b, 0x79, 0x7e, 0x7e,
  0x80, 0x7d, 0x7a, 0x79, 0x7f, 0x7d, 0x7c, 0x7b, 0x7a, 0x7e, 0x7e, 0x7e,
  0x7b, 0x7c, 0x78, 0x7b, 0x7e, 0x7c, 0x7a, 0x79, 0x7d, 0x7e, 0x80, 0x79,
  0x79, 0x7e, 0x80, 0x82, 0x7b, 0x7b, 0x7d, 0x7d, 0x81, 0x7c, 0x7c, 0x7f,
  0x7e, 0x7b, 0x7d, 0x81, 0x7d, 0x7c, 0x79, 0x7c, 0x7c, 0x79, 0x78, 0x7b,
  0x81, 0x80, 0x7f, 0x79, 0x7b, 0x7e, 0x7d, 0x7d, 0x7b, 0x7e, 0x7e, 0x7e,
  0x7c, 0x7b, 0x7b, 0x7c, 0x79, 0x7c, 0x7f, 0x7d, 0x7c, 0x7a, 0x7f, 0x80,
  0x84, 0x84, 0x80, 0x81, 0x80, 0x81, 0x80, 0x7b, 0x82, 0x7b, 0x7a, 0x7d,
  0x7f, 0x83, 0x7c, 0x77, 0x76, 0x7b, 0x81, 0x82, 0x7b, 0x7f, 0x7e, 0x82,
  0x81, 0x7f, 0x7f, 0x7d, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x7e, 0x7d, 0x78,
  0x7c, 0x80, 0x82, 0x7e, 0x7a, 0x7e, 0x80, 0x7e, 0x7d, 0x7f, 0x80, 0x7f,
  0x7e, 0x7e, 0x81, 0x7e, 0x7a, 0x7a, 0x7f, 0x85, 0x84, 0x82, 0x7b, 0x7a,
  0x7d, 0x82, 0x83, 0x82, 0x7e, 0x82, 0x85, 0x80, 0x7e, 0x82, 0x7f, 0x7d,
  0x7f, 0x7a, 0x7d, 0x7e, 0x81, 0x84, 0x83, 0x81, 0x7d, 0x7c, 0x83, 0x87,
  0x81, 0x81, 0x7e, 0x7c, 0x85, 0x86, 0x86, 0x7e, 0x7c, 0x80, 0x86, 0x86,
  0x84, 0x7f, 0x72, 0x78, 0x82, 0x82, 0x81, 0x7e, 0x75, 0x7b, 0x82, 0x85,
  0x82, 0x7a, 0x79, 0x8a, 0x8a, 0x81, 0x7f, 0x7d, 0x80, 0x84, 0x7f, 0x7c,
  0x85, 0x80, 0x80, 0x7d, 0x7d, 0x81, 0x84, 0x84, 0x87, 0x83, 0x85, 0x89,
  0x84, 0x80, 0x7f, 0x80, 0x7c, 0x7b, 0x6e, 0x74, 0x7b, 0x87, 0x8c, 0x88,
  0x83, 0x95, 0x96, 0x89, 0x85, 0x7c, 0x86, 0x76, 0x70, 0x6a, 0x6e, 0x6d,
  0x74, 0x72, 0x92, 0xb6, 0xae, 0x9f, 0x78, 0x6e, 0x7c, 0x94, 0x8c, 0x79,
  0x63, 0x62, 0x66, 0x5f, 0x66, 0x8d, 0xba, 0xb4, 0x9d, 0x7f, 0x7d, 0x86,
  0x90, 0x8c, 0x7d, 0x6c, 0x66, 0x68, 0x68, 0x57, 0x63, 0x9d, 0xbb, 0xbd,
  0x9a, 0x7f, 0x87, 0x8e, 0x8e, 0x93, 0x82, 0x71, 0x62, 0x5e, 0x5d, 0x4b,
  0x60, 0x9c, 0xc5, 0xc4, 0x9f, 0x73, 0x82, 0x86, 0x8b, 0x91, 0x82, 0x6f,
  0x5a, 0x53, 0x46, 0x45, 0x6c, 0xae, 0xcf, 0xc7, 0x93, 0x72, 0x6d, 0x7f,
  0x9a, 0x9c, 0x85, 0x58, 0x48, 0x4e, 0x48, 0x59, 0x8d, 0xbc, 0xd6, 0xc0,
  0x83, 0x64, 0x70, 0x8b, 0xaa, 0x92, 0x69, 0x3f, 0x3e, 0x37, 0x48, 0x7f,
  0xb6, 0xd7, 0xbf, 0x92, 0x5f, 0x60, 0x74, 0xa5, 0xa3, 0x83, 0x3e, 0x33,
  0x2c, 0x3a, 0x7e, 0xb9, 0xd7, 0xd1, 0xa8, 0x5b, 0x56, 0x65, 0xae, 0xb6,
  0x90, 0x3a, 0x26, 0x20, 0x46, 0x9c, 0xc9, 0xf2, 0xd2, 0x8f, 0x56, 0x4d,
  0x73, 0xc0, 0xb4, 0x7c, 0x25, 0x16, 0x25, 0x6a, 0xbf, 0xea, 0xed, 0xb9,
  0x77, 0x3d, 0x53, 0x92, 0xd0, 0xac, 0x45, 0x03, 0x02, 0x40, 0xb7, 0xec,
  0xf4, 0xcc, 0x85, 0x47, 0x3a, 0x79, 0xc5, 0xc3, 0x53, 0x0a, 0x00, 0x2b,
  0xac, 0xf6, 0xfa, 0xdf, 0x8f, 0x4e, 0x36, 0x65, 0xc0, 0xd0, 0x5d, 0x06,
  0x00, 0x35, 0xce, 0xff, 0xfb, 0xc8, 0x70, 0x4b, 0x3f, 0x82, 0xd0, 0xbb,
  0x3d, 0x00, 0x00, 0x77, 0xff, 0xfd, 0xe7, 0x8c, 0x63, 0x45, 0x4b, 0xa5,
  0xdb, 0x83, 0x13, 0x00, 0x2f, 0xdc, 0xff, 0xf2, 0x98, 0x59, 0x63, 0x4e,
  0x79, 0xbf, 0xbf, 0x39, 0x00, 0x05, 0xa1, 0xff, 0xfc, 0xc4, 0x55, 0x60,
  0x51, 0x6f, 0x9e, 0xce, 0x6a, 0x07, 0x00, 0x6a, 0xff, 0xff, 0xdc, 0x4f,
  0x5b, 0x62, 0x74, 0x93, 0xa6, 0x72, 0x0f, 0x00, 0x47, 0xf8, 0xff, 0xf3,
  0x4b, 0x2f, 0x7a, 0x83, 0xa3, 0xa0, 0x7d, 0x1c, 0x00, 0x1e, 0xde, 0xff,
  0xff, 0x78, 0x03, 0x48, 0x80, 0xbd, 0xb5, 0x8b, 0x17, 0x00, 0x07, 0xc2,
  0xff, 0xff, 0x94, 0x13, 0x43, 0x68, 0xae, 0xaf, 0xac, 0x2c, 0x00, 0x06,
  0xb8, 0xff, 0xff, 0x89, 0x00, 0x49, 0x7a, 0xb5, 0xae, 0x99, 0x1e, 0x00,
  0x02, 0xb7, 0xff, 0xff, 0x7d, 0x00, 0x31, 0x9c, 0xe0, 0xb9, 0x94, 0x13,
  0x08, 0x00, 0xae, 0xff, 0xff, 0x85, 0x00, 0x25, 0xa4, 0xff, 0xcf, 0x8e,
  0x0b, 0x09, 0x00, 0xbb, 0xff, 0xff, 0x84, 0x00, 0x1f, 0x9e, 0xff, 0xd6,
  0x92, 0x0f, 0x08, 0x00, 0xc2, 0xff, 0xff, 0x7f, 0x00, 0x23, 0xb5, 0xff,
  0xe5, 0x7a, 0x00, 0x06, 0x01, 0xdb, 0xff, 0xff, 0x69, 0x00, 0x24, 0xc7,
  0xff, 0xed, 0x7b, 0x00, 0x08, 0x00, 0xdf, 0xfe, 0xff, 0x65, 0x00, 0x14,
  0xc3, 0xff, 0xef, 0xa0, 0x00, 0x13, 0x00, 0xbb, 0xff, 0xff, 0x91, 0x00,
  0x00, 0x77, 0xff, 0xef, 0xce, 0x0d, 0x11, 0x00, 0x89, 0xff, 0xff, 0xc9,
  0x00, 0x00, 0x3b, 0xff, 0xf8, 0xed, 0x35, 0x05, 0x00, 0x4c, 0xff, 0xfa,
  0xf2, 0x13, 0x00, 0x10, 0xd4, 0xff, 0xfa, 0xa3, 0x00, 0x0c, 0x00, 0xcf,
  0xff, 0xff, 0x77, 0x00, 0x07, 0x85, 0xff, 0xf1, 0xe8, 0x1b, 0x0e, 0x00,
  0x70, 0xff, 0xff, 0xd3, 0x00, 0x03, 0x1f, 0xd9, 0xfe, 0xff, 0x96, 0x00,
  0x0a, 0x00, 0xd5, 0xff, 0xff, 0x6f, 0x00, 0x0f, 0x65, 0xff, 0xee, 0xff,
  0x48, 0x00, 0x00, 0x31, 0xff, 0xfd, 0xf5, 0x1d, 0x00, 0x21, 0xbb, 0xff,
  0xff, 0xda, 0x02, 0x0e, 0x00, 0x98, 0xff, 0xff, 0xaf, 0x00, 0x09, 0x30,
  0xda, 0xf9, 0xff, 0xc7, 0x00, 0x0c, 0x00, 0xb2, 0xff, 0xff, 0x92, 0x00,
  0x0e, 0x40, 0xff, 0xee, 0xff, 0x71, 0x00, 0x03, 0x08, 0xeb, 0xff, 0xff,
  0x55, 0x00, 0x11, 0x66, 0xff, 0xee, 0xff, 0x6b, 0x00, 0x05, 0x05, 0xe8,
  0xff, 0xff, 0x53, 0x00, 0x0e, 0x6c, 0xff, 0xeb, 0xff, 0x3e, 0x00, 0x00,
  0x19, 0xf6, 0xff, 0xff, 0x43, 0x00, 0x0d, 0x73, 0xff, 0xed, 0xff, 0x4c,
  0x00, 0x00, 0x13, 0xf2, 0xff, 0xfa, 0x40, 0x00, 0x0d, 0x5e, 0xff, 0xee,
  0xff, 0x57, 0x00, 0x00, 0x13, 0xf5, 0xff, 0xf8, 0x52, 0x00, 0x10, 0x2d,
  0xdb, 0xf4, 0xff, 0x6a, 0x00, 0x07, 0x06, 0xeb, 0xff, 0xfc, 0x7a, 0x00,
  0x14, 0x00, 0x9c, 0xf6, 0xff, 0x8b, 0x00, 0x0c, 0x00, 0xd2, 0xff, 0xfe,
  0xaa, 0x00, 0x16, 0x00, 0x5f, 0xf2, 0xff, 0xb3, 0x00, 0x0f, 0x00, 0xa2,
  0xff, 0xf9, 0xed, 0x00, 0x09, 0x00, 0x3a, 0xee, 0xff, 0xf0, 0x11, 0x01,
  0x00, 0x3c, 0xff, 0xee, 0xff, 0x4e, 0x00, 0x07, 0x06, 0xe1, 0xff, 0xff,
  0x53, 0x00, 0x0f, 0x00, 0xe9, 0xfb, 0xff, 0xb1, 0x00, 0x0f, 0x00, 0xb5,
  0xff, 0xff, 0xa9, 0x00, 0x19, 0x00, 0x91, 0xff, 0xf7, 0xfd, 0x11, 0x05,
  0x00, 0x75, 0xff, 0xfb, 0xec, 0x03, 0x05, 0x00, 0x2e, 0xff, 0xef, 0xff,
  0x60, 0x00, 0x02, 0x19, 0xf6, 0xfa, 0xff, 0x53, 0x00, 0x10, 0x00, 0xe2,
  0xfe, 0xff, 0xbb, 0x00, 0x11, 0x00, 0xa6, 0xff, 0xff, 0xb7, 0x00, 0x15,
  0x00, 0x9a, 0xff, 0xf4, 0xff, 0x12, 0x04, 0x00, 0x34, 0xf3, 0xff, 0xe8,
  0x0a, 0x03, 0x00, 0x61, 0xff, 0xe6, 0xff, 0x4b, 0x00, 0x03, 0x04, 0xd4,
  0xff, 0xfd, 0x31, 0x00, 0x00, 0x45, 0xff, 0xe5, 0xff, 0x72, 0x00, 0x09,
  0x00, 0xc2, 0xff, 0xff, 0x37, 0x00, 0x00, 0x65, 0xff, 0xe7, 0xff, 0x5d,
  0x00, 0x04, 0x00, 0x9e, 0xff, 0xec, 0x2e, 0x00, 0x07, 0xaf, 0xff, 0xdb,
  0x85, 0x29, 0x0a, 0x00, 0x03, 0x9b, 0xff, 0xbb, 0x18, 0x00, 0x5e, 0xff,
  0xff, 0x82, 0x00, 0x7b, 0xa1, 0x00, 0x33, 0xf4, 0xff, 0x61, 0x00, 0x38,
  0xee, 0xff, 0xa3, 0x00, 0x33, 0xff, 0x78, 0x00, 0xc3, 0xff, 0x77, 0x00,
  0x1e, 0xd7, 0xff, 0xaf, 0x00, 0x23, 0xf6, 0xad, 0x73, 0xf9, 0xf0, 0x34,
  0x00, 0x74, 0xff, 0xff, 0x8f, 0x00, 0x33, 0xa6, 0x88, 0xcc, 0xff, 0x9b,
  0x00, 0x08, 0xc5, 0xff, 0xef, 0x43, 0x00, 0xab, 0x55, 0x46, 0xfc, 0xff,
  0x8d, 0x00, 0x2b, 0xe1, 0xff, 0xd3, 0x10, 0x00, 0xca, 0x6a, 0x49, 0xfc,
  0xff, 0x57, 0x00, 0x47, 0xf5, 0xff, 0xb9, 0x00, 0x3d, 0xab, 0x1f, 0x9f,
  0xff, 0xd6, 0x20, 0x00, 0x80, 0xff, 0xff, 0x77, 0x00, 0x88, 0x67, 0x00,
  0xc7, 0xff, 0x9d, 0x00, 0x27, 0xe1, 0xff, 0xda, 0x06, 0x20, 0xff, 0x3d,
  0x19, 0xf3, 0xfe, 0x43, 0x00, 0x7b, 0xff, 0xff, 0x7b, 0x00, 0x78, 0xf3,
  0x2a, 0x7e, 0xff, 0xc7, 0x12, 0x00, 0xad, 0xff, 0xfd, 0x60, 0x00, 0xab,
  0x81, 0x0e, 0xda, 0xff, 0x87, 0x00, 0x13, 0xcf, 0xff, 0xe0, 0x13, 0x2d,
  0xa3, 0x00, 0x44, 0xfd, 0xfc, 0x48, 0x00, 0x71, 0xfa, 0xff, 0x80, 0x00,
  0xdb, 0xb7, 0x00, 0x60, 0xff, 0xbe, 0x00, 0x3c, 0xf3, 0xff, 0xb6, 0x00,
  0x37, 0xff, 0x77, 0x2b, 0xf0, 0xef, 0x2e, 0x00, 0x9c, 0xff, 0xff, 0x82,
  0x00, 0x75, 0xc6, 0x17, 0xa7, 0xff, 0x9a, 0x00, 0x0d, 0xdc, 0xff, 0xf8,
  0x31, 0x0c, 0xb2, 0x13, 0x22, 0xfa, 0xfd, 0x4b, 0x00, 0x88, 0xff, 0xff,
  0x7d, 0x04, 0xe8, 0xa9, 0x00, 0x68, 0xff, 0xbd, 0x00, 0x26, 0xe6, 0xff,
  0xaa, 0x00, 0x60, 0xff, 0x55, 0x00, 0xdb, 0xf5, 0x1a, 0x00, 0xb5, 0xff,
  0xec, 0x40, 0x00, 0xdc, 0xb3, 0x05, 0xc1, 0xff, 0x6d, 0x00, 0x54, 0xfe,
  0xff, 0xa4, 0x00, 0x82, 0xe2, 0x00, 0x4e, 0xff, 0xcc, 0x00, 0x0f, 0xd9,
  0xff, 0xce, 0x00, 0x5d, 0xff, 0x42, 0x00, 0xca, 0xff, 0x3a, 0x00, 0xab,
  0xff, 0xf0, 0x2b, 0x0e, 0xff, 0xa4, 0x00, 0x8c, 0xff, 0x7b, 0x00, 0x6d,
  0xff, 0xff, 0x72, 0x00, 0xd2, 0xe6, 0x00, 0x45, 0xff, 0xcb, 0x00, 0x2d,
  0xec, 0xff, 0xb1, 0x00, 0x83, 0xff, 0x20, 0x1a, 0xf4, 0xed, 0x0b, 0x03,
  0xcd, 0xff, 0xd3, 0x03, 0x43, 0xff, 0x69, 0x00, 0xbb, 0xff, 0x43, 0x00,
  0xa4, 0xff, 0xfe, 0x44, 0x03, 0xff, 0xa9, 0x00, 0x86, 0xff, 0x8d, 0x00,
  0x6a, 0xff, 0xff, 0x83, 0x00, 0xe4, 0xdc, 0x00, 0x46, 0xff, 0xc0, 0x00,
  0x4d, 0xf8, 0xff, 0x95, 0x00, 0xbf, 0xff, 0x0d, 0x2b, 0xf3, 0xdd, 0x00,
  0x29, 0xef, 0xff, 0xac, 0x00, 0x8e, 0xff, 0x38, 0x11, 0xda, 0xe1, 0x00,
  0x1b, 0xea, 0xff, 0xbc, 0x00, 0x66, 0xff, 0x3a, 0x26, 0xf6, 0xe6, 0x13,
  0x00, 0xd3, 0xff, 0xca, 0x27, 0x49, 0xff, 0x44, 0x2f, 0xff, 0xca, 0x06,
  0x04, 0xe2, 0xff, 0xb3, 0x2b, 0x7e, 0xe3, 0x06, 0x37, 0xff, 0xf4, 0x2d,
  0x00, 0xb4, 0xff, 0x86, 0x4a, 0xaf, 0xff, 0x59, 0x00, 0xda, 0xfa, 0x24,
  0x00, 0xb9, 0xff, 0x8c, 0x1e, 0xaa, 0xff, 0x35, 0x00, 0xd3, 0xff, 0x46,
  0x00, 0xa5, 0xff, 0x6f, 0x10, 0x9c, 0xff, 0x7c, 0x00, 0xa5, 0xff, 0x45,
  0x00, 0xa5, 0xff, 0x8c, 0x19, 0x70, 0xff, 0x71, 0x00, 0xd9, 0xff, 0x33,
  0x00, 0xc5, 0xff, 0x77, 0x27, 0x9e, 0xff, 0x54, 0x00, 0xd2, 0xff, 0x2b,
  0x00, 0xda, 0xfa, 0x3c, 0x1b, 0xb0, 0xff, 0x5b, 0x05, 0xea, 0xd6, 0x00,
  0x20, 0xfe, 0xe6, 0x45, 0x1b, 0xca, 0xf9, 0x08, 0x45, 0xff, 0xc7, 0x00,
  0x40, 0xff, 0xca, 0x3c, 0x2d, 0xf2, 0xdf, 0x00, 0x4d, 0xff, 0xa3, 0x00,
  0x77, 0xff, 0xa0, 0x25, 0x44, 0xff, 0xbb, 0x00, 0x72, 0xff, 0x57, 0x00,
  0xcd, 0xff, 0x7d, 0x1f, 0x51, 0xff, 0x6d, 0x31, 0xee, 0xd6, 0x09, 0x0f,
  0xff, 0xc7, 0x65, 0x5d, 0xbf, 0xc9, 0x00, 0x78, 0xff, 0x85, 0x00, 0x76,
  0xff, 0x6d, 0x2a, 0x8c, 0xfb, 0x83, 0x00, 0xc6, 0xf3, 0x26, 0x00, 0xdd,
  0xf3, 0x23, 0x23, 0xba, 0xec, 0x1d, 0x49, 0xff, 0xab, 0x00, 0x39, 0xff,
  0xab, 0x14, 0x77, 0xf9, 0x7d, 0x00, 0xa9, 0xff, 0x57, 0x00, 0x9c, 0xff,
  0x4e, 0x14, 0xc5, 0xf6, 0x1d, 0x06, 0xea, 0xed, 0x15, 0x00, 0xf4, 0xd8,
  0x13, 0x68, 0xff, 0xbe, 0x00, 0x4c, 0xff, 0x98, 0x00, 0x5b, 0xff, 0x76,
  0x05, 0xb4, 0xff, 0x74, 0x00, 0x99, 0xff, 0x37, 0x00, 0xcb, 0xf7, 0x10,
  0x46, 0xf7, 0xe3, 0x16, 0x15, 0xfe, 0xa2, 0x00, 0x45, 0xff, 0x81, 0x00,
  0xa7, 0xff, 0x94, 0x00, 0x9d, 0xfd, 0x27, 0x00, 0xbb, 0xff, 0x18, 0x1f,
  0xe6, 0xeb, 0x12, 0x21, 0xff, 0xad, 0x00, 0x36, 0xff, 0x9e, 0x00, 0x98,
  0xff, 0x79, 0x00, 0xa2, 0xff, 0x3a, 0x00, 0xb1, 0xff, 0x0f, 0x57, 0xff,
  0xc5, 0x02, 0x23, 0xff, 0xb1, 0x00, 0x2a, 0xff, 0x8b, 0x00, 0xca, 0xff,
  0x61, 0x00, 0x94, 0xff, 0x50, 0x00, 0x94, 0xff, 0x14, 0x2f, 0xff, 0xe0,
  0x17, 0x08, 0xf7, 0xd1, 0x02, 0x0a, 0xfc, 0xae, 0x00, 0xa4, 0xff, 0x89,
  0x00, 0x67, 0xff, 0x73, 0x00, 0x71, 0xff, 0x2d, 0x24, 0xff, 0xdc, 0x27,
  0x00, 0xe6, 0xce, 0x05, 0x01, 0xec, 0xc2, 0x00, 0xaa, 0xff, 0x6f, 0x00,
  0x7d, 0xff, 0x5e, 0x00, 0x5e, 0xff, 0x38, 0x25, 0xff, 0xc1, 0x12, 0x05,
  0xe0, 0xcc, 0x08, 0x00, 0xe3, 0xc7, 0x00, 0xb5, 0xff, 0x65, 0x00, 0x6f,
  0xfc, 0x57, 0x00, 0x58, 0xff, 0x3a, 0x29, 0xff, 0xb7, 0x0c, 0x21, 0xea,
  0xa9, 0x03, 0x00, 0xdb, 0xca, 0x00, 0xcb, 0xff, 0x50, 0x00, 0x75, 0xfb,
  0x60, 0x00, 0x41, 0xff, 0x4c, 0x1f, 0xff, 0xcb, 0x16, 0x0d, 0xe1, 0xc0,
  0x12, 0x00, 0xc4, 0xe0, 0x00, 0xa1, 0xff, 0x7a, 0x00, 0x5c, 0xf9, 0x64,
  0x00, 0x1e, 0xff, 0x7b, 0x00, 0xff, 0xdd, 0x27, 0x03, 0xb9, 0xd0, 0x2c,
  0x00, 0x94, 0xff, 0x03, 0x72, 0xff, 0x96, 0x09, 0x38, 0xd2, 0x8b, 0x02,
  0x00, 0xdb, 0xc1, 0x00, 0xd7, 0xff, 0x52, 0x25, 0xa3, 0xc2, 0x48, 0x00,
  0x3a, 0xff, 0x51, 0x2b, 0xff, 0xc6, 0x28, 0x38, 0xc2, 0x93, 0x25, 0x00,
  0x6f, 0xff, 0x14, 0x77, 0xff, 0x88, 0x2a, 0x76, 0xb5, 0x68, 0x14, 0x00,
  0xbd, 0xdc, 0x00, 0xc6, 0xff, 0x4e, 0x47, 0xc6, 0xa8, 0x37, 0x00, 0x19,
  0xff, 0x68, 0x2d, 0xff, 0xc1, 0x14, 0x4d, 0xd3, 0x86, 0x3e, 0x00, 0x25,
  0xff, 0x53, 0x43, 0xff, 0x9f, 0x44, 0xa8, 0xaa, 0x70, 0x48, 0x00, 0x7f,
  0xf8, 0x1c, 0x9f, 0xff, 0x8a, 0x49, 0x90, 0x94, 0x62, 0x59, 0x00, 0x6f,
  0xf6, 0x1f, 0xa2, 0xff, 0x86, 0x61, 0x85, 0x7b, 0x96, 0x59, 0x00, 0x95,
  0xe0, 0x10, 0xb1, 0xff, 0x92, 0x66, 0x91, 0x8b, 0x7b, 0x52, 0x00, 0x8d,
  0xea, 0x18, 0xad, 0xff, 0x92, 0x97, 0x99, 0x68, 0x94, 0x80, 0x00, 0x60,
  0xfd, 0x2b, 0x7b, 0xff, 0xa1, 0x9f, 0xa5, 0x6a, 0x97, 0x72, 0x00, 0x6c,
  0xea, 0x19, 0x92, 0xff, 0xb4, 0xa5, 0x95, 0x6f, 0x7c, 0x7b, 0x00, 0x2a,
  0xf8, 0x48, 0x42, 0xff, 0xc0, 0xa1, 0xaa, 0x77, 0x86, 0x62, 0x00, 0x33,
  0xf8, 0x35, 0x53, 0xff, 0xbf, 0x83, 0xca, 0xa7, 0x39, 0x59, 0x00, 0x3a,
  0xee, 0x27, 0x6d, 0xff, 0xb6, 0x99, 0xd1, 0x7f, 0x3c, 0x4c, 0x00, 0x12,
  0xe9, 0x54, 0x45, 0xff, 0xc9, 0x98, 0xcf, 0xa9, 0x42, 0x36, 0x00, 0x3c,
  0xe7, 0x2c, 0x6b, 0xff, 0xad, 0x7d, 0xde, 0xa7, 0x2d, 0x51, 0x28, 0x00,
  0xd3, 0x7c, 0x36, 0xff, 0xda, 0x94, 0xe4, 0xa8, 0x44, 0x63, 0x25, 0x00,
  0xce, 0x85, 0x20, 0xff, 0xec, 0x83, 0xda, 0xd6, 0x51, 0x51, 0x51, 0x00,
  0x91, 0xba, 0x1b, 0xde, 0xff, 0x9c, 0xd8, 0xc0, 0x74, 0x5d, 0x55, 0x00,
  0x2c, 0xe6, 0x32, 0x7c, 0xff, 0xbe, 0xb2, 0xca, 0xa4, 0x5f, 0x46, 0x23,
  0x00, 0xb5, 0x69, 0x37, 0xff, 0xeb, 0xa1, 0xd2, 0xcd, 0x65, 0x51, 0x56,
  0x00, 0x33, 0xdc, 0x20, 0x9b, 0xff, 0xb6, 0xc1, 0xdb, 0xaf, 0x58, 0x48,
  0x3b, 0x00, 0x8d, 0x91, 0x1c, 0xff, 0xee, 0xb1, 0xdd, 0xc8, 0x8b, 0x61,
  0x49, 0x18, 0x00, 0xc1, 0x61, 0x35, 0xff, 0xcf, 0xc5, 0xd4, 0xa9, 0x97,
  0x37, 0x54, 0x06, 0x0a, 0xdd, 0x26, 0x7e, 0xff, 0xb2, 0xe1, 0xc9, 0x8b,
  0x8b, 0x41, 0x5b, 0x00, 0x0c, 0xe1, 0x32, 0x88, 0xff, 0xbe, 0xff, 0x90,
  0x90, 0xb6, 0x10, 0x46, 0x0c, 0x00, 0xc9, 0x4c, 0x74, 0xff, 0xc1, 0xd8,
  0xa1, 0x9c, 0xa5, 0x17, 0x53, 0x40, 0x00, 0x9f, 0x96, 0x4d, 0xff, 0xd2,
  0xd7, 0xa7, 0x8d, 0xa8, 0x27, 0x6a, 0x7d, 0x00, 0x40, 0xff, 0x38, 0x60,
  0xff, 0xdb, 0x92, 0x5b, 0xd0, 0x71, 0x46, 0xa1, 0x37, 0x00, 0x98, 0x94,
  0x13, 0xd3, 0xf8, 0x7d, 0x71, 0xb8, 0xba, 0x3b, 0xaa, 0xb3, 0x2f, 0x00,
  0x72, 0xd7, 0x00, 0x94, 0xff, 0x84, 0x6d, 0xd5, 0xcf, 0x5b, 0xad, 0xad,
  0x28, 0x00, 0x76, 0xa0, 0x00, 0xaa, 0xff, 0x72, 0xa9, 0xe5, 0xb2, 0x4f,
  0xc0, 0xca, 0x28, 0x00, 0x53, 0xa4, 0x01, 0x7a, 0xff, 0x89, 0x6d, 0xf4,
  0xc9, 0x4b, 0x94, 0xe2, 0x33, 0x04, 0x00, 0x82, 0x67, 0x28, 0xf6, 0xcb,
  0x8d, 0xd0, 0xb0, 0x91, 0x81, 0xa8, 0x6e, 0x36, 0x27, 0x18, 0xa0, 0x31,
  0x86, 0xf8, 0x8e, 0x9c, 0xd7, 0x9a, 0x78, 0x8c, 0xb8, 0x5b, 0x3c, 0x2c,
  0x4f, 0x8a, 0x24, 0x9d, 0xce, 0x92, 0xa2, 0xc5, 0xa3, 0x85, 0x78, 0xc1,
  0x75, 0x42, 0x04, 0x74, 0x67, 0x0f, 0xd1, 0xbe, 0x78, 0xcd, 0xcd, 0x8b,
  0x81, 0xb6, 0xab, 0x2a, 0x57, 0x05, 0x6c, 0x50, 0x29, 0xd8, 0xbc, 0x86,
  0xe1, 0xc3, 0x84, 0x88, 0xaa, 0x91, 0x2f, 0x36, 0x15, 0x7f, 0x3b, 0x63,
  0xe1, 0xa5, 0x8f, 0xe0, 0xb2, 0x7a, 0x86, 0xa4, 0x6f, 0x5c, 0x2f, 0x21,
  0xa3, 0x18, 0x65, 0xea, 0xa0, 0x90, 0xd4, 0xa0, 0x86, 0x7e, 0xb3, 0x8c,
  0x4a, 0x23, 0x33, 0x98, 0x25, 0x6f, 0xe0, 0x8d, 0x8b, 0xe4, 0xa6, 0x95,
  0x88, 0xb2, 0x73, 0x4a, 0x3a, 0x29, 0x66, 0x34, 0x77, 0xaf, 0xac, 0xb8,
  0xc1, 0x9e, 0xb0, 0x87, 0x8f, 0x6d, 0x58, 0x0d, 0x2b, 0x80, 0x2b, 0x88,
  0xc9, 0xa1, 0xb8, 0xd3, 0x9d, 0x8b, 0x8f, 0x9a, 0x47, 0x65, 0x28, 0x3b,
  0x72, 0x3a, 0xbd, 0xc6, 0x86, 0xcc, 0xcf, 0x7a, 0x87, 0x9a, 0x90, 0x55,
  0x71, 0x23, 0x53, 0x88, 0x3f, 0xa6, 0xc1, 0x8a, 0xba, 0xbe, 0x86, 0x8c,
  0x9b, 0x9e, 0x5d, 0x66, 0x35, 0x5f, 0x6b, 0x45, 0xab, 0xa6, 0x79, 0xc3,
  0xbb, 0x82, 0xa2, 0xae, 0x8d, 0x63, 0x65, 0x21, 0x61, 0x56, 0x3e, 0xad,
  0x94, 0x85, 0xc6, 0xbe, 0xac, 0x97, 0xa7, 0x8f, 0x59, 0x51, 0x14, 0x74,
  0x51, 0x30, 0xb4, 0xab, 0x95, 0xd1, 0xc9, 0xae, 0x85, 0x98, 0x94, 0x59,
  0x3e, 0x21, 0x75, 0x49, 0x49, 0xb4, 0xab, 0x9a, 0xc0, 0xb9, 0x97, 0x91,
  0xa7, 0x62, 0x5b, 0x52, 0x27, 0x73, 0x51, 0x77, 0xa5, 0x9b, 0xb4, 0xbe,
  0xac, 0x90, 0x9a, 0xa1, 0x61, 0x6d, 0x49, 0x36, 0x75, 0x47, 0x76, 0xaa,
  0x96, 0xa1, 0xc4, 0xaf, 0x83, 0xa1, 0xa9, 0x5b, 0x69, 0x45, 0x46, 0x68,
  0x42, 0x85, 0xa3, 0x93, 0xb0, 0xca, 0xa3, 0x8d, 0xae, 0x8e, 0x58, 0x6a,
  0x34, 0x53, 0x61, 0x45, 0x93, 0x9f, 0x97, 0xb2, 0xc4, 0x9e, 0x7f, 0xa7,
  0x8f, 0x50, 0x57, 0x39, 0x5f, 0x40, 0x4c, 0xb0, 0x90, 0x8d, 0xca, 0xbc,
  0x89, 0x99, 0xa8, 0x73, 0x5d, 0x4e, 0x2f, 0x67, 0x4a, 0x63, 0xa1, 0x95,
  0xa3, 0xbe, 0xb5, 0x91, 0x9d, 0x9d, 0x61, 0x5c, 0x45, 0x4b, 0x6a, 0x42,
  0x86, 0x9b, 0x8e, 0xad, 0xc2, 0xa5, 0x86, 0xa4, 0x8f, 0x58, 0x5a, 0x43,
  0x57, 0x55, 0x4e, 0x92, 0x8b, 0x90, 0xb7, 0xb8, 0x92, 0x99, 0xa4, 0x7a,
  0x63, 0x57, 0x47, 0x5c, 0x4d, 0x64, 0x93, 0x8c, 0xa3, 0xc3, 0xaf, 0x94,
  0xa8, 0x9c, 0x6d, 0x5f, 0x44, 0x49, 0x5b, 0x50, 0x7d, 0x92, 0x95, 0xaf,
  0xbd, 0xad, 0x95, 0x9a, 0x84, 0x5c, 0x4b, 0x3c, 0x5a, 0x54, 0x52, 0x91,
  0x9b, 0x95, 0xb7, 0xbe, 0x97, 0x8d, 0x96, 0x78, 0x58, 0x49, 0x4c, 0x5e,
  0x59, 0x72, 0x97, 0x9b, 0xa9, 0xb7, 0xa5, 0x99, 0x97, 0x8a, 0x61, 0x55,
  0x4c, 0x47, 0x53, 0x67, 0x87, 0x8d, 0xa6, 0xb3, 0xaa, 0x9b, 0x99, 0x95,
  0x75, 0x53, 0x49, 0x45, 0x4e, 0x56, 0x80, 0x95, 0x98, 0xaf, 0xa9, 0xaf,
  0x9f, 0x8c, 0x83, 0x5d, 0x45, 0x49, 0x51, 0x59, 0x6a, 0x8f, 0xa1, 0xa9,
  0xa9, 0xa2, 0xa4, 0x8b, 0x78, 0x67, 0x51, 0x4f, 0x54, 0x51, 0x6d, 0x9b,
  0x93, 0x98, 0xab, 0x9e, 0x98, 0x92, 0x86, 0x6f, 0x57, 0x4d, 0x5a, 0x5f,
  0x5b, 0x87, 0x98, 0x96, 0xa4, 0xa9, 0xa5, 0x91, 0x90, 0x73, 0x5e, 0x57,
  0x51, 0x5b, 0x5e, 0x79, 0x8e, 0x9c, 0xa7, 0xa4, 0xa8, 0x9d, 0x8f, 0x77,
  0x60, 0x55, 0x53, 0x5b, 0x59, 0x7e, 0x8b, 0x97, 0xb2, 0xb3, 0xa6, 0x94,
  0x8e, 0x77, 0x5f, 0x51, 0x5b, 0x63, 0x58, 0x80, 0x9c, 0x95, 0xa8, 0xb6,
  0xa6, 0x8b, 0x8c, 0x71, 0x61, 0x5a, 0x50, 0x65, 0x68, 0x82, 0x92, 0x96,
  0xa7, 0xa6, 0x9f, 0x8d, 0x85, 0x74, 0x60, 0x5c, 0x5f, 0x6a, 0x5f, 0x7b,
  0x96, 0x90, 0x9c, 0xa6, 0x9e, 0x8d, 0x86, 0x75, 0x6f, 0x5c, 0x5e, 0x6c,
  0x63, 0x75, 0x95, 0x94, 0x97, 0xb0, 0xa1, 0x8f, 0x92, 0x81, 0x6a, 0x63,
  0x63, 0x67, 0x68, 0x7e, 0x8d, 0x95, 0xa8, 0xa5, 0x9e, 0x91, 0x86, 0x7c,
  0x5e, 0x55, 0x62, 0x5d, 0x61, 0x84, 0x95, 0x92, 0xaf, 0xae, 0x9c, 0x93,
  0x82, 0x7a, 0x62, 0x59, 0x60, 0x64, 0x6e, 0x85, 0x92, 0x9f, 0xa5, 0xa3,
  0x9c, 0x87, 0x86, 0x72, 0x61, 0x67, 0x64, 0x5e, 0x75, 0x8b, 0x8f, 0x9d,
  0xa2, 0x9c, 0x8b, 0x88, 0x7f, 0x6d, 0x69, 0x65, 0x68, 0x6a, 0x76, 0x8b,
  0x8e, 0x96, 0x9a, 0x90, 0x90, 0x8a, 0x7b, 0x71, 0x6a, 0x69, 0x69, 0x6d,
  0x7c, 0x84, 0x8b, 0x94, 0x8e, 0x88, 0x86, 0x7e, 0x74, 0x6e, 0x67, 0x6a,
  0x6c, 0x75, 0x86, 0x84, 0x8b, 0x95, 0x8c, 0x87, 0x83, 0x79, 0x73, 0x6d,
  0x6a, 0x6f, 0x74, 0x79, 0x84, 0x8c, 0x8c, 0x8a, 0x83, 0x86, 0x7e, 0x75,
  0x74, 0x74, 0x79, 0x78, 0x7a, 0x86, 0x85, 0x86, 0x8b, 0x82, 0x84, 0x7f,
  0x77, 0x7a, 0x79, 0x78, 0x7d, 0x7e, 0x7c, 0x85, 0x85, 0x81, 0x81, 0x7b,
  0x7a, 0x7b, 0x7b, 0x79, 0x7d, 0x82, 0x7e, 0x81, 0x84, 0x80, 0x80, 0x81,
  0x7e, 0x80, 0x82, 0x7e, 0x81, 0x85, 0x83, 0x84, 0x85, 0x81, 0x7d, 0x7f,
  0x7c, 0x7c, 0x7e, 0x82, 0x85, 0x83, 0x80, 0x84, 0x88, 0x81, 0x80, 0x82,
  0x7e, 0x7a, 0x7f, 0x7c, 0x80, 0x84, 0x85, 0x8b, 0x8a, 0x89, 0x87, 0x82,
  0x82, 0x7d, 0x7d, 0x7f, 0x7c, 0x80, 0x80, 0x83, 0x88, 0x84, 0x84, 0x84,
  0x81, 0x82, 0x7e, 0x80, 0x80, 0x7c, 0x7f, 0x81, 0x84, 0x82, 0x84, 0x89,
  0x85, 0x85, 0x83, 0x81, 0x7f, 0x7d, 0x7c, 0x7d, 0x7d, 0x7c, 0x7d, 0x7f,
  0x83, 0x86, 0x88, 0x86, 0x83, 0x81, 0x7d, 0x7b, 0x7b, 0x78, 0x79, 0x7f,
  0x79, 0x7d, 0x86, 0x82, 0x82, 0x85, 0x87, 0x80, 0x7f, 0x81, 0x7c, 0x7b,
  0x7a, 0x7e, 0x7d, 0x7c, 0x80, 0x84, 0x85, 0x82, 0x84, 0x85, 0x7e, 0x7e,
  0x7e, 0x7d, 0x7c, 0x7a, 0x7f, 0x82, 0x82, 0x82, 0x8a, 0x8c, 0x8b, 0x87,
  0x85, 0x89, 0x7e, 0x7b, 0x7e, 0x7b, 0x7b, 0x7d, 0x85, 0x88, 0x84, 0x88,
  0x89, 0x81, 0x81, 0x85, 0x82, 0x7c, 0x79, 0x7c, 0x7f, 0x7e, 0x83, 0x82,
  0x83, 0x87, 0x86, 0x86, 0x85, 0x80, 0x7a, 0x7a, 0x7c, 0x76, 0x78, 0x7f,
  0x7d, 0x7e, 0x83, 0x82, 0x80, 0x83, 0x80, 0x83, 0x82, 0x7f, 0x83, 0x82,
  0x7f, 0x7a, 0x81, 0x7f, 0x7d, 0x82, 0x82, 0x85, 0x86, 0x83, 0x82, 0x85,
  0x80, 0x7f, 0x83, 0x82, 0x81, 0x82, 0x82, 0x82, 0x80, 0x82, 0x83, 0x84,
  0x85, 0x82, 0x84, 0x82, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x82, 0x80, 0x7e,
  0x81, 0x83, 0x85, 0x84, 0x85, 0x88, 0x84, 0x81, 0x85, 0x86, 0x85, 0x81,
  0x83, 0x84, 0x82, 0x80, 0x83, 0x86, 0x81, 0x80, 0x85, 0x83, 0x7b, 0x7d,
  0x80, 0x7f, 0x7f, 0x7e, 0x82, 0x85, 0x82, 0x83, 0x84, 0x81, 0x7f, 0x80,
  0x80, 0x7d, 0x7f, 0x7f, 0x81, 0x81, 0x81, 0x84, 0x81, 0x82, 0x83, 0x84,
  0x83, 0x80, 0x7e, 0x7d, 0x7d, 0x7a, 0x80, 0x87, 0x83, 0x80, 0x83, 0x84,
  0x82, 0x81, 0x84, 0x81, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x7d, 0x7c, 0x7f,
  0x7d, 0x7d, 0x7f, 0x81, 0x81, 0x7d, 0x7d, 0x7f, 0x7f, 0x7d, 0x7c, 0x80,
  0x7f, 0x7d, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x83, 0x7f, 0x7c, 0x7a, 0x7c,
  0x7d, 0x7e, 0x7f, 0x7c, 0x82, 0x82, 0x80, 0x82, 0x82, 0x80, 0x7e, 0x7d,
  0x7f, 0x7f, 0x7e, 0x7d, 0x7d, 0x81, 0x80, 0x7f, 0x7d, 0x7d, 0x7c, 0x7b,
  0x7c, 0x7e, 0x7c, 0x7e, 0x81, 0x81, 0x81, 0x80, 0x83, 0x85, 0x83, 0x83,
  0x84, 0x83, 0x81, 0x81, 0x85, 0x81, 0x81, 0x83, 0x85, 0x84, 0x81, 0x7f,
  0x81, 0x81, 0x82, 0x82, 0x83, 0x82, 0x80, 0x83, 0x84, 0x82, 0x83, 0x84,
  0x82, 0x82, 0x80, 0x84, 0x82, 0x7d, 0x7f, 0x82, 0x83, 0x81, 0x81, 0x82,
  0x82, 0x82, 0x85, 0x81, 0x7d, 0x7c, 0x7b, 0x7d, 0x7e, 0x7d, 0x7f, 0x81,
  0x7e, 0x7d, 0x80, 0x82, 0x7f, 0x7d, 0x7f, 0x7e, 0x7c, 0x7d, 0x82, 0x82,
  0x80, 0x82, 0x85, 0x83, 0x7e, 0x7f, 0x80, 0x80, 0x7c, 0x7b, 0x7f, 0x7e,
  0x7d, 0x7d, 0x7f, 0x80, 0x7c, 0x7c, 0x81, 0x80, 0x7e, 0x7e, 0x82, 0x80,
  0x7d, 0x7e, 0x81, 0x80, 0x7e, 0x81, 0x81, 0x80, 0x7e, 0x7d, 0x7d, 0x80,
  0x80, 0x82, 0x7e, 0x7f, 0x80, 0x7f, 0x81, 0x7f, 0x80, 0x7f, 0x7f, 0x81,
  0x7f, 0x7f, 0x7f, 0x7d, 0x81, 0x7d, 0x7d, 0x80, 0x7f, 0x7f, 0x7e, 0x7e,
  0x7e, 0x80, 0x7f, 0x7d, 0x80, 0x80, 0x80, 0x7f, 0x7f, 0x7f, 0x7e, 0x81,
  0x7d, 0x7c, 0x7c, 0x7c, 0x7e, 0x7d, 0x7f, 0x81, 0x7f, 0x7e, 0x7f, 0x7d,
  0x7b, 0x7d, 0x80, 0x7f, 0x7f, 0x7f, 0x7d, 0x7f, 0x7f, 0x7e, 0x7f, 0x7f,
  0x80, 0x7e, 0x7d, 0x7f, 0x7e, 0x7b, 0x7c, 0x7d, 0x7c, 0x7c, 0x7f, 0x82,
  0x80, 0x7e, 0x7f, 0x7e, 0x7c, 0x7b, 0x7b, 0x7b, 0x7a, 0x7b, 0x7e, 0x7f,
  0x7d, 0x81, 0x81, 0x82, 0x85, 0x81, 0x7f, 0x80, 0x7e, 0x7d, 0x7e, 0x7e,
  0x7f, 0x81, 0x82, 0x83, 0x81, 0x80, 0x82, 0x80, 0x80, 0x81
};
unsigned int hai3_raw_len = 3622;
