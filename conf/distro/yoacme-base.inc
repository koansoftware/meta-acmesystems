#
# yoacme distro base
#
# Copyright (C)2020 KOAN sas - <https://koansoftware.com>
#
# This is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation.
# 
# Released under the GPLv2 license (see COPYING for the terms)
#

require conf/distro/poky.conf

DISTRO_VERSION = "3.0.1"
DISTRO_CODENAME = "zeus"
SDK_VENDOR = "-yoacmesdk"
SDK_VERSION = "${@d.getVar('DISTRO_VERSION').replace('snapshot-${DATE}', 'snapshot')}"

MAINTAINER = "KOAN sas <info@koansoftware.com>"

# --------------------------------

LOCALCONF_VERSION = "1"
PACKAGE_CLASSES = "package_ipk"

EXTRA_IMAGE_FEATURES_append = " ssh-server-openssh package-management"

# instead of adding this, one can build core-image-base
IMAGE_INSTALL_append = " \
    kernel-modules \
    linux-firmware \
"

# Add additional dtbo's for ACME-CM3-PANEL
KERNEL_DEVICETREE_append = " overlays/uart1.dtbo"
KERNEL_DEVICETREE_append = " overlays/i2c1-bcm2708.dtbo"
KERNEL_DEVICETREE_append = " overlays/dpi18.dtbo"
KERNEL_DEVICETREE_append = " overlays/goodix-7-acme.dtbo"
