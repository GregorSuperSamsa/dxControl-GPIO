#ifndef DIRECTCOMMS_H
#define DIRECTCOMMS_H

//These are the page numbers that the Tuner Studio serial protocol uses to transverse the different map and config pages.

#define simple_remote_setupPage    1 //Config Page 1
#define port_editor_config         2 // port editor config page
#define no_saved_dataPage          3 // no saved data page

//uint8_t realtimebuffer[60];   //buffer array to store the realtime data read
//volatile uint8_t replylength;          // the length of the reply variable

byte direct_packetSize = 81;

unsigned long direct_requestCount = 0; //The number of times the A command has been issued

void direct_serial_command();
void dodirect_rCommands(uint8_t commandletter, uint8_t canid, uint16_t theoffset, uint16_t thelength);
void direct_receiveValue(uint16_t rvOffset, uint8_t newValue);
void direct_sendPage(uint16_t send_page_offset,uint16_t send_page_Length, byte can_id, byte cmd);
void direct_sendValues(uint16_t offset, uint16_t packetLength, byte cmd);
void commandButtons(uint16_t cmdCombined, uint16_t cmdData);

#endif // DIRECTCOMMS_H
