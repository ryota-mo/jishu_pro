#include <Arduino.h>

const unsigned char hai_raw[] PROGMEM = {
  0x82, 0x82, 0x82, 0x84, 0x84, 0x83, 0x84, 0x84, 0x85, 0x85, 0x83, 0x81,
  0x80, 0x83, 0x81, 0x80, 0x81, 0x7e, 0x7e, 0x82, 0x83, 0x82, 0x80, 0x80,
  0x83, 0x83, 0x81, 0x81, 0x81, 0x82, 0x82, 0x7f, 0x7f, 0x7f, 0x80, 0x7f,
  0x7f, 0x80, 0x7e, 0x7d, 0x7d, 0x7b, 0x7d, 0x7e, 0x7d, 0x7c, 0x7d, 0x80,
  0x7f, 0x7d, 0x7d, 0x7e, 0x7e, 0x7e, 0x7f, 0x80, 0x80, 0x7f, 0x7f, 0x7f,
  0x82, 0x83, 0x83, 0x82, 0x81, 0x82, 0x80, 0x7c, 0x7e, 0x7e, 0x7d, 0x7f,
  0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x7f, 0x7f, 0x80, 0x80, 0x80, 0x80,
  0x7f, 0x7f, 0x81, 0x82, 0x81, 0x81, 0x81, 0x7e, 0x7d, 0x7e, 0x7e, 0x7e,
  0x7f, 0x7f, 0x7f, 0x7d, 0x7c, 0x7c, 0x7e, 0x7f, 0x7e, 0x7f, 0x80, 0x7e,
  0x7e, 0x7f, 0x7c, 0x7c, 0x7e, 0x7d, 0x7d, 0x7c, 0x7b, 0x7c, 0x7b, 0x7b,
  0x7b, 0x7e, 0x7e, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x7d, 0x7c,
  0x7e, 0x7e, 0x7e, 0x80, 0x80, 0x7f, 0x7e, 0x7e, 0x7e, 0x7b, 0x7b, 0x7b,
  0x7b, 0x7b, 0x7b, 0x7b, 0x7e, 0x7e, 0x7c, 0x7d, 0x7c, 0x7c, 0x7c, 0x7d,
  0x7e, 0x7c, 0x7c, 0x80, 0x81, 0x7f, 0x81, 0x7e, 0x7b, 0x7c, 0x7c, 0x7c,
  0x7d, 0x7e, 0x7d, 0x7d, 0x7b, 0x7a, 0x7d, 0x7e, 0x7e, 0x7f, 0x7d, 0x7c,
  0x7c, 0x7c, 0x7d, 0x7b, 0x79, 0x7a, 0x7d, 0x7d, 0x7b, 0x7c, 0x7c, 0x7d,
  0x7d, 0x7d, 0x7f, 0x7e, 0x7f, 0x81, 0x7f, 0x7f, 0x7f, 0x80, 0x80, 0x7f,
  0x7f, 0x80, 0x81, 0x7e, 0x7d, 0x7e, 0x7f, 0x7e, 0x7e, 0x81, 0x7e, 0x7c,
  0x7e, 0x7b, 0x7b, 0x7e, 0x7d, 0x7d, 0x7e, 0x7d, 0x7c, 0x7b, 0x7b, 0x7a,
  0x7a, 0x7b, 0x7c, 0x7b, 0x7c, 0x7d, 0x7f, 0x7d, 0x7b, 0x7e, 0x7e, 0x7f,
  0x7e, 0x7c, 0x7c, 0x7d, 0x7c, 0x7c, 0x7d, 0x7f, 0x7f, 0x7b, 0x7b, 0x7d,
  0x7e, 0x7e, 0x7d, 0x7b, 0x7c, 0x7c, 0x7a, 0x7b, 0x7c, 0x7c, 0x7d, 0x7d,
  0x7f, 0x7e, 0x7e, 0x7d, 0x7d, 0x7f, 0x7f, 0x7f, 0x82, 0x82, 0x7e, 0x7e,
  0x7f, 0x7e, 0x81, 0x81, 0x7f, 0x80, 0x81, 0x81, 0x82, 0x81, 0x7c, 0x7b,
  0x7b, 0x7b, 0x7d, 0x7d, 0x7a, 0x7b, 0x7f, 0x7e, 0x7c, 0x7b, 0x7a, 0x7d,
  0x7f, 0x7d, 0x7e, 0x81, 0x81, 0x81, 0x80, 0x7f, 0x81, 0x81, 0x7f, 0x7d,
  0x7b, 0x7b, 0x7c, 0x7c, 0x7f, 0x83, 0x82, 0x81, 0x81, 0x81, 0x80, 0x7d,
  0x7c, 0x7e, 0x80, 0x7f, 0x7f, 0x7e, 0x7e, 0x7f, 0x7c, 0x7d, 0x80, 0x7d,
  0x7a, 0x7d, 0x7d, 0x7c, 0x7e, 0x7c, 0x7b, 0x7b, 0x7c, 0x7b, 0x7d, 0x81,
  0x7f, 0x7d, 0x80, 0x83, 0x82, 0x80, 0x7f, 0x80, 0x81, 0x83, 0x80, 0x7e,
  0x80, 0x82, 0x81, 0x80, 0x7e, 0x7b, 0x7e, 0x80, 0x81, 0x81, 0x83, 0x81,
  0x80, 0x80, 0x80, 0x81, 0x82, 0x7e, 0x7e, 0x7d, 0x80, 0x81, 0x82, 0x82,
  0x82, 0x82, 0x81, 0x81, 0x81, 0x80, 0x7f, 0x7f, 0x7d, 0x7e, 0x81, 0x81,
  0x80, 0x81, 0x82, 0x7f, 0x7d, 0x7e, 0x7f, 0x80, 0x7e, 0x7c, 0x7d, 0x7d,
  0x7d, 0x7c, 0x7f, 0x82, 0x81, 0x81, 0x83, 0x81, 0x7f, 0x7f, 0x7f, 0x7f,
  0x80, 0x7d, 0x7d, 0x7f, 0x82, 0x83, 0x82, 0x80, 0x7f, 0x80, 0x81, 0x81,
  0x82, 0x84, 0x85, 0x80, 0x7d, 0x81, 0x84, 0x84, 0x84, 0x83, 0x80, 0x7e,
  0x81, 0x85, 0x82, 0x7e, 0x7f, 0x80, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e,
  0x7d, 0x7c, 0x7b, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x81, 0x82, 0x81, 0x7f,
  0x7f, 0x80, 0x81, 0x82, 0x80, 0x7e, 0x7e, 0x80, 0x81, 0x80, 0x7f, 0x7f,
  0x81, 0x82, 0x81, 0x7f, 0x80, 0x83, 0x80, 0x7e, 0x81, 0x81, 0x7c, 0x79,
  0x78, 0x7a, 0x7c, 0x7e, 0x7d, 0x81, 0x83, 0x83, 0x82, 0x81, 0x83, 0x81,
  0x7f, 0x7d, 0x77, 0x72, 0x70, 0x70, 0x74, 0x7a, 0x7f, 0x83, 0x87, 0x89,
  0x85, 0x84, 0x85, 0x84, 0x82, 0x7c, 0x77, 0x6d, 0x63, 0x64, 0x62, 0x62,
  0x75, 0x90, 0xa8, 0xb0, 0x9e, 0x80, 0x72, 0x78, 0x86, 0x90, 0x81, 0x63,
  0x56, 0x4e, 0x44, 0x45, 0x6d, 0xc4, 0xff, 0xd6, 0x6a, 0x36, 0x61, 0x9b,
  0xae, 0xa7, 0x8a, 0x63, 0x4f, 0x4b, 0x4a, 0x3b, 0x4c, 0xb5, 0xff, 0xed,
  0x77, 0x12, 0x31, 0xa0, 0xd6, 0xbc, 0x92, 0x67, 0x4b, 0x52, 0x5b, 0x4a,
  0x23, 0x4d, 0xd0, 0xff, 0xd9, 0x5b, 0x14, 0x53, 0xb1, 0xc3, 0xa8, 0x8d,
  0x65, 0x50, 0x55, 0x4e, 0x2e, 0x20, 0x8a, 0xfc, 0xff, 0xae, 0x1e, 0x09,
  0x7a, 0xd9, 0xd3, 0xa6, 0x7b, 0x53, 0x4d, 0x53, 0x44, 0x18, 0x48, 0xd7,
  0xff, 0xe5, 0x5a, 0x00, 0x3f, 0xb5, 0xd3, 0xb5, 0x92, 0x61, 0x45, 0x47,
  0x46, 0x1f, 0x2e, 0xb9, 0xff, 0xfb, 0x82, 0x00, 0x15, 0xa0, 0xf3, 0xd4,
  0x9d, 0x62, 0x3f, 0x46, 0x4b, 0x18, 0x07, 0x9f, 0xff, 0xff, 0x95, 0x02,
  0x02, 0x8c, 0xf7, 0xd8, 0x9c, 0x64, 0x39, 0x3d, 0x4c, 0x20, 0x00, 0x91,
  0xff, 0xff, 0xa8, 0x0b, 0x00, 0x85, 0xf7, 0xde, 0xa2, 0x65, 0x32, 0x32,
  0x45, 0x17, 0x0d, 0xae, 0xff, 0xff, 0x94, 0x00, 0x05, 0x9a, 0xff, 0xe1,
  0xa1, 0x5d, 0x2d, 0x34, 0x43, 0x06, 0x26, 0xd2, 0xff, 0xf4, 0x6b, 0x00,
  0x20, 0xbb, 0xff, 0xd4, 0x95, 0x48, 0x22, 0x39, 0x32, 0x00, 0x64, 0xfa,
  0xff, 0xd5, 0x33, 0x00, 0x50, 0xe2, 0xfe, 0xc8, 0x7f, 0x33, 0x21, 0x40,
  0x19, 0x0a, 0xb0, 0xff, 0xff, 0x99, 0x00, 0x04, 0x92, 0xff, 0xec, 0xaf,
  0x5f, 0x1f, 0x22, 0x28, 0x00, 0x59, 0xf7, 0xff, 0xd8, 0x36, 0x00, 0x48,
  0xdd, 0xfa, 0xc6, 0x85, 0x2d, 0x0c, 0x28, 0x01, 0x24, 0xd6, 0xff, 0xf7,
  0x74, 0x00, 0x1b, 0xb3, 0xff, 0xd9, 0xa0, 0x4c, 0x0e, 0x1f, 0x10, 0x04,
  0xa9, 0xff, 0xff, 0xa0, 0x01, 0x00, 0x83, 0xf3, 0xe6, 0xac, 0x63, 0x1d,
  0x19, 0x14, 0x00, 0x7f, 0xff, 0xff, 0xc1, 0x19, 0x00, 0x64, 0xec, 0xf3,
  0xb7, 0x6f, 0x1d, 0x0c, 0x16, 0x00, 0x5f, 0xfb, 0xff, 0xd2, 0x2c, 0x00,
  0x4f, 0xe5, 0xfc, 0xbb, 0x70, 0x19, 0x03, 0x14, 0x00, 0x59, 0xf9, 0xff,
  0xda, 0x38, 0x00, 0x3f, 0xd6, 0xfe, 0xc2, 0x74, 0x1a, 0x00, 0x0b, 0x00,
  0x56, 0xf6, 0xff, 0xdf, 0x3d, 0x00, 0x37, 0xca, 0xff, 0xd1, 0x83, 0x22,
  0x00, 0x07, 0x00, 0x58, 0xf8, 0xff, 0xe2, 0x43, 0x00, 0x32, 0xc3, 0xfa,
  0xcb, 0x83, 0x26, 0x00, 0x08, 0x00, 0x4c, 0xf3, 0xff, 0xe4, 0x47, 0x00,
  0x33, 0xc0, 0xf5, 0xce, 0x8e, 0x2f, 0x00, 0x06, 0x00, 0x62, 0xfe, 0xff,
  0xe3, 0x44, 0x00, 0x41, 0xc4, 0xf1, 0xd3, 0x88, 0x24, 0x00, 0x05, 0x00,
  0x6a, 0xff, 0xff, 0xdb, 0x38, 0x00, 0x4d, 0xca, 0xe8, 0xc4, 0x80, 0x23,
  0x00, 0x04, 0x00, 0x75, 0xff, 0xff, 0xcd, 0x27, 0x00, 0x5c, 0xd5, 0xea,
  0xc5, 0x77, 0x18, 0x01, 0x00, 0x00, 0x96, 0xff, 0xff, 0xbe, 0x16, 0x00,
  0x69, 0xdf, 0xee, 0xc5, 0x71, 0x0f, 0x02, 0x00, 0x03, 0xb1, 0xff, 0xff,
  0xad, 0x06, 0x00, 0x77, 0xe5, 0xf0, 0xc4, 0x64, 0x05, 0x04, 0x00, 0x11,
  0xc5, 0xff, 0xff, 0x9d, 0x00, 0x02, 0x7a, 0xe0, 0xf0, 0xc7, 0x5b, 0x02,
  0x07, 0x00, 0x28, 0xde, 0xff, 0xfc, 0x86, 0x00, 0x12, 0x88, 0xdb, 0xeb,
  0xc0, 0x4d, 0x00, 0x07, 0x00, 0x45, 0xf2, 0xff, 0xf2, 0x66, 0x00, 0x2a,
  0x9c, 0xd6, 0xe0, 0xb4, 0x3f, 0x00, 0x05, 0x00, 0x72, 0xff, 0xff, 0xdf,
  0x3d, 0x00, 0x4a, 0xb1, 0xd1, 0xcf, 0x95, 0x25, 0x02, 0x00, 0x02, 0xad,
  0xff, 0xff, 0xb9, 0x10, 0x02, 0x70, 0xb8, 0xcf, 0xce, 0x80, 0x13, 0x04,
  0x00, 0x21, 0xd9, 0xff, 0xfb, 0x8d, 0x00, 0x1f, 0x8a, 0xb8, 0xce, 0xc1,
  0x63, 0x0c, 0x05, 0x00, 0x5a, 0xfd, 0xff, 0xed, 0x60, 0x00, 0x41, 0x99,
  0xbc, 0xd1, 0xad, 0x42, 0x07, 0x00, 0x00, 0xa1, 0xff, 0xff, 0xce, 0x2c,
  0x04, 0x68, 0xa1, 0xbc, 0xc9, 0x88, 0x1e, 0x05, 0x00, 0x30, 0xe5, 0xff,
  0xf7, 0x97, 0x0c, 0x29, 0x83, 0xad, 0xcb, 0xb7, 0x52, 0x09, 0x02, 0x00,
  0x74, 0xff, 0xff, 0xe3, 0x59, 0x06, 0x51, 0x8f, 0xb1, 0xc9, 0x97, 0x2c,
  0x05, 0x00, 0x15, 0xc6, 0xff, 0xfa, 0xb6, 0x2c, 0x25, 0x70, 0x97, 0xbf,
  0xc0, 0x63, 0x0c, 0x03, 0x00, 0x65, 0xff, 0xff, 0xe7, 0x75, 0x1e, 0x4d,
  0x7e, 0xa4, 0xcd, 0xa0, 0x31, 0x06, 0x00, 0x1c, 0xd0, 0xff, 0xf7, 0xb9,
  0x3f, 0x37, 0x74, 0x8f, 0xba, 0xc2, 0x5a, 0x09, 0x00, 0x00, 0x90, 0xff,
  0xfc, 0xd8, 0x6f, 0x2d, 0x5a, 0x84, 0xa8, 0xcf, 0x97, 0x25, 0x04, 0x00,
  0x35, 0xe6, 0xff, 0xf5, 0xb5, 0x3a, 0x31, 0x6b, 0x8d, 0xc2, 0xc7, 0x5d,
  0x0d, 0x00, 0x00, 0x9b, 0xff, 0xfa, 0xe0, 0x79, 0x2d, 0x54, 0x78, 0xa6,
  0xd1, 0x88, 0x1b, 0x03, 0x00, 0x51, 0xf9, 0xff, 0xeb, 0xb2, 0x48, 0x39,
  0x66, 0x8d, 0xc5, 0xb5, 0x41, 0x06, 0x00, 0x12, 0xc0, 0xff, 0xf2, 0xd5,
  0x75, 0x34, 0x55, 0x7d, 0xb4, 0xd0, 0x71, 0x0f, 0x00, 0x00, 0x7d, 0xff,
  0xfb, 0xe4, 0xac, 0x45, 0x3a, 0x66, 0x96, 0xce, 0xa1, 0x2b, 0x04, 0x00,
  0x2b, 0xdf, 0xff, 0xe8, 0xca, 0x6e, 0x28, 0x55, 0x8b, 0xb3, 0xbd, 0x5c,
  0x0b, 0x00, 0x04, 0xa2, 0xff, 0xf6, 0xdc, 0x99, 0x3b, 0x3a, 0x73, 0xa3,
  0xca, 0x95, 0x29, 0x03, 0x00, 0x4e, 0xf8, 0xff, 0xe8, 0xc3, 0x68, 0x3d,
  0x4a, 0x74, 0xc1, 0xb9, 0x4c, 0x09, 0x00, 0x24, 0xd2, 0xff, 0xec, 0xec,
  0x98, 0x32, 0x49, 0x7a, 0xa5, 0xb7, 0x72, 0x1e, 0x00, 0x00, 0x82, 0xff,
  0xf7, 0xe3, 0xbc, 0x5a, 0x42, 0x5e, 0x81, 0xb7, 0x9b, 0x3a, 0x05, 0x00,
  0x51, 0xf6, 0xff, 0xde, 0xe0, 0x8d, 0x3f, 0x47, 0x71, 0xb0, 0xad, 0x57,
  0x12, 0x00, 0x23, 0xc5, 0xff, 0xe8, 0xea, 0xb5, 0x5c, 0x46, 0x59, 0x94,
  0xb5, 0x7e, 0x2b, 0x00, 0x01, 0x91, 0xff, 0xe8, 0xe4, 0xd9, 0x82, 0x4c,
  0x47, 0x78, 0xaa, 0x90, 0x47, 0x0a, 0x00, 0x61, 0xf2, 0xed, 0xde, 0xeb,
  0x9c, 0x52, 0x44, 0x63, 0x97, 0x92, 0x55, 0x18, 0x00, 0x36, 0xdb, 0xf6,
  0xd1, 0xf0, 0xba, 0x60, 0x40, 0x4e, 0x8d, 0x9e, 0x67, 0x28, 0x00, 0x1a,
  0xb5, 0xf3, 0xc9, 0xee, 0xe3, 0x7c, 0x4e, 0x55, 0x78, 0x96, 0x78, 0x37,
  0x00, 0x0a, 0x91, 0xef, 0xcb, 0xdc, 0xee, 0x93, 0x56, 0x4b, 0x61, 0x8c,
  0x80, 0x4b, 0x15, 0x00, 0x5d, 0xee, 0xe1, 0xca, 0xf0, 0xb3, 0x67, 0x53,
  0x5a, 0x7e, 0x84, 0x57, 0x19, 0x00, 0x4d, 0xd4, 0xdf, 0xc6, 0xef, 0xc5,
  0x72, 0x5c, 0x53, 0x6e, 0x86, 0x67, 0x30, 0x00, 0x2a, 0xba, 0xe8, 0xc2,
  0xea, 0xde, 0x7b, 0x67, 0x66, 0x62, 0x79, 0x6d, 0x3e, 0x05, 0x0d, 0x90,
  0xe7, 0xc3, 0xd7, 0xf0, 0x93, 0x65, 0x63, 0x5a, 0x74, 0x72, 0x48, 0x13,
  0x07, 0x6f, 0xe0, 0xd0, 0xc7, 0xf5, 0xb5, 0x6d, 0x69, 0x60, 0x6d, 0x71,
  0x51, 0x20, 0x00, 0x50, 0xd7, 0xd5, 0xc0, 0xf9, 0xd0, 0x7b, 0x6b, 0x66,
  0x70, 0x77, 0x5e, 0x32, 0x06, 0x3b, 0xc1, 0xdd, 0xbf, 0xef, 0xe1, 0x80,
  0x6b, 0x6a, 0x63, 0x72, 0x65, 0x3a, 0x04, 0x15, 0x98, 0xdb, 0xba, 0xe1,
  0xfb, 0xa4, 0x77, 0x6b, 0x5f, 0x6e, 0x65, 0x46, 0x13, 0x09, 0x81, 0xe0,
  0xbd, 0xd2, 0xff, 0xb0, 0x6f, 0x6f, 0x61, 0x63, 0x67, 0x51, 0x1c, 0x05,
  0x6b, 0xd0, 0xbe, 0xc9, 0xff, 0xc5, 0x7a, 0x77, 0x5f, 0x60, 0x6c, 0x56,
  0x2a, 0x03, 0x4d, 0xc9, 0xc4, 0xb4, 0xfc, 0xde, 0x82, 0x81, 0x6c, 0x55,
  0x6a, 0x5e, 0x33, 0x06, 0x3b, 0xb9, 0xce, 0xb7, 0xf3, 0xef, 0x8a, 0x80,
  0x81, 0x56, 0x62, 0x63, 0x3b, 0x09, 0x23, 0xa2, 0xcd, 0xb2, 0xe8, 0xfb,
  0x9d, 0x7b, 0x83, 0x5e, 0x5a, 0x5d, 0x40, 0x10, 0x13, 0x8c, 0xd0, 0xae,
  0xd8, 0xff, 0xb3, 0x7f, 0x89, 0x63, 0x5a, 0x63, 0x46, 0x17, 0x0d, 0x77,
  0xcc, 0xb2, 0xcf, 0xff, 0xc0, 0x82, 0x88, 0x66, 0x55, 0x63, 0x4f, 0x22,
  0x04, 0x57, 0xc6, 0xb6, 0xbb, 0xff, 0xd8, 0x85, 0x91, 0x7a, 0x51, 0x5f,
  0x56, 0x28, 0x03, 0x45, 0xb9, 0xbd, 0xb8, 0xfb, 0xe7, 0x8b, 0x8c, 0x80,
  0x4f, 0x5f, 0x5a, 0x2c, 0x0a, 0x2b, 0xa4, 0xc3, 0xa9, 0xee, 0xf8, 0x9b,
  0x8b, 0x8d, 0x57, 0x57, 0x5f, 0x36, 0x0e, 0x20, 0x8c, 0xc0, 0xa9, 0xe0,
  0xfe, 0xa5, 0x92, 0x96, 0x58, 0x5b, 0x66, 0x3a, 0x19, 0x19, 0x72, 0xc2,
  0xab, 0xd2, 0xff, 0xbb, 0x8f, 0x9a, 0x62, 0x51, 0x61, 0x44, 0x20, 0x10,
  0x5b, 0xba, 0xaa, 0xc2, 0xff, 0xd1, 0x91, 0xa2, 0x78, 0x4e, 0x61, 0x4c,
  0x23, 0x15, 0x4e, 0xad, 0xb0, 0xb9, 0xff, 0xe2, 0x9f, 0xa5, 0x7c, 0x55,
  0x63, 0x4a, 0x28, 0x14, 0x3e, 0xa5, 0xaf, 0xb1, 0xfb, 0xef, 0xaa, 0xaa,
  0x88, 0x56, 0x5f, 0x52, 0x2e, 0x15, 0x2b, 0x91, 0xb3, 0x9f, 0xe6, 0xf8,
  0xad, 0xa6, 0x96, 0x5a, 0x55, 0x54, 0x2e, 0x13, 0x23, 0x7e, 0xb6, 0xa3,
  0xdb, 0xff, 0xbd, 0xa7, 0x9b, 0x60, 0x53, 0x53, 0x34, 0x17, 0x1a, 0x6c,
  0xb2, 0xa1, 0xca, 0xff, 0xc7, 0xac, 0xa7, 0x6a, 0x58, 0x57, 0x3a, 0x25,
  0x18, 0x4f, 0xa8, 0xa0, 0xb8, 0xfa, 0xd2, 0xa9, 0xaa, 0x78, 0x55, 0x57,
  0x43, 0x25, 0x14, 0x3b, 0x9c, 0xa9, 0xa9, 0xf1, 0xe1, 0xad, 0xb0, 0x81,
  0x58, 0x57, 0x40, 0x26, 0x16, 0x31, 0x8a, 0xa6, 0xac, 0xed, 0xeb, 0xbb,
  0xb4, 0x8c, 0x63, 0x59, 0x44, 0x2c, 0x19, 0x23, 0x77, 0xa8, 0xa5, 0xdb,
  0xf1, 0xc4, 0xb2, 0x95, 0x6a, 0x5c, 0x4c, 0x30, 0x18, 0x14, 0x5d, 0xa1,
  0xa0, 0xcd, 0xf7, 0xd2, 0xbe, 0xa4, 0x72, 0x62, 0x51, 0x36, 0x22, 0x16,
  0x4e, 0x9a, 0xa2, 0xbe, 0xed, 0xdb, 0xbe, 0xa9, 0x7e, 0x5f, 0x51, 0x3d,
  0x26, 0x13, 0x36, 0x8a, 0xa2, 0xb3, 0xea, 0xe4, 0xc6, 0xb3, 0x89, 0x6a,
  0x59, 0x43, 0x2f, 0x17, 0x27, 0x78, 0x99, 0xa4, 0xdd, 0xe8, 0xd1, 0xbb,
  0x8d, 0x6f, 0x58, 0x42, 0x32, 0x1a, 0x1d, 0x63, 0x98, 0xa4, 0xd2, 0xf0,
  0xdc, 0xc8, 0xa0, 0x7b, 0x61, 0x4c, 0x3c, 0x28, 0x1b, 0x48, 0x8b, 0x9d,
  0xbe, 0xe8, 0xe3, 0xcf, 0xad, 0x84, 0x67, 0x4e, 0x3b, 0x2b, 0x17, 0x31,
  0x77, 0x93, 0xab, 0xda, 0xe4, 0xda, 0xbe, 0x95, 0x79, 0x59, 0x41, 0x33,
  0x1d, 0x23, 0x63, 0x8d, 0x9e, 0xcb, 0xed, 0xe4, 0xcc, 0xab, 0x86, 0x63,
  0x50, 0x3c, 0x25, 0x1e, 0x45, 0x84, 0x97, 0xb6, 0xe5, 0xea, 0xd9, 0xbb,
  0x96, 0x70, 0x53, 0x42, 0x2c, 0x18, 0x30, 0x70, 0x8e, 0xa3, 0xd5, 0xec,
  0xdc, 0xc3, 0xa3, 0x7a, 0x59, 0x45, 0x2e, 0x15, 0x18, 0x57, 0x87, 0x95,
  0xc9, 0xf9, 0xea, 0xcb, 0xb3, 0x88, 0x5b, 0x4a, 0x35, 0x19, 0x11, 0x42,
  0x7e, 0x8d, 0xb5, 0xef, 0xf1, 0xd7, 0xbf, 0x9a, 0x6a, 0x51, 0x40, 0x22,
  0x0d, 0x28, 0x6d, 0x87, 0x9f, 0xdf, 0xf7, 0xde, 0xc7, 0xaa, 0x79, 0x58,
  0x49, 0x2c, 0x14, 0x19, 0x52, 0x7f, 0x91, 0xc9, 0xf4, 0xea, 0xd2, 0xb9,
  0x8e, 0x5e, 0x4f, 0x3b, 0x1c, 0x13, 0x38, 0x6e, 0x7e, 0xa2, 0xe2, 0xef,
  0xda, 0xc5, 0xa3, 0x76, 0x5c, 0x49, 0x2b, 0x1b, 0x24, 0x54, 0x77, 0x8a,
  0xc6, 0xef, 0xe4, 0xcf, 0xb4, 0x85, 0x5e, 0x51, 0x37, 0x19, 0x17, 0x38,
  0x67, 0x7a, 0xa4, 0xe0, 0xe8, 0xd6, 0xc3, 0x9f, 0x72, 0x5c, 0x46, 0x25,
  0x17, 0x22, 0x4c, 0x6e, 0x87, 0xbf, 0xe7, 0xe3, 0xd2, 0xb8, 0x8d, 0x67,
  0x56, 0x39, 0x1d, 0x17, 0x30, 0x5c, 0x75, 0x9f, 0xdb, 0xec, 0xdc, 0xcd,
  0xac, 0x7b, 0x63, 0x4f, 0x2f, 0x20, 0x22, 0x43, 0x6b, 0x83, 0xb7, 0xe4,
  0xe4, 0xd8, 0xc2, 0x9c, 0x75, 0x5e, 0x41, 0x27, 0x22, 0x2d, 0x55, 0x75,
  0x95, 0xca, 0xe6, 0xdf, 0xd0, 0xb7, 0x8d, 0x6c, 0x53, 0x36, 0x26, 0x21,
  0x39, 0x62, 0x7b, 0xa6, 0xd7, 0xe3, 0xd6, 0xc7, 0xa8, 0x7a, 0x62, 0x4c,
  0x2f, 0x24, 0x27, 0x44, 0x69, 0x83, 0xb1, 0xd7, 0xd9, 0xcf, 0xbe, 0x93,
  0x6d, 0x5e, 0x40, 0x29, 0x23, 0x2a, 0x51, 0x70, 0x8f, 0xc1, 0xda, 0xd6,
  0xcc, 0xb6, 0x8a, 0x6f, 0x5c, 0x3b, 0x2a, 0x28, 0x38, 0x5d, 0x76, 0x9b,
  0xcc, 0xda, 0xd1, 0xc8, 0xa8, 0x7e, 0x6a, 0x54, 0x39, 0x31, 0x33, 0x43,
  0x63, 0x7d, 0xa4, 0xd0, 0xd8, 0xcc, 0xc1, 0x9f, 0x7f, 0x6d, 0x4d, 0x36,
  0x35, 0x36, 0x4a, 0x6b, 0x88, 0xb2, 0xd4, 0xd3, 0xc9, 0xb9, 0x91, 0x7b,
  0x69, 0x49, 0x3c, 0x38, 0x3b, 0x54, 0x71, 0x91, 0xba, 0xce, 0xcb, 0xc6,
  0xad, 0x8c, 0x7c, 0x61, 0x46, 0x3e, 0x3b, 0x43, 0x5c, 0x7c, 0xa3, 0xbe,
  0xc9, 0xcd, 0xbe, 0xa2, 0x8d, 0x76, 0x58, 0x49, 0x41, 0x40, 0x50, 0x6a,
  0x89, 0xac, 0xc2, 0xc8, 0xc5, 0xb1, 0x97, 0x87, 0x6d, 0x55, 0x4a, 0x45,
  0x49, 0x5b, 0x78, 0x98, 0xb3, 0xc1, 0xc2, 0xb9, 0xa2, 0x8d, 0x79, 0x61,
  0x54, 0x49, 0x47, 0x52, 0x67, 0x85, 0xa0, 0xb0, 0xbc, 0xbe, 0xad, 0x98,
  0x89, 0x71, 0x5d, 0x53, 0x49, 0x49, 0x56, 0x73, 0x8f, 0xa2, 0xb4, 0xba,
  0xb1, 0xa0, 0x91, 0x7f, 0x69, 0x5e, 0x55, 0x4f, 0x56, 0x66, 0x7e, 0x96,
  0xa6, 0xb5, 0xb8, 0xa7, 0x97, 0x89, 0x75, 0x65, 0x5b, 0x54, 0x55, 0x5e,
  0x6e, 0x82, 0x97, 0xa9, 0xb3, 0xb1, 0xa5, 0x9a, 0x89, 0x73, 0x68, 0x5e,
  0x55, 0x59, 0x64, 0x75, 0x8a, 0x9c, 0xab, 0xb3, 0xad, 0x9d, 0x96, 0x8b,
  0x76, 0x6b, 0x61, 0x5c, 0x62, 0x6a, 0x7a, 0x8b, 0x9a, 0xa6, 0xa8, 0x9f,
  0x97, 0x91, 0x80, 0x70, 0x65, 0x61, 0x61, 0x65, 0x71, 0x7e, 0x8d, 0x9e,
  0xa7, 0xa9, 0xa2, 0x9a, 0x90, 0x7d, 0x6e, 0x68, 0x64, 0x64, 0x66, 0x73,
  0x84, 0x91, 0x9e, 0xa2, 0x9f, 0x9c, 0x96, 0x8b, 0x79, 0x6f, 0x68, 0x61,
  0x64, 0x6b, 0x76, 0x83, 0x90, 0x99, 0x9d, 0x9d, 0x96, 0x8e, 0x83, 0x76,
  0x70, 0x6a, 0x68, 0x68, 0x70, 0x7b, 0x83, 0x8f, 0x96, 0x97, 0x99, 0x95,
  0x8e, 0x84, 0x77, 0x6f, 0x69, 0x6b, 0x6d, 0x70, 0x7e, 0x85, 0x8d, 0x95,
  0x97, 0x97, 0x92, 0x8b, 0x7f, 0x74, 0x6f, 0x6b, 0x69, 0x6c, 0x74, 0x7e,
  0x87, 0x8f, 0x94, 0x96, 0x91, 0x8c, 0x85, 0x7c, 0x76, 0x71, 0x6e, 0x6c,
  0x6d, 0x75, 0x7d, 0x85, 0x8c, 0x91, 0x92, 0x8e, 0x89, 0x84, 0x79, 0x72,
  0x6f, 0x6c, 0x6d, 0x73, 0x76, 0x7a, 0x83, 0x8a, 0x8d, 0x8d, 0x8e, 0x8a,
  0x83, 0x7c, 0x75, 0x70, 0x6b, 0x6c, 0x73, 0x76, 0x7c, 0x84, 0x89, 0x8b,
  0x8c, 0x8b, 0x87, 0x82, 0x7b, 0x75, 0x71, 0x72, 0x74, 0x74, 0x79, 0x7e,
  0x83, 0x88, 0x89, 0x8d, 0x8c, 0x86, 0x81, 0x7a, 0x74, 0x73, 0x74, 0x76,
  0x76, 0x7a, 0x80, 0x83, 0x87, 0x87, 0x89, 0x8b, 0x87, 0x82, 0x7c, 0x7a,
  0x79, 0x77, 0x7a, 0x7c, 0x7e, 0x84, 0x88, 0x89, 0x8c, 0x8b, 0x87, 0x84,
  0x81, 0x7d, 0x79, 0x78, 0x79, 0x7a, 0x7b, 0x7d, 0x80, 0x83, 0x86, 0x89,
  0x89, 0x86, 0x82, 0x7f, 0x7b, 0x78, 0x76, 0x78, 0x7a, 0x7a, 0x7e, 0x82,
  0x83, 0x86, 0x88, 0x87, 0x84, 0x81, 0x7f, 0x7d, 0x7b, 0x7b, 0x7b, 0x7a,
  0x79, 0x7b, 0x7e, 0x7f, 0x81, 0x83, 0x84, 0x80, 0x7c, 0x7c, 0x78, 0x75,
  0x76, 0x74, 0x74, 0x76, 0x79, 0x7d, 0x7d, 0x7e, 0x7f, 0x7e, 0x7d, 0x7c,
  0x79, 0x78, 0x78, 0x75, 0x74, 0x74, 0x76, 0x79, 0x7a, 0x7c, 0x7e, 0x7f,
  0x80, 0x80, 0x7e, 0x7a, 0x7a, 0x7a, 0x77, 0x77, 0x76, 0x78, 0x7b, 0x7b,
  0x80, 0x81, 0x82, 0x84, 0x83, 0x82, 0x7f, 0x7c, 0x7b, 0x7a, 0x79, 0x7a,
  0x7b, 0x7d, 0x7e, 0x7d, 0x7e, 0x83, 0x83, 0x7e, 0x7e, 0x7e, 0x7c, 0x79,
  0x79, 0x78, 0x7a, 0x7c, 0x7d, 0x80, 0x83, 0x83, 0x81, 0x81, 0x82, 0x7f,
  0x7d, 0x7f, 0x7d, 0x7c, 0x7d, 0x7e, 0x80, 0x81, 0x81, 0x83, 0x86, 0x83,
  0x82, 0x81, 0x7e, 0x7f, 0x7d, 0x7c, 0x7c, 0x7d, 0x7e, 0x7e, 0x81, 0x86,
  0x84, 0x81, 0x83, 0x82, 0x7f, 0x7e, 0x7e, 0x7e, 0x7c, 0x7d, 0x7d, 0x7d,
  0x81, 0x82, 0x7f, 0x80, 0x83, 0x81, 0x80, 0x7e, 0x7c, 0x7b, 0x7a, 0x7b,
  0x7c, 0x7e, 0x81, 0x81, 0x7f, 0x80, 0x82, 0x84, 0x84, 0x81, 0x82, 0x81,
  0x7f, 0x81, 0x82, 0x80, 0x7e, 0x7f, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80,
  0x80, 0x7c, 0x7b, 0x79, 0x79, 0x7b, 0x7b, 0x7b, 0x7b, 0x7d, 0x7e, 0x7e,
  0x7f, 0x7e, 0x7d, 0x7b, 0x78, 0x77, 0x76, 0x76, 0x77, 0x77, 0x78, 0x7a,
  0x7c, 0x7d, 0x7e, 0x7e, 0x7c, 0x7a, 0x79, 0x78, 0x79, 0x7a, 0x77, 0x78,
  0x7a, 0x7b, 0x7e, 0x7f, 0x80, 0x7f, 0x7e, 0x7f, 0x7b, 0x7b, 0x7b, 0x79,
  0x7a, 0x7c, 0x7e, 0x7f, 0x80, 0x81, 0x81, 0x84, 0x83, 0x81, 0x7f, 0x7e,
  0x7e, 0x7b, 0x7b, 0x7b, 0x7b, 0x7f, 0x82, 0x83, 0x84, 0x83, 0x82, 0x81,
  0x81, 0x80, 0x80, 0x7f, 0x7d, 0x7e, 0x83, 0x82, 0x7f, 0x80, 0x83, 0x85,
  0x87, 0x84, 0x80, 0x81, 0x80, 0x7c, 0x7b, 0x7c, 0x80, 0x7f, 0x80, 0x81,
  0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x7f, 0x7d, 0x79, 0x7a, 0x7d,
  0x7e, 0x7d, 0x7f, 0x7f, 0x7d, 0x7e, 0x7e, 0x7c, 0x7c, 0x7d, 0x7b, 0x78,
  0x7c, 0x7e, 0x7d, 0x7e, 0x7f, 0x7f, 0x80, 0x80, 0x7e, 0x7f, 0x7e, 0x7a,
  0x7a, 0x7b, 0x7a, 0x7b, 0x7b, 0x7d, 0x7e, 0x7f, 0x80, 0x80, 0x7f, 0x80,
  0x80, 0x7f, 0x7e, 0x7e, 0x7d, 0x7a, 0x7c, 0x7f, 0x80, 0x80, 0x80, 0x80,
  0x80, 0x7e, 0x7e, 0x7f, 0x7f, 0x80, 0x7f, 0x7c, 0x7a, 0x7b, 0x7d, 0x7e,
  0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x7d, 0x7d, 0x7e, 0x7f, 0x80,
  0x80, 0x81, 0x81, 0x84, 0x83, 0x81, 0x84, 0x83, 0x81, 0x81, 0x80, 0x7f,
  0x7f, 0x7f, 0x7f, 0x83, 0x83, 0x84, 0x87, 0x84, 0x84, 0x84, 0x82, 0x83,
  0x82, 0x81, 0x7f, 0x7e, 0x81, 0x81, 0x80, 0x82, 0x82, 0x80, 0x82, 0x80,
  0x7f, 0x81, 0x7f, 0x7f, 0x7e, 0x7d, 0x7e, 0x7e, 0x7c, 0x7c, 0x7e, 0x80,
  0x81, 0x81, 0x80, 0x80, 0x82, 0x83, 0x80, 0x80, 0x81, 0x80, 0x7e, 0x7d,
  0x7f, 0x81, 0x7f, 0x80, 0x84, 0x83, 0x82, 0x81, 0x7f, 0x7f, 0x81, 0x83,
  0x81, 0x7f, 0x7c, 0x7d, 0x80, 0x82, 0x83, 0x83, 0x7f, 0x81, 0x81, 0x82,
  0x84, 0x84, 0x83, 0x7f, 0x7e, 0x80, 0x83, 0x85, 0x86, 0x87, 0x85, 0x85,
  0x84, 0x82, 0x82, 0x81, 0x80, 0x81, 0x81, 0x82, 0x83, 0x81, 0x80, 0x7f,
  0x7f, 0x82, 0x82, 0x81, 0x7f, 0x7f, 0x7e, 0x7d, 0x7d, 0x7f, 0x82, 0x82,
  0x83, 0x84, 0x82, 0x80, 0x80, 0x7f, 0x7d, 0x7e, 0x7e, 0x7c, 0x7e, 0x7d,
  0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x7f, 0x7e, 0x81, 0x81, 0x80, 0x80, 0x80,
  0x82, 0x80, 0x7e, 0x7e, 0x7e, 0x7d, 0x7d, 0x7f, 0x7f, 0x7f, 0x80, 0x81,
  0x7e, 0x7d, 0x7f, 0x7f, 0x80, 0x80, 0x81, 0x7f, 0x7e, 0x7d, 0x7f, 0x81,
  0x7f, 0x7e, 0x80, 0x82, 0x82, 0x81, 0x81, 0x82, 0x80, 0x7e, 0x7e, 0x80,
  0x82, 0x84, 0x84, 0x83, 0x81, 0x83, 0x82, 0x7d, 0x7e, 0x7f, 0x81, 0x81,
  0x81, 0x83, 0x82, 0x82, 0x7f, 0x7e, 0x7f, 0x7e, 0x7f, 0x7e, 0x7e, 0x7c,
  0x7b, 0x7d, 0x80, 0x7e, 0x7e, 0x7f, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x81,
  0x7f, 0x7f, 0x7e, 0x7d, 0x7f, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80,
  0x81, 0x83, 0x83, 0x82, 0x81, 0x81, 0x81, 0x7f, 0x7e, 0x81, 0x84, 0x82,
  0x81, 0x84, 0x82, 0x7f, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x82, 0x80,
  0x7e, 0x7d, 0x7c, 0x7e, 0x7f, 0x7f, 0x80, 0x7f, 0x7e, 0x7d, 0x7d, 0x80,
  0x81, 0x81, 0x82, 0x82, 0x82, 0x80, 0x81, 0x84, 0x84, 0x85, 0x85, 0x84,
  0x82, 0x7d, 0x7f, 0x80, 0x80, 0x82, 0x81, 0x7f, 0x81, 0x81, 0x7f, 0x82,
  0x83, 0x81, 0x82, 0x83, 0x83, 0x83, 0x83, 0x83, 0x84, 0x83, 0x82, 0x82,
  0x80, 0x80, 0x80, 0x7e, 0x7e, 0x7f, 0x81, 0x80, 0x81, 0x81, 0x7f, 0x7d,
  0x7c, 0x7d, 0x7e, 0x81, 0x85, 0x85, 0x83, 0x82, 0x83, 0x83, 0x81, 0x83,
  0x80, 0x7f, 0x83, 0x82, 0x81, 0x7f, 0x7f, 0x81, 0x80, 0x81, 0x81, 0x80,
  0x81, 0x82, 0x81, 0x81, 0x82, 0x81, 0x82, 0x84, 0x84, 0x84, 0x83
};
unsigned int hai_raw_len = 3251;