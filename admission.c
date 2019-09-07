#include <stdio.h>

int main(void)

{
float gpa;
int student, age;
long sat;
	{		
		printf("%s", "Enter the student number: ");
		scanf("%d", &student);

		printf("%s", "Enter age: ");
		scanf("%d", &age);

		printf("%s", "Enter your GPA: ");
		scanf("%.2f", &gpa);

		printf("%s", "Enter SAT: ");
		scanf("%d", &sat);
	}	
		{
		
		for (gpa >= 3.5){
			if (sat >= 1500){
			printf("3 stars");
			}
			else {
			printf("2 stars");
			}	
		}

		for {
			if (sat >= 1500){
			printf("1 star\n");
			}
			else {
			printf("0 stars");
			}

		}
		
		}
}
