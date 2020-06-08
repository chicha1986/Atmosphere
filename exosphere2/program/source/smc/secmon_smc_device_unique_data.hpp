/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <exosphere.hpp>
#include "secmon_smc_common.hpp"

namespace ams::secmon::smc {

    bool DecryptDeviceUniqueData(void *dst, size_t dst_size, u8 *out_device_id_high, const void *seal_key_source, size_t seal_key_source_size, const void *access_key, size_t access_key_size, const void *key_source, size_t key_source_size, const void *src, size_t src_size);

}