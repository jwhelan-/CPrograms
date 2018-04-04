#include <stdio.h>
void forLoop(float, float, int, int, int);
void whileLoop(float, float, int, int, int);

void main(){
		// print out the Farh to Celcius conversion
	float farh;
	float cel;
	int lower = 0;
	int upper = 300;
	int step = 30;

	printf("\n\tWHILE LOOP \n");
	whileLoop(farh, cel, lower, upper, step);
	printf("\n\tFOR LOOP\n" );
	forLoop(farh, cel, lower, upper, step);
}

void forLoop(float farh, float cel, int lower, int upper, int step){
	for(float farh = 0; farh <= upper; farh = farh + step)
	{
		cel = 5 * (farh - 32) / 9;
		if((int)farh % 40)
			printf("F: %.1f\tC: %.1f\t|\t", farh, cel);
		else
			printf("F: %.1f\tC: %.1f\n", farh, cel);

	}
			return;

}

void whileLoop(float farh, float cel, int lower, int upper, int step){

	farh= lower;
	while(farh <= upper){
		cel = 5 * (farh - 32) / 9;
		if((int)farh % 40){
			printf("F: %.1f\tC: %.1f\t|\t", farh, cel);
		}
		else {
			printf("F: %.1f\tC: %.1f\n", farh, cel);
		}
		farh = farh + step;
	}
	return;

}