#include <stdio.h>

int erme(int osszeg) {
	if (osszeg < 0)
		return -1;
	else if (osszeg == 0)
		return 0;
	
	int coins[] = {10, 5, 2, 1};
	int coin = 0;
	int ic = 0;
	int left = osszeg;

	for (int i = 0; i < 4; ++i) {
		if (left > 0) {
			ic = left / coins[i];
			coin += ic;
			left = left - ic * coins[i];
		}
	}

	return coin;
}

int main()
{
	int coins = erme(2019);

	printf("%d\n", coins);

	return 0;
}