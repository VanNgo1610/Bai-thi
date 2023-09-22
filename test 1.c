#include<stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int mutiply(int a, int b);
float divine(float a, float b);


int main() {
	
	float a, b;
	printf("\nNhap so 1: ");
	scanf("%f", &a);
	printf("\nNhap so 2: ");
	scanf("%f", &b);
	
	int so1 = sum(a,b);
	printf("\nsum = %d", so1);
	int so2 = subtract(a, b);
	printf("\nsubtract = %d", so2);
	int so3 = mutiply(a, b);
	printf("\nmutiply = %d", so3);
	float so4 = divine(a, b);
	printf("\ndivine = %.1f", so4);
	
	return 0;
}


int sum(int a, int b) {
	int c;
	printf("\nSum:\n");
	printf("\nSo thu nhat la: %d", a);
	printf("\nSo thu hai la : %d", b);
	c = a + b;
	return c;
}

int subtract(int a, int b) {
	int c;
	printf("\nSubtraction:\n");
	printf("\nSo thu nhat la: %d", a);
	printf("\nSo thu hai la : %d", b);
	c = a - b;
	return c;
}

int mutiply(int a, int b) {
	int c;
	printf("\nMultiply:\n");
	printf("\nSo thu nhat la: %d", a);
	printf("\nSo thu hai la : %d", b);
	c = a * b;
	return c;
}

float devide(float a, float b) {
	float c;
	printf("\nDivision:\n");
	printf("\nSo thu nhat la: %f", a);
	printf("\nSo thu hai la : %f", b);
	c = a / b;
	return c;
}
