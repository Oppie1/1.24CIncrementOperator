#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 5, b = 10, answer = 0;
	answer = ++a * b; // add 1 to a here before hand
	printf("Answer: %d \n", answer);

	a = 5, b = 10, answer = 0;
	answer = a++ * b;  // add one to a after equation
	printf("Answer: %d \n", answer);

	return 0;
}

/*

{
	int tuna = 20;
	printf("%d\n", tuna);
	tuna++;
	printf("%d \n", tuna);

		return 0;
}*/