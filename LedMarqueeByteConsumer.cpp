#include <Arduino.h>

#include "LedMarqueeByteConsumer.h"


void LedMarqueeByteConsumer::consumeBytes(byte bytes[], int byteArraySize) {

	for (int columnIndex = 0; columnIndex < byteArraySize; columnIndex++) {
		byte aByte = bytes[columnIndex];
		for (int rowIndex = 0; rowIndex < 7; rowIndex++) {
			int aBit = bitRead(aByte, (7 - rowIndex));
			digitalWrite(dataPins[rowIndex], aBit);
		}

		this->strobe();
	}

	for (int j = 0; j < 7; j++) {
		digitalWrite(dataPins[j], LOW);
	}

	this->strobe();
}

void LedMarqueeByteConsumer::strobe() {
	digitalWrite(10, HIGH);
	delayMicroseconds(20);
	digitalWrite(10, LOW);
	delay(50);
}
