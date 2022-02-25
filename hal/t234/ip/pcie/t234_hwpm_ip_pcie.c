/*
 * Copyright (c) 2021-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#include "t234_hwpm_ip_pcie.h"

#include <tegra_hwpm.h>
#include <hal/t234/t234_hwpm_regops_allowlist.h>
#include <hal/t234/hw/t234_addr_map_soc_hwpm.h>

hwpm_ip_perfmon t234_pcie_perfmon_static_array[
	T234_HWPM_IP_PCIE_NUM_PERFMON_PER_INST *
	T234_HWPM_IP_PCIE_NUM_INSTANCES] = {
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(0),
		.dt_mmio = NULL,
		.name = "perfmon_pcie0",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c0_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c0_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(1),
		.dt_mmio = NULL,
		.name = "perfmon_pcie1",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c1_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c1_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(2),
		.dt_mmio = NULL,
		.name = "perfmon_pcie2",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c2_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c2_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(3),
		.dt_mmio = NULL,
		.name = "perfmon_pcie3",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c3_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c3_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(4),
		.dt_mmio = NULL,
		.name = "perfmon_pcie4",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c4_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c4_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(5),
		.dt_mmio = NULL,
		.name = "perfmon_pcie5",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c5_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c5_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(6),
		.dt_mmio = NULL,
		.name = "perfmon_pcie6",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c6_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c6_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(7),
		.dt_mmio = NULL,
		.name = "perfmon_pcie7",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c7_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c7_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(8),
		.dt_mmio = NULL,
		.name = "perfmon_pcie8",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c8_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c8_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(9),
		.dt_mmio = NULL,
		.name = "perfmon_pcie9",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c9_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c9_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = true,
		.hw_inst_mask = BIT(10),
		.dt_mmio = NULL,
		.name = "perfmon_pcie10",
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_rpg_pm_pcie_c10_base_r(),
		.end_abs_pa = addr_map_rpg_pm_pcie_c10_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = addr_map_rpg_pm_base_r(),
		.alist = t234_perfmon_alist,
		.alist_size = ARRAY_SIZE(t234_perfmon_alist),
		.fake_registers = NULL,
	},
};

hwpm_ip_perfmux t234_pcie_perfmux_static_array[
	T234_HWPM_IP_PCIE_NUM_PERFMUX_PER_INST *
	T234_HWPM_IP_PCIE_NUM_INSTANCES] = {
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(8),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c8_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c8_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(9),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c9_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c9_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(10),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c10_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c10_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(1),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c1_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c1_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(2),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c2_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c2_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(3),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c3_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c3_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(4),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c4_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c4_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(0),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c0_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c0_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(5),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c5_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c5_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(6),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c6_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c6_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
	{
		.is_hwpm_element = false,
		.hw_inst_mask = BIT(7),
		.dt_mmio = NULL,
		.name = {'\0'},
		.ip_ops = {
			.ip_dev = NULL,
			.hwpm_ip_pm = NULL,
			.hwpm_ip_reg_op = NULL,
		},
		.start_abs_pa = addr_map_pcie_c7_ctl_base_r(),
		.end_abs_pa = addr_map_pcie_c7_ctl_limit_r(),
		.start_pa = 0ULL,
		.end_pa = 0ULL,
		.base_pa = 0ULL,
		.alist = t234_pcie_ctl_alist,
		.alist_size = ARRAY_SIZE(t234_pcie_ctl_alist),
		.fake_registers = NULL,
	},
};

struct hwpm_ip t234_hwpm_ip_pcie = {
	.num_instances = T234_HWPM_IP_PCIE_NUM_INSTANCES,
	.num_perfmon_per_inst = T234_HWPM_IP_PCIE_NUM_PERFMON_PER_INST,
	.num_perfmux_per_inst = T234_HWPM_IP_PCIE_NUM_PERFMUX_PER_INST,

	.perfmon_range_start = addr_map_rpg_pm_pcie_c0_base_r(),
	.perfmon_range_end = addr_map_rpg_pm_pcie_c10_limit_r(),
	.inst_perfmon_stride = addr_map_rpg_pm_pcie_c0_limit_r() -
			addr_map_rpg_pm_pcie_c0_base_r() + 1ULL,
	.num_perfmon_slots = 0U,
	.ip_perfmon = NULL,

	.perfmux_range_start = addr_map_pcie_c8_ctl_base_r(),
	.perfmux_range_end = addr_map_pcie_c7_ctl_limit_r(),
	.inst_perfmux_stride = addr_map_pcie_c8_ctl_limit_r() -
			addr_map_pcie_c8_ctl_base_r() + 1ULL,
	.num_perfmux_slots = 0U,
	.ip_perfmux = NULL,

	.override_enable = false,
	.fs_mask = 0U,
	.perfmon_static_array = t234_pcie_perfmon_static_array,
	.perfmux_static_array = t234_pcie_perfmux_static_array,
	.reserved = false,
};
