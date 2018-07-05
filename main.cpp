#include "mbed.h"
#include "LSM9DS1.h"

DigitalOut led1(LED1);
DigitalIn start_in(D8,PullDown);
PwmOut pwm_out_9(D9);
Timer timer;

Serial pc(SERIAL_TX, SERIAL_RX);

int main()
{
	smeAccelerometer.begin();
    /*Info system clock*/
    pc.printf("\n\rSystemCoreClock=%d\r\n",SystemCoreClock);

    while(1)
    {
      /*to main retention, otherwise thread will be died*/
      /*don't leave empty */
      wait(1);
    }

    return 0;
}
