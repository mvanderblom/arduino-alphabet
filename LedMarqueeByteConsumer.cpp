#include <Arduino.h>

#include "LedMarqueeSettings.h"
#include "LedMarqueeByteConsumer.h"

// LED MATRIX SIZE 96*7

LedMarqueeByteConsumer::LedMarqueeByteConsumer(LedMarqueeSettings* settings){
	_settings = settings;
}

void LedMarqueeByteConsumer::setup() {
	pinMode(_settings->strobePin, OUTPUT);
	for(unsigned int i = 0; i < 7; i++){
		pinMode(_settings->dataPins[i], OUTPUT);
	}
}


void LedMarqueeByteConsumer::letterSpace() {
	// letter spacing 1 column
	for (int j = 0; j < 7; j++) {
		digitalWrite(_settings->dataPins[j], LOW);
	}
	this->strobe();
}

void LedMarqueeByteConsumer::consumeBytes(byte bytes[], int byteArraySize) {
	this->letterSpace();

	for (int columnIndex = 1; columnIndex <= byteArraySize; columnIndex++) {
		byte aByte = bytes[columnIndex];
		for (int rowIndex = 0; rowIndex < 7; rowIndex++) {
			int aBit = bitRead(aByte, (7 - rowIndex));
			digitalWrite(_settings->dataPins[rowIndex], aBit);
		}
		this->strobe();
	}
}

void LedMarqueeByteConsumer::strobe() {
	digitalWrite(_settings->strobePin, HIGH);
	delayMicroseconds(20);
	digitalWrite(_settings->strobePin, LOW);
	delay(*_settings->strobeDelay);
}
