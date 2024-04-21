#include <stdio.h>

/**
 * main - calculates the BMI of a user as a function of 
 * the weight, w and the height, h
 *
 * Return 0 Always
 */

int main(void)

{
	int w = 1;
	int h = 1;
	int w / h * h = 1;	

	printf("Please enter your weight:");
	scanf("%d", &w);

	printf("Please enter your height:\n");
        scanf("%d", &h);


	if (w / h * h < 18) 
	{
		printf("bmi is %d and you are Underweight\n", w / h * h);
	}

	else if (w / h * h >= 18 && w / h * h <= 25)
	{
                printf("bmi is %d and you are Normal weight\n", w / h * h);
        }

	else if (w / h * h >= 26 && w / h * h <= 29)
	{
		printf("bmi is %d and you are Overweight\n", w / h * h);
	}

	 else if (w / h * h >= 30)
        {
                printf("bmi is %d and you have Obesity\n", w / h * h);
        }

	
	else 
	{
		printf("You entered an invalid value\n");
	}

	return (0);
}
