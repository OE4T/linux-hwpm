// SPDX-License-Identifier: MIT
/*
 * Copyright (c) 2021-2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "t234_regops_allowlist.h"

struct allowlist t234_perfmon_alist[67] = {
	{0x00000000, true},
	{0x00000004, true},
	{0x00000008, true},
	{0x0000000c, true},
	{0x00000010, true},
	{0x00000014, true},
	{0x00000020, true},
	{0x00000024, true},
	{0x00000028, true},
	{0x0000002c, true},
	{0x00000030, true},
	{0x00000034, true},
	{0x00000040, true},
	{0x00000044, true},
	{0x00000048, true},
	{0x0000004c, true},
	{0x00000050, true},
	{0x00000054, true},
	{0x00000058, true},
	{0x0000005c, true},
	{0x00000060, true},
	{0x00000064, true},
	{0x00000068, true},
	{0x0000006c, true},
	{0x00000070, true},
	{0x00000074, true},
	{0x00000078, true},
	{0x0000007c, true},
	{0x00000080, true},
	{0x00000084, true},
	{0x00000088, true},
	{0x0000008c, true},
	{0x00000090, true},
	{0x00000098, true},
	{0x0000009c, true},
	{0x000000a0, true},
	{0x000000a4, true},
	{0x000000a8, true},
	{0x000000ac, true},
	{0x000000b0, true},
	{0x000000b4, true},
	{0x000000b8, true},
	{0x000000bc, true},
	{0x000000c0, true},
	{0x000000c4, true},
	{0x000000c8, true},
	{0x000000cc, true},
	{0x000000d0, true},
	{0x000000d4, true},
	{0x000000d8, true},
	{0x000000dc, true},
	{0x000000e0, true},
	{0x000000e4, true},
	{0x000000e8, true},
	{0x000000ec, true},
	{0x000000f8, true},
	{0x000000fc, true},
	{0x00000100, true},
	{0x00000108, true},
	{0x00000110, true},
	{0x00000114, true},
	{0x00000118, true},
	{0x0000011c, true},
	{0x00000120, true},
	{0x00000124, true},
	{0x00000128, true},
	{0x00000130, true},
};

struct allowlist t234_pma_res_cmd_slice_rtr_alist[86] = {
	{0x00000000, false},
	{0x00000008, false},
	{0x0000000c, false},
	{0x00000010, false},
	{0x00000014, false},
	{0x0000003c, false},
	{0x00000044, false},
	{0x00000070, false},
	{0x0000008c, false},
	{0x00000600, false},
	{0x00000604, false},
	{0x00000608, false},
	{0x0000060c, false},
	{0x00000610, false},
	{0x00000618, false},
	{0x0000061c, false},
	{0x00000620, false},
	{0x00000624, false},
	{0x0000062c, false},
	{0x00000630, false},
	{0x00000634, false},
	{0x00000638, false},
	{0x0000063c, false},
	{0x00000640, false},
	{0x00000644, false},
	{0x00000648, false},
	{0x0000064c, false},
	{0x00000650, false},
	{0x00000654, false},
	{0x00000658, false},
	{0x0000065c, false},
	{0x00000660, false},
	{0x00000664, false},
	{0x00000668, false},
	{0x0000066c, false},
	{0x00000670, false},
	{0x00000674, false},
	{0x00000678, false},
	{0x0000067c, false},
	{0x00000680, false},
	{0x00000684, false},
	{0x00000688, false},
	{0x0000068c, false},
	{0x00000690, false},
	{0x00000694, false},
	{0x00000698, false},
	{0x0000069c, false},
	{0x000006a0, false},
	{0x000006a4, false},
	{0x000006a8, false},
	{0x000006ac, false},
	{0x000006b0, false},
	{0x000006b4, false},
	{0x000006b8, false},
	{0x000006bc, false},
	{0x000006c0, false},
	{0x000006c4, false},
	{0x000006c8, false},
	{0x000006cc, false},
	{0x000006d0, false},
	{0x000006d4, false},
	{0x000006d8, false},
	{0x000006dc, false},
	{0x000006e0, false},
	{0x000006e4, false},
	{0x000006e8, false},
	{0x000006ec, false},
	{0x000006f0, false},
	{0x000006f4, false},
	{0x000006f8, false},
	{0x000006fc, false},
	{0x00000700, false},
	{0x00000704, false},
	{0x00000708, false},
	{0x0000070c, false},
	{0x00000710, false},
	{0x00000714, false},
	{0x00000718, false},
	{0x0000071c, false},
	{0x00000720, false},
	{0x00000724, false},
	{0x00000728, false},
	{0x0000072c, false},
	{0x00000730, false},
	{0x00000734, false},
	{0x0000075c, false},
};

struct allowlist t234_pma_res_pma_alist[1] = {
	{0x00000628, true},
};

struct allowlist t234_rtr_alist[8] = {
	{0x00000000, false},
	{0x00000008, false},
	{0x0000000c, false},
	{0x00000010, false},
	{0x00000014, false},
	{0x00000018, false},
	{0x00000150, false},
	{0x00000154, false},
};

struct allowlist t234_vi_thi_alist[7] = {
	{0x0000e800, false},
	{0x0000e804, false},
	{0x0000e808, true},
	{0x0000e80c, true},
	{0x0000e810, true},
	{0x0000e814, true},
	{0x0000e818, true},
};

struct allowlist t234_isp_thi_alist[7] = {
	{0x000091c0, false},
	{0x000091c4, false},
	{0x000091c8, true},
	{0x000091cc, true},
	{0x000091d0, true},
	{0x000091d4, true},
	{0x000091d8, true},
};

struct allowlist t234_vic_alist[9] = {
	{0x00001088, false},
	{0x000010a8, false},
	{0x00001c00, true},
	{0x00001c04, true},
	{0x00001c08, true},
	{0x00001c0c, true},
	{0x00001c10, true},
	{0x00001c14, false},
	{0x00001c18, false},
};

struct allowlist t234_ofa_alist[8] = {
	{0x00001088, false},
	{0x000010a8, false},
	{0x00003308, true},
	{0x0000330c, true},
	{0x00003310, true},
	{0x00003314, true},
	{0x00003318, false},
	{0x0000331c, false},
};

struct allowlist t234_pva0_pm_alist[9] = {
	{0x00008000, false},
	{0x00008004, false},
	{0x00008008, false},
	{0x0000800c, true},
	{0x00008010, true},
	{0x00008014, true},
	{0x00008018, true},
	{0x0000801c, true},
	{0x00008020, true},
};

struct allowlist t234_nvdla_alist[37] = {
	{0x00001088, false},
	{0x000010a8, false},
	{0x0001a000, false},
	{0x0001a004, false},
	{0x0001a008, true},
	{0x0001a00c, true},
	{0x0001a010, true},
	{0x0001a014, true},
	{0x0001a018, true},
	{0x0001a01c, true},
	{0x0001a020, true},
	{0x0001a024, true},
	{0x0001a028, true},
	{0x0001a02c, true},
	{0x0001a030, true},
	{0x0001a034, true},
	{0x0001a038, true},
	{0x0001a03c, true},
	{0x0001a040, true},
	{0x0001a044, true},
	{0x0001a048, true},
	{0x0001a04c, true},
	{0x0001a050, true},
	{0x0001a054, true},
	{0x0001a058, true},
	{0x0001a05c, true},
	{0x0001a060, true},
	{0x0001a064, true},
	{0x0001a068, true},
	{0x0001a06c, true},
	{0x0001a070, true},
	{0x0001a074, true},
	{0x0001a078, true},
	{0x0001a07c, true},
	{0x00000008, true},
	{0x00000a00, true},
	{0x00000a20, true},
};

struct allowlist t234_mgbe_alist[2] = {
	{0x00008020, true},
	{0x00008024, false},
};

struct allowlist t234_nvdec_alist[8] = {
	{0x00001088, false},
	{0x000010a8, false},
	{0x00001b48, false},
	{0x00001b4c, false},
	{0x00001b50, true},
	{0x00001b54, true},
	{0x00001b58, true},
	{0x00001b5c, true},
};

struct allowlist t234_nvenc_alist[9] = {
	{0x00001088, false},
	{0x000010a8, false},
	{0x00002134, true},
	{0x00002100, false},
	{0x00002120, false},
	{0x00002124, false},
	{0x00002128, false},
	{0x0000212c, false},
	{0x00002130, false},
};

struct allowlist t234_pcie_ctl_alist[2] = {
	{0x00000174, true},
	{0x00000178, false},
};

struct allowlist t234_disp_alist[3] = {
	{0x0001e118, true},
	{0x0001e120, true},
	{0x0001e124, false},
};

struct allowlist t234_mss_channel_alist[2] = {
	{0x00000814, true},
	{0x0000082c, true},
};

struct allowlist t234_mss_nvlink_alist[33] = {
	{0x00000a30, true},
	{0x00000a80, true},
	{0x00000a84, true},
	{0x00000a88, true},
	{0x00000a8c, true},
	{0x00000a90, true},
	{0x00000a94, true},
	{0x00000a98, true},
	{0x00000a9c, true},
	{0x00000aa0, true},
	{0x00000aa4, true},
	{0x00000aa8, true},
	{0x00000aac, true},
	{0x00000ab0, true},
	{0x00000ab4, true},
	{0x00000ab8, true},
	{0x00000abc, true},
	{0x00000ac0, true},
	{0x00000ac4, true},
	{0x00000ac8, true},
	{0x00000acc, true},
	{0x00000ad0, true},
	{0x00000ad4, true},
	{0x00000ad8, true},
	{0x00000adc, true},
	{0x00000ae0, true},
	{0x00000ae4, true},
	{0x00000ae8, true},
	{0x00000aec, true},
	{0x00000af0, true},
	{0x00000af4, true},
	{0x00000af8, true},
	{0x00000afc, true},
};

struct allowlist t234_mc0to7_res_mss_iso_niso_hub_alist[2] = {
	{0x00000818, true},
	{0x0000081c, true},
};

struct allowlist t234_mc8_res_mss_iso_niso_hub_alist[1] = {
	{0x00000828, true},
};

struct allowlist t234_mcb_res_mss_iso_niso_hub_alist[3] = {
	{0x00000818, true},
	{0x0000081c, true},
	{0x00000828, true},
};

struct allowlist t234_mcb_mss_mcf_alist[4] = {
	{0x00000800, true},
	{0x00000820, true},
	{0x0000080c, true},
	{0x00000824, true},
};

struct allowlist t234_mc0to1_mss_mcf_alist[3] = {
	{0x00000808, true},
	{0x00000804, true},
	{0x00000810, true},
};

struct allowlist t234_mc2to7_mss_mcf_alist[1] = {
	{0x00000810, true},
};
