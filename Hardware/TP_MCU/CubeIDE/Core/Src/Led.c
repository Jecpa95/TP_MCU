#include "Led.h"

// Démarre le timer
void LedStart(led_t *MyLed) {
	LL_TIM_EnableCounter(MyLed->timer);
	LL_TIM_CC_EnableChannel(MyLed->timer, LL_TIM_CHANNEL_CH1);
}

// Configure le rapport cyclique de la PWM entre 0 et 255
void LedSetValue(led_t *MyLed) {
	LL_TIM_OC_SetCompareCH1(MyLed->timer,MyLed->value);
}

// À chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur maximale, chaque appel décrémente la LED
void LedPulse(led_t *MyLed) {
	if (MyLed->sens == LED_UP) {
			MyLed->value++;
			if (MyLed->value >= 255) {
				MyLed->sens = LED_DOWN;
			}
		}
		else {
			MyLed->value--;
			if (MyLed->value <= 0) {
				MyLed->sens = LED_UP;
			}
		}
	LedSetValue(MyLed);
}
