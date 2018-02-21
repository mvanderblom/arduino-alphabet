#include "Alphabet.h"
#include "AbstractByteConsumer.h"

void Alphabet::toBinary(String aString, AbstractByteConsumer* consumer) {
	for (uint8_t x = 0; x < aString.length(); x++) {
		char letter = aString[x];
		int letterIdx = alpha.indexOf(letter);
//		Serial.print(letter);
//		Serial.print(", ");
//		Serial.println(letterIdx);
		if(letterIdx >= 0)
			consumer->consumeBytes(letters[letterIdx], letters[letterIdx][0]);
		else
			consumer->consumeBytes(unknown, unknown[0]);

	}
}
