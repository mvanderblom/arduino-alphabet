#ifndef LEDMARQUEEBYTECONSUMER_H_
#define LEDMARQUEEBYTECONSUMER_H_

#include <Arduino.h>
#include "AbstractByteConsumer.h"

class LedMarqueeByteConsumer: public AbstractByteConsumer {
	public:
		void consumeBytes(byte bytes[], int size);
	private:
		void strobe();
		unsigned char dataPins[7] = { 3, 4, 5, 6, 7, 8, 9 };
};

#endif
