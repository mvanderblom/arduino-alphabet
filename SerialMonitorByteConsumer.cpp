#include <Arduino.h>

#include "SerialMonitorByteConsumer.h"


void SerialMonitorByteConsumer::consumeBytes(byte bytes[], int byteArraySize) {

	for (int columnIndex = 1; columnIndex <= byteArraySize; columnIndex++) {
		byte aByte = bytes[columnIndex];
		for (int rowIndex = 0; rowIndex < 7; rowIndex++) {
			int aBit = bitRead(aByte, (7 - rowIndex));
			Serial.print(aBit == 1 ? F("XX") : F("oo"));
		}
		Serial.println();
	}

	for (int j = 0; j < 7; j++) {
		Serial.print(F("  "));
	}
	Serial.println();
}

