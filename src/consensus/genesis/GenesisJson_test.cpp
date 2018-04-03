// Copyright (c) 2017-2018 The CDC developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


// This file is generated by cdcchain_json_to_cpp from ${json_file_name}
#ifdef CDC_TEST_NETWORK
#include <consensus/genesis/GenesisJson.hpp>
#include <consensus/genesis/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>

namespace cdcchain { namespace consensus {
static const unsigned char raw_genesis_config0[] =
{
  0x29, 0x2f, 0x50, 0x5a, 0x00, 0x0a, 0x07, 0x75, 0x62, 0x69, 0x6e, 0x69, 0x74, 
  0x30, 0x03, 0x2d, 0x27, 0x81, 0x29, 0x1a, 0x72, 0x05, 0x7e, 0xd1, 0xf3, 0x29, 
  0x0f, 0xf0, 0x79, 0x1a, 0xc5, 0xb5, 0xda, 0x18, 0xff, 0x85, 0xcc, 0x2f, 0x53, 
  0x7a, 0x73, 0x87, 0xcc, 0xff, 0x54, 0xc2, 0xe2, 0x07, 0x75, 0x62, 0x69, 0x6e, 
  0x69, 0x74, 0x31, 0x03, 0x4c, 0x4a, 0x94, 0x4e, 0x0b, 0x85, 0xd1, 0x5e, 0x95, 
  0x42, 0x89, 0x5c, 0xc3, 0x8a, 0x58, 0x3b, 0x7c, 0x02, 0xbe, 0x72, 0xeb, 0x57, 
  0xe3, 0x23, 0x70, 0x0e, 0xcd, 0xce, 0x37, 0x00, 0xcc, 0x5b, 0x07, 0x75, 0x62, 
  0x69, 0x6e, 0x69, 0x74, 0x32, 0x02, 0x87, 0x03, 0xb7, 0x2c, 0x90, 0x13, 0x55, 
  0xf4, 0x6b, 0x33, 0x4f, 0x2a, 0x1f, 0x83, 0x7a, 0x70, 0xe9, 0x4e, 0xff, 0x91, 
  0xa7, 0xfc, 0x33, 0xb2, 0xbf, 0x7e, 0x79, 0x67, 0xbe, 0x5c, 0xaa, 0xc2, 0x07, 
  0x75, 0x62, 0x69, 0x6e, 0x69, 0x74, 0x33, 0x03, 0x9a, 0xf8, 0x98, 0xe2, 0xd3, 
  0xd2, 0x4d, 0x29, 0x95, 0xea, 0xbe, 0x71, 0x3b, 0x6a, 0x15, 0x33, 0x84, 0x60, 
  0x63, 0x08, 0x8c, 0x28, 0x02, 0x0e, 0x8c, 0x8e, 0x66, 0xc7, 0x84, 0xb0, 0x83, 
  0x6d, 0x07, 0x75, 0x62, 0x69, 0x6e, 0x69, 0x74, 0x34, 0x03, 0xee, 0x80, 0x03, 
  0xe4, 0xd0, 0x25, 0x33, 0xcc, 0x9e, 0x9d, 0x8f, 0x0d, 0xd7, 0x1f, 0x25, 0xb8, 
  0x61, 0x8a, 0x94, 0x16, 0x30, 0x37, 0xc7, 0xd3, 0x8a, 0x1d, 0x18, 0x65, 0xd9, 
  0xa9, 0xe8, 0xbf, 0x07, 0x75, 0x62, 0x69, 0x6e, 0x69, 0x74, 0x35, 0x03, 0x64, 
  0x74, 0xda, 0x6c, 0x0c, 0x28, 0xcf, 0x02, 0x04, 0x42, 0x82, 0x1d, 0x78, 0x31, 
  0x1e, 0x02, 0xf8, 0x78, 0xf8, 0x85, 0x22, 0x18, 0x1a, 0x5b, 0xe3, 0x21, 0x7e, 
  0x87, 0xe0, 0x4d, 0xe1, 0xdb, 0x07, 0x75, 0x62, 0x69, 0x6e, 0x69, 0x74, 0x36, 
  0x02, 0xec, 0x66, 0xca, 0xda, 0x56, 0x10, 0x91, 0xd9, 0x49, 0x43, 0x78, 0x74, 
  0x68, 0xc4, 0xa0, 0x4e, 0x9c, 0xe7, 0xbb, 0x71, 0x96, 0xdc, 0xbb, 0xbf, 0xb6, 
  0xfd, 0x0b, 0x7d, 0x3a, 0x04, 0x5b, 0xf1, 0x07, 0x75, 0x62, 0x69, 0x6e, 0x69, 
  0x74, 0x37, 0x02, 0x2a, 0xf2, 0xa4, 0xf3, 0x4a, 0x82, 0xbd, 0xe0, 0xf8, 0x55, 
  0x13, 0x6e, 0x8c, 0xef, 0x39, 0x44, 0xbf, 0xd0, 0xcb, 0xd1, 0x2e, 0xa6, 0x73, 
  0x49, 0x5e, 0xf3, 0xaa, 0x54, 0x9c, 0x4f, 0x98, 0x3b, 0x07, 0x75, 0x62, 0x69, 
  0x6e, 0x69, 0x74, 0x38, 0x03, 0x3b, 0x9c, 0x2f, 0x10, 0x7e, 0x09, 0x1f, 0xb2, 
  0x08, 0xc7, 0x4b, 0x5a, 0x67, 0x8f, 0x87, 0x33, 0x16, 0xd9, 0x18, 0xb1, 0x0d, 
  0xc1, 0x4a, 0x62, 0x19, 0x17, 0x6e, 0x6d, 0xc5, 0x39, 0xb9, 0xbc, 0x13, 0x6d, 
  0x61, 0x69, 0x6e, 0x74, 0x65, 0x6e, 0x61, 0x6e, 0x63, 0x65, 0x2d, 0x61, 0x63, 
  0x63, 0x6f, 0x75, 0x6e, 0x74, 0x02, 0x85, 0xa8, 0x22, 0xee, 0xca, 0x81, 0x91, 
  0x4e, 0xa5, 0x91, 0xda, 0x4a, 0xaa, 0x20, 0x63, 0x99, 0xbb, 0xb2, 0x55, 0xc8, 
  0x05, 0x11, 0x19, 0x07, 0xd0, 0x36, 0x0e, 0xab, 0xac, 0x65, 0x9e, 0xda, 0x01, 
  0x22, 0x55, 0x64, 0x6d, 0x78, 0x78, 0x63, 0x53, 0x5a, 0x55, 0x33, 0x46, 0x73, 
  0x4a, 0x7a, 0x61, 0x48, 0x4e, 0x44, 0x64, 0x74, 0x59, 0x50, 0x52, 0x41, 0x63, 
  0x41, 0x74, 0x4d, 0x46, 0x70, 0x75, 0x4c, 0x68, 0x34, 0x00, 0x40, 0x07, 0x5a, 
  0xf0, 0x75, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GenesisState get_builtin_genesis_block_config()
{
  unsigned total_size = sizeof(raw_genesis_config0);
  std::unique_ptr<char[]> buffer(new char[total_size]);
  char *ptr = buffer.get();
  memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  ptr += sizeof(raw_genesis_config0);
  return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
}

fc::sha256 get_builtin_genesis_block_state_hash()
{
  fc::sha256::encoder encoder;
  encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  return encoder.result();
}

} } // end namespace cdcchain::consensus
#endif
