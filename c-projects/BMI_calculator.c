#include <stdio.h>

/**
 * main - Entry Point
 * Description: Calculates the BMI score for anyone
 * Return: Always 0(Success)
 */

int main(void)
{
	float Height;
	float Weight;
	float BMI;
	float Hsquare;

	printf("What is your weight measurement in kilograms?\n");
	scanf("%f", &Weight);
	
	printf("What is your Height measurement in meters?\n");
	scanf("%f", &Height);

	Hsquare = Height * Height;
	BMI = Weight / Hsquare;
	
	if (BMI < 18)
	{
		printf("Your BMI score is: %-4.2f, and you are underweight.\n", BMI);
	}
	
	else if (BMI >= 18 && BMI <= 25)
	{
		printf("Your BMI score is: %-4.2f, and you have a normal weight.\n", BMI);
	}
	
	else if (BMI >= 26 && BMI <= 29)
	{
		printf("Your BMI score is: %-4.2f, and you are overweight.\n", BMI);
	}
	
	else if (BMI >= 30)
	{
		printf("Your BMI score is: %-4.2f, and you have obesity.\n", BMI);
		if (BMI >= 30 && BMI <= 34)
		{
			printf("You have class 1 obesity\n");
		}
		else if(BMI >= 35 && BMI <= 39)
		{
			printf("You have class 2 obesity\n");
		}
		else
		{
			printf("You have class 3 obesity\n");
		}
	}
	
	else
	{
		printf("You have typed in an invalid value\n");
	}
	
	return 0;
}
