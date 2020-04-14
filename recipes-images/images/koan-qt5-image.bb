# A Qt5 image for Yocto Project
#
# Copyright (C)2015-2020 KOAN sas - <https://koansoftware.com>
#
# This is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation.
# 
# Released under the GPLv2 license (see COPYING for the terms)
#

inherit core-image

DESCRIPTION = "An image with Qt5"
LICENSE = "GPLv2"

### QT ###

EXTRA_IMAGE_FEATURES = "debug-tweaks ssh-server-openssh package-management"

IMAGE_INSTALL_append = " cinematicexperience"
