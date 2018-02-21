#ifndef ABSTRACTBYTECONSUMER_H_
#define ABSTRACTBYTECONSUMER_H_

#include <Arduino.h>

class AbstractByteConsumer {
	public:
		virtual ~AbstractByteConsumer() {}
		virtual void consumeBytes(byte bytes[], int size);
};
#endif
