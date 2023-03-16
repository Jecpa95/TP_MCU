#include "stdio.h"
#include "stm32l0xx_ll_tim.h"

typedef enum {
    LED_UP, LED_DOWN
} led_sens_t;

typedef struct {
    int value;
    led_sens_t sens;
    TIM_TypeDef * timer;
} led_t;


// Démarre le timer
void LedStart(led_t *MyLed);

// Configure le rapport cyclique de la PWM entre 0 et 255
void LedSetValue(led_t *MyLed);

// À chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur maximale, chaque appel décrémente la LED
void LedPulse(led_t *MyLed);
