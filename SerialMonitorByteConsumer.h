#ifndef SERIALMONITORBYTECONSUMER_H_
#define SERIALMONITORBYTECONSUMER_H_

#include <Arduino.h>
#include "AbstractByteConsumer.h"

class SerialMonitorByteConsumer: public AbstractByteConsumer {
	public:
		void consumeBytes(byte bytes[], int size);
	private:
};

#endif
