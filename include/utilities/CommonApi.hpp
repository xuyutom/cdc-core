// Copyright (c) 2017-2018 The CDC developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#pragma once

#include <cstdio>
#include <string>
namespace cdcchain {
    namespace utilities {

        int common_fread_octets(FILE* fp, void* dst_stream, int len);
        int common_fread_int(FILE* fp, int* dst_int);

        int common_fwrite_stream(FILE* fp, const void* src_stream, int len);
        int common_fwrite_int(FILE* fp, const int* src_int);
		bool isNumber(std::string input);
    }
} // end namespace cdcchain::utilities
