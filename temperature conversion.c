//Write a program to convert centigrate to fahrenheit

#include<stdio.h>

int main()
{
	float temp_f,temp_c;
	printf("Hello this is a temperature converter\n");
	
	printf("Enter the centigrate temperature\n");
	scanf("%f",&temp_c);

	temp_f = ((temp_c-32)*5)/9;

	printf("the converted temperature in fahrenheit is \n");
	printf("%f\n",temp_f );
	return 0 ;
}
