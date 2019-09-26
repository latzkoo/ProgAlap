#include <stdio.h>
#include <stdlib.h>

int prim(int szam) {
	if (szam <= 1) return 0;

	for (int i = 2; i < szam; i++)
		if (szam % i == 0) return 0;

	return 1;
}

int main() {
	int isPrime;
	long number;
	char str[10];

	printf("Kérem a számot: ");
	scanf("%s", str);

	number = atoi(str);

	isPrime = prim(number);

	printf("A %ld %s\n", number, isPrime ? "prím szám" : "nem prím szám.");
	return 0;
}