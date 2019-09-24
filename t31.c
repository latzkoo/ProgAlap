#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number;
	number = atoi(argv[1]);

	printf("%d\n", number % 2 == 0 ? 1 : 0);
	return 0;
}