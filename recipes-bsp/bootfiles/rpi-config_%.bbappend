# Copyright (C)2020 by KOAN - <https://koansoftware.com>

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += "file://acme-cm3-panel-config.txt"

do_deploy_append() {
    
    cat ${WORKDIR}/acme-cm3-panel-config.txt >> ${DEPLOYDIR}/bcm2835-bootfiles/config.txt

}
