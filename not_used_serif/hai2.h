#include <Arduino.h>

const unsigned char hai2_raw[] PROGMEM= {
  0x6d, 0x6d, 0x6d, 0x6c, 0x6b, 0x6c, 0x6c, 0x6b, 0x6b, 0x6b, 0x6c, 0x6c,
  0x6b, 0x6c, 0x6c, 0x6d, 0x6c, 0x6d, 0x6f, 0x6b, 0x69, 0x69, 0x69, 0x6a,
  0x6b, 0x6a, 0x68, 0x67, 0x66, 0x67, 0x69, 0x69, 0x68, 0x6a, 0x69, 0x67,
  0x69, 0x69, 0x6b, 0x6b, 0x6c, 0x6d, 0x6d, 0x6e, 0x6f, 0x6f, 0x6e, 0x6f,
  0x6f, 0x6f, 0x6e, 0x6e, 0x6f, 0x6f, 0x70, 0x72, 0x70, 0x6e, 0x6c, 0x6d,
  0x6d, 0x6c, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x6b, 0x6a, 0x6b, 0x6a, 0x66,
  0x65, 0x66, 0x68, 0x6c, 0x6e, 0x6f, 0x6f, 0x6d, 0x6a, 0x67, 0x63, 0x62,
  0x65, 0x6b, 0x70, 0x73, 0x73, 0x6d, 0x6a, 0x67, 0x65, 0x63, 0x5d, 0x62,
  0x6c, 0x71, 0x73, 0x70, 0x6c, 0x6a, 0x6a, 0x69, 0x67, 0x61, 0x62, 0x69,
  0x71, 0x74, 0x72, 0x6e, 0x6c, 0x6c, 0x69, 0x65, 0x60, 0x5d, 0x65, 0x6e,
  0x70, 0x71, 0x6f, 0x6e, 0x6e, 0x6a, 0x67, 0x63, 0x5d, 0x61, 0x6b, 0x70,
  0x73, 0x72, 0x6d, 0x6c, 0x6a, 0x6b, 0x67, 0x60, 0x5f, 0x67, 0x6f, 0x75,
  0x73, 0x6e, 0x6d, 0x6c, 0x6a, 0x65, 0x5f, 0x5d, 0x64, 0x6f, 0x77, 0x75,
  0x70, 0x6d, 0x6b, 0x6a, 0x68, 0x61, 0x5d, 0x64, 0x6d, 0x76, 0x7a, 0x73,
  0x6e, 0x6e, 0x6e, 0x6a, 0x61, 0x5c, 0x62, 0x6c, 0x76, 0x78, 0x70, 0x6c,
  0x6b, 0x6c, 0x6b, 0x61, 0x59, 0x5c, 0x66, 0x73, 0x76, 0x6e, 0x69, 0x69,
  0x6b, 0x69, 0x61, 0x57, 0x58, 0x65, 0x73, 0x79, 0x72, 0x6a, 0x68, 0x68,
  0x68, 0x60, 0x56, 0x57, 0x64, 0x73, 0x78, 0x6f, 0x67, 0x65, 0x66, 0x65,
  0x5d, 0x50, 0x4e, 0x5c, 0x6b, 0x6e, 0x66, 0x5f, 0x5e, 0x62, 0x63, 0x57,
  0x4a, 0x4d, 0x5c, 0x6e, 0x74, 0x6a, 0x63, 0x60, 0x62, 0x61, 0x56, 0x48,
  0x49, 0x5a, 0x6f, 0x72, 0x68, 0x5f, 0x5f, 0x62, 0x60, 0x51, 0x42, 0x47,
  0x5d, 0x6f, 0x72, 0x65, 0x5c, 0x5c, 0x60, 0x5a, 0x49, 0x3d, 0x47, 0x60,
  0x73, 0x6e, 0x5d, 0x57, 0x5b, 0x5c, 0x55, 0x42, 0x39, 0x4b, 0x66, 0x72,
  0x66, 0x55, 0x52, 0x57, 0x5a, 0x4d, 0x39, 0x36, 0x4b, 0x66, 0x6f, 0x60,
  0x4e, 0x50, 0x57, 0x53, 0x42, 0x2b, 0x31, 0x50, 0x69, 0x69, 0x54, 0x49,
  0x4d, 0x54, 0x51, 0x37, 0x23, 0x35, 0x5a, 0x73, 0x6a, 0x4d, 0x42, 0x4c,
  0x54, 0x47, 0x27, 0x1d, 0x3e, 0x67, 0x79, 0x64, 0x4a, 0x47, 0x4e, 0x4d,
  0x36, 0x16, 0x1f, 0x4e, 0x74, 0x75, 0x52, 0x3c, 0x47, 0x52, 0x49, 0x24,
  0x08, 0x28, 0x65, 0x83, 0x6f, 0x47, 0x3b, 0x49, 0x51, 0x3c, 0x10, 0x0f,
  0x4a, 0x81, 0x83, 0x54, 0x32, 0x41, 0x59, 0x53, 0x24, 0x00, 0x23, 0x71,
  0x9c, 0x81, 0x49, 0x3c, 0x53, 0x5b, 0x3f, 0x0a, 0x07, 0x54, 0x9e, 0xa3,
  0x67, 0x38, 0x4a, 0x68, 0x60, 0x27, 0x00, 0x29, 0x8e, 0xc0, 0x96, 0x4d,
  0x3e, 0x5e, 0x69, 0x40, 0x03, 0x07, 0x6c, 0xc9, 0xbf, 0x68, 0x33, 0x50,
  0x73, 0x5a, 0x16, 0x00, 0x3f, 0xbe, 0xe5, 0x97, 0x3b, 0x3b, 0x6f, 0x72,
  0x30, 0x00, 0x13, 0x98, 0xfe, 0xd2, 0x59, 0x26, 0x5d, 0x83, 0x4f, 0x05,
  0x00, 0x6d, 0xf9, 0xfa, 0x86, 0x21, 0x43, 0x8b, 0x70, 0x1d, 0x00, 0x38,
  0xdb, 0xff, 0xc2, 0x38, 0x23, 0x7c, 0x82, 0x31, 0x00, 0x11, 0xb3, 0xff,
  0xec, 0x5f, 0x05, 0x61, 0x9f, 0x57, 0x01, 0x00, 0x85, 0xff, 0xff, 0x97,
  0x06, 0x39, 0xa4, 0x76, 0x13, 0x00, 0x5b, 0xf8, 0xff, 0xc3, 0x16, 0x0a,
  0x97, 0x9e, 0x2e, 0x00, 0x2f, 0xdd, 0xff, 0xe6, 0x41, 0x00, 0x79, 0xae,
  0x46, 0x00, 0x10, 0xbf, 0xff, 0xf9, 0x67, 0x00, 0x53, 0xbf, 0x67, 0x00,
  0x00, 0x97, 0xff, 0xff, 0x8d, 0x00, 0x2e, 0xbf, 0x89, 0x08, 0x00, 0x71,
  0xff, 0xff, 0xb3, 0x01, 0x09, 0xae, 0xaa, 0x1e, 0x00, 0x4d, 0xf2, 0xff,
  0xd0, 0x1d, 0x00, 0x93, 0xc1, 0x34, 0x00, 0x38, 0xe5, 0xff, 0xde, 0x2f,
  0x00, 0x91, 0xdf, 0x46, 0x00, 0x21, 0xcf, 0xff, 0xed, 0x4c, 0x00, 0x65,
  0xde, 0x5f, 0x00, 0x15, 0xc3, 0xff, 0xf5, 0x5e, 0x00, 0x5b, 0xf7, 0x7a,
  0x00, 0x04, 0xa9, 0xff, 0xff, 0x74, 0x00, 0x39, 0xe7, 0x8e, 0x00, 0x00,
  0x9f, 0xff, 0xff, 0x84, 0x00, 0x28, 0xe5, 0x9e, 0x00, 0x00, 0x9b, 0xff,
  0xff, 0x82, 0x00, 0x2c, 0xe7, 0x98, 0x00, 0x00, 0x99, 0xff, 0xff, 0x84,
  0x00, 0x2c, 0xec, 0x99, 0x00, 0x00, 0x99, 0xff, 0xff, 0x80, 0x00, 0x27,
  0xe7, 0x9b, 0x00, 0x00, 0xa1, 0xff, 0xff, 0x72, 0x00, 0x3d, 0xf9, 0x8f,
  0x00, 0x00, 0xa3, 0xff, 0xff, 0x76, 0x00, 0x37, 0xe7, 0x7f, 0x00, 0x0b,
  0xb4, 0xff, 0xf7, 0x61, 0x00, 0x50, 0xf5, 0x74, 0x00, 0x11, 0xbb, 0xff,
  0xf2, 0x55, 0x00, 0x64, 0xf3, 0x5b, 0x00, 0x22, 0xcd, 0xff, 0xe4, 0x3b,
  0x00, 0x8a, 0xef, 0x40, 0x00, 0x2c, 0xd7, 0xff, 0xd6, 0x29, 0x00, 0x98,
  0xe2, 0x2c, 0x00, 0x43, 0xea, 0xff, 0xc6, 0x13, 0x00, 0xb2, 0xce, 0x14,
  0x00, 0x5f, 0xfb, 0xff, 0xb0, 0x00, 0x00, 0xcd, 0xb2, 0x00, 0x00, 0x7d,
  0xff, 0xff, 0x92, 0x00, 0x23, 0xe9, 0x8f, 0x00, 0x00, 0x96, 0xff, 0xff,
  0x6f, 0x00, 0x40, 0xde, 0x60, 0x00, 0x11, 0xb8, 0xff, 0xed, 0x4c, 0x00,
  0x62, 0xc8, 0x35, 0x00, 0x2a, 0xd5, 0xff, 0xd8, 0x2b, 0x00, 0x6f, 0x98,
  0x12, 0x00, 0x58, 0xf8, 0xff, 0xb4, 0x01, 0x00, 0x8a, 0x6a, 0x00, 0x00,
  0x85, 0xff, 0xff, 0x85, 0x00, 0x2b, 0x95, 0x39, 0x00, 0x0f, 0xb9, 0xff,
  0xf6, 0x57, 0x00, 0x60, 0x8d, 0x16, 0x00, 0x34, 0xe3, 0xff, 0xda, 0x1f,
  0x00, 0x90, 0x69, 0x00, 0x00, 0x66, 0xff, 0xff, 0xad, 0x00, 0x1f, 0x95,
  0x38, 0x00, 0x01, 0xa2, 0xff, 0xff, 0x71, 0x00, 0x55, 0x7e, 0x12, 0x00,
  0x29, 0xdb, 0xff, 0xe7, 0x31, 0x00, 0x7f, 0x5c, 0x00, 0x00, 0x63, 0xff,
  0xff, 0xc6, 0x05, 0x11, 0x77, 0x29, 0x00, 0x00, 0xa5, 0xff, 0xff, 0x8c,
  0x00, 0x3f, 0x53, 0x08, 0x00, 0x2a, 0xe2, 0xff, 0xf5, 0x4d, 0x00, 0x4f,
  0x24, 0x00, 0x00, 0x73, 0xff, 0xff, 0xc5, 0x0c, 0x1c, 0x44, 0x07, 0x00,
  0x0a, 0xc3, 0xff, 0xff, 0x9f, 0x02, 0x2f, 0x1e, 0x00, 0x00, 0x47, 0xf9,
  0xff, 0xf0, 0x4f, 0x0a, 0x29, 0x03, 0x00, 0x00, 0xa5, 0xff, 0xff, 0xd2,
  0x24, 0x0e, 0x0f, 0x02, 0x00, 0x32, 0xf0, 0xff, 0xfe, 0x82, 0x0c, 0x14,
  0x02, 0x00, 0x00, 0x91, 0xff, 0xff, 0xe7, 0x44, 0x11, 0x0c, 0x02, 0x00,
  0x21, 0xe6, 0xff, 0xff, 0xb4, 0x12, 0x00, 0x03, 0x02, 0x00, 0x80, 0xff,
  0xfb, 0xff, 0x75, 0x00, 0x00, 0x08, 0x00, 0x17, 0xdd, 0xff, 0xff, 0xe4,
  0x34, 0x00, 0x05, 0x03, 0x00, 0x75, 0xff, 0xf8, 0xff, 0xa5, 0x05, 0x00,
  0x0a, 0x00, 0x0d, 0xd1, 0xff, 0xfc, 0xfa, 0x4c, 0x00, 0x04, 0x05, 0x00,
  0x60, 0xff, 0xf9, 0xff, 0xc1, 0x0e, 0x00, 0x0b, 0x00, 0x07, 0xc5, 0xff,
  0xf5, 0xff, 0x78, 0x00, 0x01, 0x08, 0x00, 0x53, 0xff, 0xfb, 0xff, 0xed,
  0x33, 0x00, 0x0b, 0x00, 0x00, 0xab, 0xff, 0xf0, 0xff, 0xb2, 0x06, 0x00,
  0x0d, 0x00, 0x36, 0xf8, 0xff, 0xf9, 0xff, 0x67, 0x00, 0x06, 0x03, 0x00,
  0x84, 0xff, 0xf3, 0xff, 0xdd, 0x23, 0x00, 0x0e, 0x00, 0x10, 0xd2, 0xff,
  0xf0, 0xff, 0x9b, 0x00, 0x00, 0x0b, 0x00, 0x4b, 0xff, 0xff, 0xfc, 0xff,
  0x5f, 0x00, 0x07, 0x01, 0x00, 0x8b, 0xff, 0xf2, 0xff, 0xe4, 0x27, 0x00,
  0x0e, 0x00, 0x09, 0xc6, 0xff, 0xee, 0xff, 0xb9, 0x06, 0x00, 0x0e, 0x00,
  0x2c, 0xee, 0xff, 0xf2, 0xff, 0x91, 0x00, 0x00, 0x0a, 0x00, 0x57, 0xff,
  0xff, 0xfa, 0xff, 0x71, 0x00, 0x05, 0x05, 0x00, 0x76, 0xff, 0xf8, 0xff,
  0xff, 0x55, 0x00, 0x09, 0x00, 0x00, 0x8c, 0xff, 0xf4, 0xff, 0xfc, 0x45,
  0x00, 0x0b, 0x00, 0x00, 0x9f, 0xff, 0xf2, 0xff, 0xf6, 0x3e, 0x00, 0x0c,
  0x00, 0x00, 0xa1, 0xff, 0xf1, 0xff, 0xf7, 0x3f, 0x00, 0x0b, 0x00, 0x00,
  0x99, 0xff, 0xf3, 0xff, 0xff, 0x4c, 0x00, 0x08, 0x01, 0x00, 0x80, 0xff,
  0xf8, 0xff, 0xff, 0x62, 0x00, 0x04, 0x06, 0x00, 0x5d, 0xff, 0xff, 0xf8,
  0xff, 0x7f, 0x00, 0x00, 0x09, 0x00, 0x35, 0xf2, 0xff, 0xf0, 0xff, 0xac,
  0x00, 0x00, 0x0b, 0x00, 0x0b, 0xc5, 0xff, 0xee, 0xff, 0xdc, 0x1f, 0x00,
  0x09, 0x00, 0x00, 0x84, 0xff, 0xf6, 0xff, 0xff, 0x52, 0x00, 0x04, 0x06,
  0x00, 0x3c, 0xf8, 0xff, 0xf1, 0xff, 0xa8, 0x00, 0x00, 0x09, 0x00, 0x03,
  0xb4, 0xff, 0xf0, 0xff, 0xf4, 0x3b, 0x00, 0x06, 0x04, 0x00, 0x58, 0xff,
  0xff, 0xf5, 0xff, 0x97, 0x00, 0x00, 0x09, 0x00, 0x0a, 0xc1, 0xff, 0xef,
  0xff, 0xeb, 0x2d, 0x00, 0x06, 0x04, 0x00, 0x4f, 0xff, 0xff, 0xf5, 0xff,
  0x8d, 0x00, 0x00, 0x06, 0x00, 0x00, 0xaa, 0xff, 0xf1, 0xff, 0xf6, 0x3c,
  0x00, 0x04, 0x05, 0x00, 0x35, 0xf2, 0xff, 0xf0, 0xff, 0xb7, 0x06, 0x00,
  0x06, 0x00, 0x00, 0x7d, 0xff, 0xf9, 0xfe, 0xff, 0x6c, 0x00, 0x01, 0x05,
  0x00, 0x0b, 0xc2, 0xff, 0xee, 0xff, 0xd5, 0x19, 0x00, 0x04, 0x04, 0x00,
  0x45, 0xff, 0xff, 0xf8, 0xff, 0x74, 0x00, 0x03, 0x03, 0x00, 0x00, 0xa7,
  0xff, 0xf0, 0xff, 0xcf, 0x37, 0x13, 0x01, 0x04, 0x00, 0x53, 0xff, 0xfe,
  0xff, 0xff, 0x7a, 0x22, 0x05, 0x03, 0x00, 0x1a, 0xd9, 0xff, 0xf5, 0xff,
  0x9d, 0x2a, 0x0c, 0x01, 0x00, 0x04, 0xb2, 0xff, 0xf2, 0xff, 0xb6, 0x26,
  0x0d, 0x02, 0x00, 0x00, 0x95, 0xff, 0xf2, 0xff, 0xc2, 0x19, 0x0d, 0x06,
  0x00, 0x00, 0x75, 0xff, 0xf5, 0xff, 0xdb, 0x28, 0x0f, 0x0a, 0x00, 0x00,
  0x56, 0xff, 0xfb, 0xff, 0xf2, 0x3d, 0x0b, 0x0d, 0x00, 0x00, 0x33, 0xec,
  0xff, 0xfd, 0xff, 0x5d, 0x1d, 0x1a, 0x00, 0x00, 0x0f, 0xc3, 0xff, 0xf6,
  0xff, 0x8a, 0x30, 0x28, 0x00, 0x00, 0x00, 0x8d, 0xff, 0xf6, 0xff, 0xb9,
  0x4c, 0x3b, 0x00, 0x01, 0x00, 0x57, 0xff, 0xfc, 0xff, 0xdd, 0x68, 0x4a,
  0x09, 0x00, 0x00, 0x33, 0xe5, 0xff, 0xff, 0xf2, 0x7a, 0x51, 0x17, 0x00,
  0x00, 0x1c, 0xc4, 0xff, 0xff, 0xff, 0x8a, 0x5a, 0x2d, 0x00, 0x00, 0x0d,
  0x9c, 0xff, 0xfe, 0xff, 0x9c, 0x67, 0x44, 0x00, 0x00, 0x05, 0x77, 0xf3,
  0xff, 0xff, 0xb4, 0x79, 0x59, 0x00, 0x00, 0x00, 0x4c, 0xde, 0xfe, 0xff,
  0xd2, 0x87, 0x6c, 0x0a, 0x00, 0x00, 0x2a, 0xc5, 0xfe, 0xff, 0xf0, 0x91,
  0x72, 0x21, 0x00, 0x01, 0x13, 0x99, 0xf6, 0xff, 0xfe, 0x9b, 0x7a, 0x41,
  0x00, 0x01, 0x09, 0x79, 0xeb, 0xff, 0xff, 0xa9, 0x74, 0x50, 0x00, 0x00,
  0x01, 0x59, 0xde, 0xfa, 0xff, 0xc1, 0x73, 0x5c, 0x06, 0x00, 0x02, 0x44,
  0xce, 0xf9, 0xff, 0xd1, 0x76, 0x69, 0x15, 0x00, 0x08, 0x31, 0xb8, 0xf3,
  0xff, 0xe4, 0x82, 0x75, 0x26, 0x00, 0x0f, 0x24, 0xa5, 0xe6, 0xfe, 0xf3,
  0x81, 0x7c, 0x43, 0x00, 0x1c, 0x23, 0x8f, 0xda, 0xef, 0xfe, 0x86, 0x76,
  0x5d, 0x03, 0x1f, 0x27, 0x76, 0xc8, 0xe2, 0xfe, 0x8b, 0x71, 0x6c, 0x0c,
  0x23, 0x29, 0x63, 0xc0, 0xd8, 0xf9, 0x95, 0x6f, 0x7e, 0x1e, 0x30, 0x33,
  0x53, 0xbd, 0xcb, 0xea, 0xaa, 0x6d, 0x8a, 0x3c, 0x37, 0x39, 0x43, 0xa8,
  0xbe, 0xd9, 0xae, 0x6b, 0x8c, 0x4a, 0x37, 0x42, 0x3f, 0x98, 0xb0, 0xc0,
  0xb2, 0x73, 0x8e, 0x5c, 0x41, 0x4a, 0x3f, 0x90, 0xa8, 0xb5, 0xae, 0x6f,
  0x91, 0x5e, 0x41, 0x5a, 0x42, 0x8e, 0xab, 0xab, 0xa8, 0x6c, 0x90, 0x62,
  0x3b, 0x5f, 0x43, 0x87, 0xad, 0xa8, 0xad, 0x71, 0x93, 0x6c, 0x39, 0x67,
  0x50, 0x8a, 0xb4, 0xa3, 0xa4, 0x72, 0x85, 0x65, 0x3d, 0x63, 0x5e, 0x92,
  0xad, 0xab, 0xa4, 0x69, 0x7d, 0x58, 0x39, 0x60, 0x63, 0xa1, 0xb1, 0xad,
  0xa9, 0x6e, 0x75, 0x4c, 0x3c, 0x5b, 0x64, 0xaa, 0xae, 0xae, 0xb0, 0x6e,
  0x6e, 0x45, 0x35, 0x5d, 0x61, 0xa1, 0xb1, 0xad, 0xb2, 0x74, 0x6d, 0x45,
  0x37, 0x61, 0x62, 0x9a, 0xb3, 0xb1, 0xb5, 0x7b, 0x69, 0x47, 0x39, 0x5d,
  0x5c, 0x8f, 0xb1, 0xae, 0xb5, 0x7f, 0x69, 0x4f, 0x3d, 0x60, 0x59, 0x85,
  0xae, 0xac, 0xba, 0x83, 0x69, 0x61, 0x41, 0x62, 0x5e, 0x76, 0xaf, 0xa8,
  0xae, 0x8d, 0x69, 0x6a, 0x4d, 0x5c, 0x5f, 0x68, 0xa1, 0xa5, 0xa4, 0x92,
  0x6f, 0x75, 0x59, 0x56, 0x67, 0x64, 0x91, 0xa1, 0x97, 0x94, 0x77, 0x79,
  0x64, 0x51, 0x6b, 0x67, 0x7b, 0x9a, 0x8d, 0x93, 0x86, 0x79, 0x74, 0x54,
  0x69, 0x6e, 0x66, 0x88, 0x8b, 0x8f, 0x8a, 0x79, 0x7b, 0x62, 0x69, 0x78,
  0x68, 0x7b, 0x89, 0x8f, 0x91, 0x7a, 0x7b, 0x71, 0x68, 0x75, 0x65, 0x6a,
  0x83, 0x8b, 0x8d, 0x7b, 0x75, 0x76, 0x67, 0x69, 0x66, 0x63, 0x79, 0x83,
  0x85, 0x82, 0x79, 0x7a, 0x71, 0x68, 0x68, 0x6a, 0x78, 0x85, 0x86, 0x85,
  0x80, 0x7c, 0x75, 0x69, 0x65, 0x6b, 0x77, 0x7e, 0x81, 0x85, 0x84, 0x7b,
  0x72, 0x68, 0x64, 0x6b, 0x74, 0x77, 0x79, 0x81, 0x87, 0x7e, 0x72, 0x6a,
  0x67, 0x6f, 0x72, 0x75, 0x7c, 0x7d, 0x82, 0x7b, 0x6f, 0x6c, 0x69, 0x71,
  0x74, 0x74, 0x7c, 0x7f, 0x81, 0x7d, 0x71, 0x70, 0x71, 0x74, 0x79, 0x78,
  0x7c, 0x82, 0x7d, 0x75, 0x73, 0x70, 0x70, 0x77, 0x7a, 0x7b, 0x7e, 0x83,
  0x81, 0x74, 0x74, 0x73, 0x70, 0x77, 0x78, 0x7a, 0x7b, 0x7c, 0x79, 0x6d,
  0x6e, 0x71, 0x6e, 0x75, 0x7a, 0x7b, 0x7d, 0x7c, 0x78, 0x70, 0x71, 0x74,
  0x6d, 0x73, 0x7c, 0x7b, 0x7f, 0x7a, 0x72, 0x72, 0x73, 0x76, 0x74, 0x79,
  0x82, 0x82, 0x84, 0x7c, 0x71, 0x73, 0x75, 0x79, 0x78, 0x77, 0x7f, 0x84,
  0x82, 0x79, 0x71, 0x71, 0x73, 0x76, 0x75, 0x75, 0x7e, 0x81, 0x7d, 0x75,
  0x71, 0x72, 0x71, 0x73, 0x74, 0x77, 0x7f, 0x81, 0x7c, 0x75, 0x72, 0x72,
  0x72, 0x73, 0x75, 0x7c, 0x83, 0x81, 0x7a, 0x75, 0x73, 0x74, 0x72, 0x75,
  0x7c, 0x7f, 0x84, 0x83, 0x7d, 0x7a, 0x7a, 0x79, 0x78, 0x79, 0x7b, 0x81,
  0x86, 0x81, 0x7c, 0x7c, 0x7b, 0x7b, 0x7c, 0x7c, 0x7f, 0x83, 0x84, 0x7f,
  0x7c, 0x7d, 0x7c, 0x7d, 0x80, 0x7f, 0x7e, 0x82, 0x81, 0x7c, 0x7a, 0x7a,
  0x7a, 0x7a, 0x7f, 0x82, 0x81, 0x80, 0x7e, 0x7a, 0x77, 0x78, 0x77, 0x77,
  0x7c, 0x80, 0x81, 0x81, 0x7d, 0x79, 0x78, 0x76, 0x74, 0x76, 0x7b, 0x7d,
  0x7c, 0x7b, 0x79, 0x78, 0x77, 0x75, 0x79, 0x7b, 0x7f, 0x82, 0x7d, 0x7b,
  0x79, 0x77, 0x78, 0x79, 0x7c, 0x7b, 0x7f, 0x81, 0x7d, 0x7d, 0x79, 0x77,
  0x77, 0x79, 0x7d, 0x7d, 0x80, 0x81, 0x81, 0x81, 0x7d, 0x7c, 0x7a, 0x7c,
  0x7d, 0x7c, 0x7c, 0x7c, 0x7d, 0x7e, 0x7c, 0x79, 0x78, 0x7c, 0x7d, 0x7c,
  0x7b, 0x7b, 0x7c, 0x7b, 0x79, 0x77, 0x76, 0x78, 0x77, 0x7a, 0x7b, 0x78,
  0x7a, 0x7a, 0x7a, 0x77, 0x75, 0x79, 0x79, 0x76, 0x76, 0x78, 0x79, 0x7c,
  0x7f, 0x7d, 0x79, 0x7b, 0x78, 0x73, 0x78, 0x79, 0x77, 0x79, 0x7b, 0x7a,
  0x77, 0x75, 0x72, 0x71, 0x75, 0x75, 0x75, 0x79, 0x7c, 0x7d, 0x7c, 0x79,
  0x76, 0x73, 0x74, 0x75, 0x77, 0x79, 0x7c, 0x7e, 0x7b, 0x7a, 0x79, 0x76,
  0x77, 0x79, 0x7b, 0x7d, 0x80, 0x81, 0x81, 0x7c, 0x78, 0x77, 0x78, 0x79,
  0x79, 0x7a, 0x7c, 0x7e, 0x7d, 0x7b, 0x77, 0x76, 0x76, 0x77, 0x79, 0x7a,
  0x7c, 0x7e, 0x7c, 0x7c, 0x79, 0x75, 0x73, 0x74, 0x78, 0x77, 0x7a, 0x7f,
  0x7e, 0x7c, 0x7a, 0x75, 0x74, 0x75, 0x76, 0x77, 0x7a, 0x7b, 0x7a, 0x7a,
  0x77, 0x74, 0x75, 0x73, 0x75, 0x77, 0x77, 0x79, 0x79, 0x78, 0x77, 0x76,
  0x75, 0x73, 0x74, 0x75, 0x78, 0x7b, 0x7a, 0x7c, 0x7d, 0x7b, 0x7a, 0x77,
  0x76, 0x7a, 0x7c, 0x7c, 0x7a, 0x7c, 0x7d, 0x7a, 0x7a, 0x76, 0x73, 0x77,
  0x79, 0x7b, 0x7d, 0x7e, 0x7e, 0x7b, 0x7a, 0x78, 0x73, 0x76, 0x7b, 0x7c,
  0x7c, 0x7f, 0x80, 0x81, 0x7f, 0x7c, 0x79, 0x75, 0x76, 0x79, 0x7c, 0x80,
  0x80, 0x7d, 0x7c, 0x79, 0x77, 0x78, 0x7a, 0x7d, 0x82, 0x82, 0x81, 0x80,
  0x80, 0x7d, 0x7b, 0x7a, 0x79, 0x7a, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x7a,
  0x76, 0x74, 0x74, 0x75, 0x76, 0x7d, 0x80, 0x7d, 0x7c, 0x78, 0x75, 0x74,
  0x75, 0x77, 0x78, 0x7e, 0x84, 0x84, 0x81, 0x7c, 0x7a, 0x78, 0x78, 0x78,
  0x78, 0x7d, 0x81, 0x7f, 0x7d, 0x78, 0x78, 0x77, 0x72, 0x75, 0x7a, 0x7c,
  0x7d, 0x7a, 0x77, 0x76, 0x76, 0x74, 0x73, 0x76, 0x7b, 0x7f, 0x80, 0x7e,
  0x7b, 0x7b, 0x7a, 0x78, 0x79, 0x77, 0x79, 0x7c, 0x7d, 0x7e, 0x7c, 0x7a,
  0x79, 0x79, 0x75, 0x74, 0x79, 0x7a, 0x7a, 0x7a, 0x7a, 0x7a, 0x7b, 0x79,
  0x78, 0x77, 0x79, 0x7c, 0x7b, 0x78, 0x79, 0x78, 0x77, 0x78, 0x78, 0x77,
  0x78, 0x79, 0x77, 0x77, 0x79, 0x77, 0x75, 0x78, 0x77, 0x74, 0x75, 0x78,
  0x78, 0x7a, 0x7e, 0x7e, 0x7c, 0x7b, 0x79, 0x79, 0x78, 0x76, 0x78, 0x77,
  0x77, 0x7a, 0x79, 0x79, 0x7a, 0x79, 0x76, 0x73, 0x75, 0x76, 0x75, 0x77,
  0x79, 0x78, 0x78, 0x7a, 0x7b, 0x79, 0x77, 0x78, 0x79, 0x78, 0x7a, 0x79,
  0x79, 0x7d, 0x7c, 0x77, 0x77, 0x77, 0x79, 0x7a, 0x79, 0x7a, 0x7b, 0x7c,
  0x7c, 0x79, 0x78, 0x78, 0x76, 0x77, 0x7d, 0x7e, 0x7e, 0x83, 0x81, 0x7f,
  0x7e, 0x7c, 0x7c, 0x7e, 0x7d, 0x7d, 0x80, 0x81, 0x80, 0x7f, 0x7e, 0x7c,
  0x7d, 0x7e, 0x80, 0x7f, 0x7f, 0x81, 0x80, 0x7e, 0x7a, 0x76, 0x79, 0x7d,
  0x7b, 0x7a, 0x7e, 0x80, 0x80, 0x7f, 0x7d, 0x79, 0x7c, 0x7f, 0x7b, 0x7c,
  0x7e, 0x80, 0x80, 0x7c, 0x79, 0x7a, 0x79, 0x77, 0x78, 0x7a, 0x7c, 0x80,
  0x82, 0x81, 0x7f, 0x7e, 0x7c, 0x7b, 0x7c, 0x7c, 0x7d, 0x81, 0x84, 0x81,
  0x7d, 0x7b, 0x7c, 0x7a, 0x77, 0x7a, 0x7d, 0x7f, 0x83, 0x83, 0x7f, 0x7d,
  0x7d, 0x7b, 0x79, 0x7e, 0x81, 0x81, 0x82, 0x81, 0x7f, 0x7c, 0x77, 0x75,
  0x78, 0x79, 0x79, 0x7c, 0x7d, 0x7e, 0x7f, 0x7d, 0x78, 0x76, 0x76, 0x78,
  0x7d, 0x7e, 0x80, 0x80, 0x80, 0x82, 0x7e, 0x7c, 0x7c, 0x7d, 0x7e, 0x7f,
  0x80, 0x7f, 0x7f, 0x7d, 0x7b, 0x79, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x80,
  0x80, 0x7b, 0x78, 0x78, 0x78, 0x78, 0x7a, 0x7c, 0x7e, 0x7f, 0x7f, 0x7c,
  0x7a, 0x78, 0x77, 0x78, 0x7b, 0x7e, 0x7f, 0x80, 0x81, 0x80, 0x7d, 0x7c,
  0x7b, 0x7b, 0x7d, 0x81, 0x7e, 0x7d, 0x7c, 0x7a, 0x7a, 0x78, 0x77, 0x77,
  0x7a, 0x7b, 0x7b, 0x7c, 0x7b, 0x7c, 0x7b, 0x78, 0x77, 0x78, 0x7a, 0x7e,
  0x7f, 0x7c, 0x7c, 0x7d, 0x7b, 0x7a, 0x79, 0x79, 0x78, 0x79, 0x7c, 0x7b,
  0x7b, 0x7a, 0x79, 0x79, 0x79, 0x7b, 0x7c, 0x7d, 0x7e, 0x7d, 0x7b, 0x7b,
  0x7c, 0x7a, 0x7a, 0x7c, 0x7b, 0x78, 0x7a, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
  0x7d, 0x7d, 0x7c, 0x7b, 0x7b, 0x7e, 0x7f, 0x7f, 0x80, 0x80, 0x81, 0x7e,
  0x7c, 0x7d, 0x7d, 0x7d, 0x7d, 0x7f, 0x80, 0x7f, 0x7e, 0x7e, 0x7c, 0x78,
  0x7b, 0x7c, 0x7a, 0x7e, 0x80, 0x7c, 0x7d, 0x7e, 0x7c, 0x7d, 0x7c, 0x7b,
  0x7c, 0x7f, 0x80, 0x80, 0x81, 0x7e, 0x7c, 0x7d, 0x7d, 0x7d, 0x7e, 0x7e,
  0x81, 0x81, 0x83, 0x81, 0x7d, 0x7c, 0x7c, 0x7d, 0x7e, 0x81, 0x83, 0x81,
  0x80, 0x81, 0x7e, 0x7c, 0x7d, 0x7d, 0x7d, 0x7f, 0x81, 0x81, 0x80, 0x7e,
  0x7c, 0x7c, 0x7b, 0x7c, 0x7c, 0x7b, 0x80, 0x7f, 0x7d, 0x7d, 0x7b, 0x7a,
  0x7a, 0x7a, 0x7b, 0x7e, 0x7c, 0x7d, 0x7c, 0x7a, 0x79, 0x79, 0x7a, 0x7b,
  0x7c, 0x7f, 0x7f, 0x7e, 0x7e, 0x7d, 0x7b, 0x7b, 0x7d, 0x7d, 0x7d, 0x7d,
  0x7e, 0x7f, 0x7d, 0x7b, 0x7b, 0x7c, 0x7c, 0x7e, 0x7f, 0x7f, 0x80, 0x7f,
  0x7d, 0x7d, 0x7e, 0x7e, 0x7d, 0x7c, 0x7e, 0x7f, 0x7f, 0x7d, 0x7e, 0x7d,
  0x7e, 0x7e, 0x7d, 0x7e, 0x7e, 0x7e, 0x7f, 0x7f, 0x7f, 0x7d, 0x7e, 0x7f,
  0x7f, 0x80, 0x81, 0x82, 0x83, 0x82, 0x81, 0x81, 0x7e, 0x7e, 0x80, 0x7e,
  0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7f, 0x7d, 0x7e, 0x7e, 0x7e, 0x7f, 0x7f,
  0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x81, 0x83, 0x82, 0x81,
  0x80, 0x7f, 0x7f, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x7e, 0x7d, 0x7d, 0x80,
  0x81, 0x80, 0x80, 0x7e, 0x7d, 0x7e, 0x7d, 0x7e, 0x81, 0x80, 0x80, 0x81,
  0x80, 0x80, 0x82, 0x81, 0x7f, 0x7f, 0x7e, 0x80, 0x82, 0x80, 0x7f, 0x81,
  0x80, 0x7f, 0x7e, 0x7d, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x7e, 0x7d, 0x7d,
  0x7d, 0x7d, 0x7e, 0x80, 0x81, 0x81, 0x82, 0x81, 0x80, 0x80, 0x80, 0x81,
  0x81, 0x80, 0x82, 0x81, 0x7e, 0x7e, 0x7d, 0x7d, 0x7f, 0x81, 0x84, 0x84,
  0x84, 0x84, 0x82, 0x81, 0x80, 0x7f, 0x7f, 0x81, 0x83, 0x83, 0x82, 0x82,
  0x80, 0x7e, 0x80, 0x81, 0x7e, 0x7d, 0x7f, 0x81, 0x82, 0x82, 0x81, 0x80,
  0x7f, 0x80, 0x7f, 0x7f, 0x81, 0x81, 0x83, 0x83, 0x84, 0x82, 0x83, 0x85,
  0x83, 0x82, 0x84, 0x85, 0x85, 0x83, 0x82, 0x83, 0x81, 0x80, 0x82, 0x82,
  0x83, 0x84, 0x84, 0x84, 0x84, 0x81, 0x81, 0x81, 0x83, 0x85, 0x83, 0x81,
  0x82, 0x82, 0x82, 0x82, 0x80, 0x80, 0x81, 0x80, 0x7f, 0x81, 0x83, 0x82,
  0x81, 0x82, 0x82, 0x81, 0x81, 0x83, 0x83, 0x85, 0x85, 0x83, 0x82, 0x83,
  0x84, 0x84, 0x84, 0x86, 0x86, 0x85, 0x87, 0x88, 0x87, 0x85, 0x85, 0x83,
  0x84, 0x87, 0x87, 0x88, 0x89, 0x86, 0x84, 0x85, 0x85, 0x84, 0x85, 0x86,
  0x87, 0x88, 0x87, 0x85, 0x85, 0x86, 0x86, 0x87, 0x87, 0x86, 0x83, 0x80,
  0x82, 0x83, 0x83, 0x84, 0x85, 0x84, 0x84, 0x86, 0x84, 0x84, 0x85, 0x84,
  0x85, 0x86, 0x86, 0x86, 0x85, 0x84, 0x83, 0x83, 0x83, 0x84, 0x85, 0x86,
  0x86, 0x86, 0x87, 0x85, 0x85, 0x84, 0x81, 0x80, 0x82, 0x84, 0x84, 0x87,
  0x87, 0x84, 0x84, 0x84, 0x84, 0x84, 0x86, 0x85, 0x85, 0x85, 0x84, 0x83,
  0x83, 0x83, 0x83, 0x85, 0x85, 0x83, 0x85, 0x87, 0x85, 0x84, 0x82, 0x81,
  0x82, 0x84, 0x85, 0x84, 0x83, 0x85, 0x83, 0x82, 0x83, 0x83, 0x86, 0x86,
  0x84, 0x85, 0x86, 0x87, 0x88, 0x86, 0x88, 0x85, 0x83, 0x83, 0x81, 0x85,
  0x86, 0x85, 0x87, 0x86, 0x85, 0x84, 0x83, 0x84, 0x85, 0x86, 0x85, 0x85,
  0x85, 0x84, 0x84, 0x84, 0x86, 0x86, 0x83, 0x83, 0x83, 0x82, 0x81, 0x82,
  0x83, 0x83, 0x82, 0x81, 0x83, 0x83, 0x82, 0x82, 0x80, 0x7f, 0x82, 0x84,
  0x83, 0x82, 0x7f, 0x7f, 0x81, 0x81, 0x81, 0x82, 0x83, 0x83, 0x82, 0x81,
  0x80, 0x81, 0x83, 0x82, 0x82, 0x82, 0x80, 0x7e, 0x7e, 0x7f, 0x80, 0x81,
  0x81, 0x81, 0x81, 0x82, 0x80, 0x80, 0x83, 0x82, 0x80, 0x7f, 0x7f, 0x7e,
  0x7f, 0x82, 0x81, 0x82, 0x82, 0x82, 0x84, 0x84, 0x84, 0x83, 0x82, 0x84,
  0x85, 0x82, 0x83, 0x84, 0x83, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x82,
  0x81, 0x81, 0x83, 0x84, 0x84, 0x86, 0x87, 0x86, 0x85, 0x84, 0x83, 0x84,
  0x85, 0x82, 0x83, 0x85, 0x83, 0x83, 0x83, 0x84, 0x85, 0x84, 0x83, 0x83,
  0x82, 0x81, 0x81, 0x83, 0x84, 0x83, 0x82
};
unsigned int hai2_raw_len = 3127;