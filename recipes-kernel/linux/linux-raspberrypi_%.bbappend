# Copyright (C)2020 by KOAN - <https://koansoftware.com>

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += "file://0001-Added-Acmesystems-version-for-7-inch-DPI-display.patch \
            file://0002-Makefile-Added-Acmesystems-version-for-7-inch-DPI-di.patch"

CMDLINE_append = " console=serial1,115200 console=tty1 elevator=deadline fsck.repair=yes"

