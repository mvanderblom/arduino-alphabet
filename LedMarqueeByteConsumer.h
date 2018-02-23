#ifndef LEDMARQUEEBYTECONSUMER_H_
#define LEDMARQUEEBYTECONSUMER_H_

#include <Arduino.h>
#include <AbstractByteConsumer.h>

#include "LedMarqueeSettings.h"

class LedMarqueeByteConsumer: public AbstractByteConsumer {
	public:
		LedMarqueeByteConsumer(LedMarqueeSettings* settings);
		void setup();
		void consumeBytes(byte bytes[], int size);
	private:

		LedMarqueeSettings* _settings;

		void strobe();
		void letterSpace();
};

#endif
