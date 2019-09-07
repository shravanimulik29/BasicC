#include <stdio.h>

int main(void)

{
	int n, i;
	unsigned long long factorial = 1;

	printf("Enter an integer: ");
	scanf("%s", &n);
	if (n < 0);
		printf("You can't take the factorial of a negative integer.");
	else
	{
		for  (i = n; i <=n; ++i);
		{
			factorial *= i;
		}
	printf("The factorial of %d = %11u", n, factorial);
	}
	return 0;
} 
	
