EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:ws2812b
LIBS:ESP8266
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ESP-12 U1
U 1 1 5A35AD2C
P 4950 4150
F 0 "U1" H 4950 4050 50  0000 C CNN
F 1 "ESP-12" H 4950 4250 50  0000 C CNN
F 2 "ESP8266:ESP-12" H 4950 4150 50  0001 C CNN
F 3 "" H 4950 4150 50  0001 C CNN
	1    4950 4150
	1    0    0    -1  
$EndComp
$Comp
L Conn_01x03 JD1
U 1 1 5A35B101
P 8400 3600
F 0 "JD1" H 8400 3800 50  0000 C CNN
F 1 "Conn_01x03" H 8400 3400 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x03_Pitch2.54mm" H 8400 3600 50  0001 C CNN
F 3 "" H 8400 3600 50  0001 C CNN
	1    8400 3600
	1    0    0    -1  
$EndComp
Text Label 7850 3500 0    60   ~ 0
VC5
Text Label 7850 3600 0    60   ~ 0
GND
Text Label 7850 3700 0    60   ~ 0
DIN
$Comp
L SPX3819M5-L-3-3 U2
U 1 1 5A35B772
P 4800 1650
F 0 "U2" H 4650 1875 50  0000 C CNN
F 1 "SPX3819M5-L-3-3" H 4800 1875 50  0000 L CNN
F 2 "TO_SOT_Packages_SMD:SOT-23-5" H 4800 1975 50  0001 C CNN
F 3 "" H 4800 1650 50  0001 C CNN
	1    4800 1650
	1    0    0    -1  
$EndComp
Text Label 4350 1350 0    60   ~ 0
VC5
Text Label 4800 1950 0    60   ~ 0
GND
Text Label 4950 5050 0    60   ~ 0
GND
Text Label 4950 3250 0    60   ~ 0
VC33
Text Label 5100 1550 0    60   ~ 0
VC33
Text Label 3500 4350 0    60   ~ 0
DIN
$Comp
L CP C1
U 1 1 5A35D12C
P 5750 1700
F 0 "C1" H 5775 1800 50  0000 L CNN
F 1 "10uF" H 5775 1600 50  0000 L CNN
F 2 "Capacitors_Tantalum_SMD:CP_Tantalum_Case-R_EIA-2012-12_Reflow" H 5788 1550 50  0001 C CNN
F 3 "" H 5750 1700 50  0001 C CNN
	1    5750 1700
	1    0    0    -1  
$EndComp
$Comp
L CP C2
U 1 1 5A35D1B3
P 3950 1600
F 0 "C2" H 3975 1700 50  0000 L CNN
F 1 "10uF" H 3975 1500 50  0000 L CNN
F 2 "Capacitors_Tantalum_SMD:CP_Tantalum_Case-R_EIA-2012-12_Reflow" H 3988 1450 50  0001 C CNN
F 3 "" H 3950 1600 50  0001 C CNN
	1    3950 1600
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 5A35D30C
P 4350 1700
F 0 "R3" V 4430 1700 50  0000 C CNN
F 1 "10K" V 4350 1700 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 4280 1700 50  0001 C CNN
F 3 "" H 4350 1700 50  0001 C CNN
	1    4350 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 1550 4500 1550
Wire Wire Line
	4350 1850 4500 1850
Wire Wire Line
	4500 1850 4500 1650
Text Label 5850 3850 0    60   ~ 0
TXD
Text Label 6250 3950 0    60   ~ 0
RXD5V
Text Label 5850 4250 0    60   ~ 0
GPI00
Text Label 4250 3400 0    60   ~ 0
RESET
$Comp
L Conn_01x06 JP1
U 1 1 5A35DF5C
P 8400 2850
F 0 "JP1" H 8400 3150 50  0000 C CNN
F 1 "Conn_01x06" H 8400 2450 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x06_Pitch2.54mm" H 8400 2850 50  0001 C CNN
F 3 "" H 8400 2850 50  0001 C CNN
	1    8400 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7850 2650 8200 2650
Wire Wire Line
	8200 2750 7850 2750
Wire Wire Line
	8200 2850 7850 2850
Wire Wire Line
	8200 2950 7850 2950
Wire Wire Line
	8200 3050 7850 3050
Wire Wire Line
	8200 3150 7850 3150
Text Label 7850 2650 0    60   ~ 0
TXD
Text Label 7850 2750 0    60   ~ 0
RXD5V
Text Label 7850 2850 0    60   ~ 0
VC5
Text Label 7850 2950 0    60   ~ 0
GND
Text Label 7850 3050 0    60   ~ 0
RESET
$Comp
L R R1
U 1 1 5A35E3D8
P 3650 3400
F 0 "R1" V 3730 3400 50  0000 C CNN
F 1 "10K" V 3650 3400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 3580 3400 50  0001 C CNN
F 3 "" H 3650 3400 50  0001 C CNN
	1    3650 3400
	1    0    0    -1  
$EndComp
Text Label 7850 3150 0    60   ~ 0
GPI00
$Comp
L R R2
U 1 1 5A35E5A7
P 6750 4100
F 0 "R2" V 6830 4100 50  0000 C CNN
F 1 "1K" V 6750 4100 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 6680 4100 50  0001 C CNN
F 3 "" H 6750 4100 50  0001 C CNN
	1    6750 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 4250 6750 4250
$Comp
L LED D1
U 1 1 5A35E6D9
P 6750 3800
F 0 "D1" H 6750 3900 50  0000 C CNN
F 1 "LED" H 6750 3700 50  0000 C CNN
F 2 "LEDs:LED_0805" H 6750 3800 50  0001 C CNN
F 3 "" H 6750 3800 50  0001 C CNN
	1    6750 3800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3950 1750 3950 1950
$Comp
L D D2
U 1 1 5A35ECDD
P 6100 3950
F 0 "D2" H 6100 4050 50  0000 C CNN
F 1 "1N4148" H 6100 3850 50  0000 C CNN
F 2 "Diodes_SMD:D_0805" H 6100 3950 50  0001 C CNN
F 3 "" H 6100 3950 50  0001 C CNN
	1    6100 3950
	-1   0    0    -1  
$EndComp
Wire Wire Line
	5850 3950 5950 3950
$Comp
L D D3
U 1 1 5A35F201
P 4050 3550
F 0 "D3" H 4050 3650 50  0000 C CNN
F 1 "1n4148" H 4050 3450 50  0000 C CNN
F 2 "Diodes_SMD:D_0805" H 4050 3550 50  0001 C CNN
F 3 "" H 4050 3550 50  0001 C CNN
	1    4050 3550
	0    1    1    0   
$EndComp
Wire Wire Line
	3650 3850 4050 3850
Wire Wire Line
	4050 4050 3450 4050
$Comp
L R R4
U 1 1 5A35BB81
P 3450 3400
F 0 "R4" V 3530 3400 50  0000 C CNN
F 1 "10K" V 3450 3400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 3380 3400 50  0001 C CNN
F 3 "" H 3450 3400 50  0001 C CNN
	1    3450 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 3250 6750 3250
Wire Wire Line
	5850 4350 7150 4350
Wire Wire Line
	7150 4350 7150 4100
$Comp
L R R5
U 1 1 5A35BD81
P 7150 3950
F 0 "R5" V 7230 3950 50  0000 C CNN
F 1 "10K" V 7150 3950 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 7080 3950 50  0001 C CNN
F 3 "" H 7150 3950 50  0001 C CNN
	1    7150 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 3650 7150 3800
Wire Wire Line
	5850 4450 6000 4450
Wire Wire Line
	6000 4450 6000 4550
$Comp
L R R6
U 1 1 5A35BFFA
P 6000 4700
F 0 "R6" V 6080 4700 50  0000 C CNN
F 1 "10K" V 6000 4700 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 5930 4700 50  0001 C CNN
F 3 "" H 6000 4700 50  0001 C CNN
	1    6000 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 4850 6000 4950
Text Label 6000 4950 0    60   ~ 0
GND
Wire Wire Line
	4350 1550 4350 1350
Wire Wire Line
	3950 1450 4350 1450
Connection ~ 4350 1450
Wire Wire Line
	3950 1950 5750 1950
Wire Wire Line
	5100 1550 5750 1550
Connection ~ 4800 1950
Wire Wire Line
	5750 1950 5750 1850
Wire Wire Line
	7150 3650 6750 3650
Wire Wire Line
	6750 3650 6750 3250
Wire Wire Line
	3650 3550 3650 3850
Wire Wire Line
	3450 4050 3450 3550
Connection ~ 4950 3250
Connection ~ 3650 3250
Wire Wire Line
	4050 3400 4250 3400
Wire Wire Line
	4050 3850 4050 3700
Wire Wire Line
	8200 3500 7850 3500
Wire Wire Line
	8200 3600 7850 3600
Wire Wire Line
	8200 3700 7850 3700
$Comp
L R R7
U 1 1 5A383F5F
P 3900 4350
F 0 "R7" V 3980 4350 50  0000 C CNN
F 1 "330" V 3900 4350 50  0000 C CNN
F 2 "" V 3830 4350 50  0001 C CNN
F 3 "" H 3900 4350 50  0001 C CNN
	1    3900 4350
	0    1    1    0   
$EndComp
Wire Wire Line
	3750 4350 3500 4350
$EndSCHEMATC