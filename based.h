#ifndef BASED_H
#define BASED_H

#include <unistd.h>

#define BOSE_CHANNEL 8

enum NoiseCancelling {
	NC_HIGH = 0x01,
	NC_LOW = 0x03,
	NC_OFF = 0x00
};

enum VoicePrompt {
	VP_ON = 0x21,
	VP_OFF = 0x01
};

enum AutoOff {
	AO_NEVER = 0,
	AO_5_MIN = 5,
	AO_20_MIN = 20,
	AO_40_MIN = 40,
	AO_60_MIN = 60,
	AO_180_MIN = 180
};

enum PromptLanguage {
	PL_EN = 0x21,
	PL_FR = 0x22,
	PL_IT = 0x23,
	PL_DE = 0x24,
	PL_ES = 0x26,
	PL_PT = 0x27,
	PL_ZH = 0x28,
	PL_KO = 0x29,
	PL_NL = 0x2e,
	PL_JA = 0x2f,
	PL_SV = 0x32
};

ssize_t set_name(int sock, const char *name);
ssize_t noise_cancelling(int sock, enum NoiseCancelling level);
ssize_t voice_prompts(int sock, enum VoicePrompt setting);
ssize_t auto_off(int sock, enum AutoOff minutes);
ssize_t prompt_language(int sock, enum PromptLanguage language);

#endif
