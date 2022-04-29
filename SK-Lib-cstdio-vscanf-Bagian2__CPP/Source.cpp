#pragma warning(disable:4996)

#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2022
*/

void read(const char* format, ...) {
	va_list args;
	va_start(args, format);
	vscanf(format, args);
	va_end(args);
}

int main() {
	float marks;
	char subj[50];

	printf("Enter subject's name and marks obtained: ");
	read(" %s %f", subj, &marks);
	printf("You scored %.2f in %s\n", marks, subj);

	_getch();
	return 0;
}