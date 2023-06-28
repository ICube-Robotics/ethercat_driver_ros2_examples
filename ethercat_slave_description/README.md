# ethercat_slave_description
Collection of EtherCAT module example configurations for the `ethercat_driver`.

## Modules using `GenericEcSlave`
The list of available example EtherCAT module configurations for the `GenericEcSlave` Hardware Interface plugin.
### Beckhoff
- **Beckhoff_EL1008**: EtherCAT Terminal, 8-channel digital input, 24 V DC, 3 ms.
- **Beckhoff_EL1018**: EtherCAT Terminal, 8-channel digital input, 24 V DC, 10 us.
- **Beckhoff_EL2008**: EtherCAT Terminal, 8-channel digital output, 24 V DC, 0.5 A.
- **Beckhoff_EL2088**: EtherCAT Terminal, 8-channel digital output, 24 V DC, 0.5 A, ground switching.
- **Beckhoff_EL2124**: EtherCAT Terminal, 4-channel digital output, 5 V DC, 20 mA.
- **Beckhoff_EL3102**: EtherCAT Terminal, 2-channel analog input, voltage, ±10 V, 16 bit, differential.
- **Beckhoff_EL3104**: EtherCAT Terminal, 4-channel analog input, voltage, ±10 V, 16 bit, differential.
- **Beckhoff_EL4132**: EtherCAT Terminal, 2-channel analog output, voltage, ±10 V, 16 bit.
- **Beckhoff_EL4134**: EtherCAT Terminal, 4-channel analog output, voltage, ±10 V, 16 bit.
- **Beckhoff_EL5101**: EtherCAT Terminal, 1-channel encoder interface, incremental, 5 V DC (DIFF RS422, TTL), 1 MHz.

### ATI
- **ATI_FTSensor**: ATI EtherCAT F/T Sensor

### Advantech
- **AMAX-5051**: Digital Input Module, 8-channel digital input, 24 V DC, 4 ms.
- **AMAX-5056**: Sink-type Digital Output Module, 8-channel digital output, 24 V DC, 0.3 A.

### Omron
- **Omron_NX_ECC201_NX_ID5442**: Omron EtherCAT Coupler NX_ECC201 with Input module NX_ID5442.
- **Omron_NX_ECC201_NX_OD5256**: Omron EtherCAT Coupler NX_ECC201 with Output module NX_OD5256.

## Motor drive modules using `EcCiA402Drive`
The list of available example EtherCAT motor drive module configurations for the `EcCiA402Drive` Hardware Interface plugin.
### Maxon
- **EPOS3**: EPOS3 70/10 EtherCAT, digital positioning controller, 10 A, 11 - 70 VDC
  - Plugin : `EcCiA402Drive`

### Schneider Electric
- **Schneider_ATV320**: Schneider Electric Variable frequency drive. Coupled with VW3A3601 communication card.
  - Plugin : `EcCiA402Drive`

### Elmo
- **Elmo Gold**: Elmo Gold servo drive.
  - Plugin : `EcCiA402Drive`

### Technosoft
- **Technosoft IPOS 3604**: Technosoft IPOS 3064 motor drive.
  - Plugin : `EcCiA402Drive`
