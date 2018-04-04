#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 30

/* This program demostrates how to declare symbolic symbols and use them in a loop
	that prints a list of F -> C temp. conversion
*/
main(){
	float farh, cel;
	printf("\tFarhenheit\t Celcius\n");
	for(float farh = LOWER; farh <= UPPER; farh += STEP)
		{
			cel = 5 * (farh - 32) / 9;
			printf("\t%.0f\t\t%.1f\n", farh, cel);
		}

}