#include <stdio.h>
#include <stdlib.h>

int paratlanosszeg(int szam) {
	int sum = 0;

	for (int i = 1; i < szam; i++)
		if (i % 2 != 0) sum += i;

	return sum;
}

int main() {
	long number, sum;
	char str[10];

	printf("Kérem a számot: ");
	scanf("%s", str);

	number = atoi(str);

	sum = paratlanosszeg(number);

	printf("A páratlan számok összege %ld-ig: %ld\n", number, sum);
	return 0;
}