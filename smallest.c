#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the number of integers to be processed: ");
	int number;
	scanf("%d", &number);

	printf("%s", "Enter an integer: ");
	int smallest;
	scanf("%d", &smallest);

	for (unsigned int i = 2; i <= number; ++i){
		printf("%s", "Enter next integer: ");
		int value;
		scanf("%d", &value);

		if (value < smallest){
			smallest = value;
		}
	}

	printf("\nThe smallest integer is: %d\n", smallest);
}
