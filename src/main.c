#include "display/epd.h"
#include "time/time.h"
#include "util.h"
#include "math.h"
#include "isr.h"

void main(void)
{
  HAL_ENABLE_INTERRUPTS();
  time_init();
  // LED_INIT;


  epd_init();

  epd_set_image();

  // LED_BOOST_ON;
  while (1)
  {
    
  }
}