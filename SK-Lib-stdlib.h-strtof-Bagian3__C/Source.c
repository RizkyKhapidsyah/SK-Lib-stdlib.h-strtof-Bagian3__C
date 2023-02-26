#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by CPPReference (https://en.cppreference.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";
	char str5[] = "inF";
	char str6[] = "Nan(2)";

	char* end;

	float num1 = strtof(str1, &end);
	float num2 = strtof(str2, &end);
	float num3 = strtof(str3, &end);
	float num4 = strtof(str4, NULL);
	float num5 = strtof(str5, NULL);
	float num6 = strtof(str6, NULL);

	//menampilkan hasil
	printf("strtof(\"%s\") = %.2f\n", str1, num1);
	printf("strtof(\"%s\") = %.2f\n", str2, num2);
	printf("strtof(\"%s\") = %.2f\n", str3, num3);
	printf("strtof(\"%s\") = %.2f\n", str4, num4);
	printf("strtof(\"%s\") = %.2f\n", str5, num5);
	printf("strtof(\"%s\") = %.2f\n", str6, num6);

	_getch();
	return 0;
}