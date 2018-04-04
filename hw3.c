#include <stdio.h>

void manualInput();
void intChar();
void longnc();

int main()
{
	// manualInput();
	// intChar();
	longnc();
}

void manualInput(){
	printf("character to print:\n");
	
	char sea = getchar();

	putchar(sea);

}

void intChar(){

	int c; 

	c = getchar();
	while((c = getchar()) ){
		if ( c == EOF)
		printf("\nEOF = %d\n", c);
			else
		printf("\nnot EOF = %d\n", c);

		putchar(c);
	}
	if (c == EOF){
		printf("EOF = %d\n", c);
	}
	else
		printf("not EOF = %d\n", c);
}

void longnc(){
		double charCount = 0;
		double nlCount = 0;
		double spaceCount = 0;
		double dashCount = 0;
		int c;
		while ((c = getchar()) != 10)
		{
			charCount++;
			if(c == '\n')
				nlCount++;
			if(c == 32)
				spaceCount++;
			if(c == 45)
				dashCount++;

		}
		// int sea = '-';
		// printf(" \n dash \t %d\n", sea);
		// for (charCount = 0; getchar() != 10; ++charCount)
		// 	; // null statement
		// printf("%.0f\n", charCount);
		printf("\tTotal Characters - %.0f\t|\tTotal Lines - %.0f \t|\n\tTotal Spaces - %.0f\t|", charCount, nlCount, spaceCount);
		printf("\tTotal Dashes - %.0f\t|\n", dashCount);
}