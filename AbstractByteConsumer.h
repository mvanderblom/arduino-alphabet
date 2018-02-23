#ifndef ABSTRACTBYTECONSUMER_H_
#define ABSTRACTBYTECONSUMER_H_

#include <Arduino.h>

class AbstractByteConsumer {
	protected:
		void (*_afterLetterCallback)();
	public:
		virtual ~AbstractByteConsumer() {}
		virtual void setup() {};
		virtual void consumeBytes(byte bytes[], int size) {};

		void setAfterLetterCallback(void (*afterLetterCallback)()){
			_afterLetterCallback = afterLetterCallback;
		}
};
#endif
