#include <stdio.h>

int evnapja(int ev, int ho, int nap) {
	int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days = nap;

	for (int i = 0; i < ho - 1; ++i)
		days += months[i];
	
	if (ev % 4 == 0)
		days++;

	return days;
}

int main()
{
	int days = evnapja(2020, 3, 1);

	printf("%d\n", days);

	return 0;
}