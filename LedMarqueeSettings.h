#ifndef LEDMARQUEESETTINGS_H_
#define LEDMARQUEESETTINGS_H_

struct LedMarqueeSettings {
	uint8_t dataPins[7];
	uint8_t strobePin;
	int* strobeDelay;
};

#endif
