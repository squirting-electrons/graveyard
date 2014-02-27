# THIS FILE IS AUTOMATICALLY GENERATED
# Project: \\vmware-host\Shared Folders\Downloads\[NATCAR] PSoC LED PWM\Timer_PWM.cydsn\Timer_PWM.cyprj
# Date: Thu, 27 Feb 2014 23:40:54 GMT
#set_units -time ns
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list [get_pins {ClockBlock/udb_div_0}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]


# Component constraints for \\vmware-host\Shared Folders\Downloads\[NATCAR] PSoC LED PWM\Timer_PWM.cydsn\TopDesign\TopDesign.cysch
# Project: \\vmware-host\Shared Folders\Downloads\[NATCAR] PSoC LED PWM\Timer_PWM.cydsn\Timer_PWM.cyprj
# Date: Thu, 27 Feb 2014 23:40:49 GMT