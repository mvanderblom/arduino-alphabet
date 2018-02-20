#include "Alphabet.h"
#include "AbstractByteConsumer.h"

void Alphabet::toBinary(String aString, AbstractByteConsumer* consumer) {
	for (uint8_t x = 0; x < aString.length(); x++) {
		char letter = aString[x];
		int letterIdx = alpha.indexOf(letter);
		Serial.print(letter);
		Serial.print(", ");
		Serial.print(letterIdx);
		Serial.print(", ");
		Serial.print(letters[letterIdx][0]);
		Serial.println();
		consumer->consumeBytes(letters[letterIdx], letters[letterIdx][0]);
	}
	consumer->consumeBytes(letters[0], letters[0][0]);
}
