#ifndef SERIALMONITORBYTECONSUMER_H_
#define SERIALMONITORBYTECONSUMER_H_

#include <AbstractByteConsumer.h>
#include <Arduino.h>

class SerialMonitorByteConsumer: public AbstractByteConsumer {
	public:
		void consumeBytes(byte bytes[], int size);
	private:
};

#endif
