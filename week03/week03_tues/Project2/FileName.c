//2. write an program to find the max of 3 numbers(int), output 
//   stored in variable named max
//   note: int is signed 32 bit, thus over/underflow is possible

// steveh - prog71990f24 - week02 

#include <stdio.h>

int largest_of_three_ints(int inputOne, int inputTwo, int inputThree) {
	int max = inputOne;
	if (inputTwo > max)
		max = inputTwo;
	if (inputThree > max)
		max = inputThree;

	return max;
}

void printOutput(int a, int b, int c, int max) {
	printf("the max of %d,%d,%d is %d\n", a, b, c, max);
}

int main(void) {

	//input
	int a = -1; // 1;
	int b = -2; // 2;
	int c = 0;  // 3;

	//process
	int max = largest_of_three_ints(a, b, c);

	//output
	printOutput(a, b, c, max);


	return 0;
}