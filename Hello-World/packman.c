/* 
* Walton Cooney
* Program 2
* Blink and LED
* 06/12/17
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                     

int main()                                    // Main function
{
 

 
  while(1)
  {
  high(0);
  pause(50);
  low(0);
  pause(500);
 
  high(15);
  pause(1000);
  low(15);
  pause(100);
    
  }  
}
