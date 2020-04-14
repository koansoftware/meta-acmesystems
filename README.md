# meta-acmesystems

Yocto BSP layer for the Acmesystems RPI-CM3-PANEL board - <https://www.acmesystems.it/CM3-PANEL>

Copyright (C)2020 KOAN sas - <https://koansoftware.com>

## Quick links

* Git repository web frontend:
  <https://github.com/koansoftware/meta-acmesystems>
* Mailing list (yocto mailing list): <yocto@yoctoproject.org>
* Issues management (Github Issues):
  <https://github.com/koansoftware/meta-acmesystems/issues>
* Documentation: <http://meta-raspberrypi.readthedocs.io/en/latest/>

## Description

This is the general hardware specific BSP overlay for the Acmesystems RPI-CM3-PANEL device.

More information can be found at: <https://github.com/koansoftware/meta-acmesystems> (Official Site)

## Dependencies

This layer depends on:

* URI: git://git.yoctoproject.org/poky
  * branch: zeus
  * revision: HEAD

* URI: git://git.openembedded.org/meta-openembedded
  * layers: meta-oe, meta-multimedia, meta-networking, meta-python
  * branch: zeus
  * revision: HEAD


Build Configuration:
BB_VERSION           = "1.44.0"
BUILD_SYS            = "x86_64-linux"
NATIVELSBSTRING      = "universal"
TARGET_SYS           = "arm-poky-linux-gnueabi"
MACHINE              = "raspberrypi3"
DISTRO               = "yoacmeqt5"
DISTRO_VERSION       = "3.0.1"
TUNE_FEATURES        = "arm vfp cortexa7 neon vfpv4 thumb callconvention-hard"
TARGET_FPU           = "hard"
meta
meta-poky            = 
meta-oe              = 
meta-raspberrypi     = 
meta-qt5             = 
meta-acmesystems     = 


## Quick Start

1. source sources/poky/oe-init-build-env build
2. Add this layer to bblayers.conf and the dependencies above
3. Set MACHINE in local.conf to one of the supported boards
4. bitbake core-image-minimal (or) bitbake meta-toolchain-qt5
5. dd to a SD card the generated sdimg file (use xzcat if rpi-sdimg.xz is used)
6. Boot your RPI-CM3-PANEL.

## Maintainers

* Marco Cavallini `<info@koansoftware.com>`

