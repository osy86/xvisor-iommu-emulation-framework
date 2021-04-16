#/**
# Copyright (c) 2013 Anup Patel.
# All rights reserved.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
#
# @file objects.mk
# @author Anup Patel (anup@brainfault.org)
# @brief list of MMC/SD/SDIO core framework objects
# */

drivers-objs-$(CONFIG_MMC) += mmc/core/mmc_core.o

mmc_core-y += core.o
mmc_core-y += mmc.o
mmc_core-y += sdio.o
mmc_core-y += sdio_io.o
mmc_core-y += sdio_bus.o
mmc_core-y += slot-gpio.o

%/mmc_core.o: $(foreach obj,$(mmc_core-y),%/$(obj))
	$(call merge_objs,$@,$^)

%/mmc_core.dep: $(foreach dep,$(mmc_core-y:.o=.dep),%/$(dep))
	$(call merge_deps,$@,$^)
