#include<stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int mutiply(int a, int b);
float divine(float a, float b);


int main() {
	
	float a, b;
	printf("\nEnter the first number: ");
	scanf("%f", &a);
	printf("\nEnter the second number: ");
	scanf("%f", &b);
	
	int num1 = sum(a,b);
	printf("\nsum = %d", num1);
	int num2 = subtract(a, b);
	printf("\nsubtract = %d", num2);
	int num3 = mutiply(a, b);
	printf("\nmutiply = %d", num3);
	float num4 = divine(a, b);
	printf("\ndivine = %.1f", num4);
	
	return 0;
}


int sum(int a, int b) {
	int c;
	printf("\nSum:\n");
	printf("\nThe first number: %d", a);
	printf("\nThe second number: %d", b);
	c = a + b;
	return c;
}

int subtract(int a, int b) {
	int c;
	printf("\nSubtraction:\n");
	printf("\nThe first number: %d", a);
	printf("\nThe second number: %d", b);
	c = a - b;
	return c;
}

int mutiply(int a, int b) {
	int c;
	printf("\nMultiply:\n");
	printf("\nThe first number: %d", a);
	printf("\nThe second number: %d", b);
	c = a * b;
	return c;
}

float devide(float a, float b) {
	float c;
	printf("\nDivision:\n");
	printf("\nThe first number: %f", a);
	printf("\nThe second number: %f", b);
	c = a / b;
	return c;
}
