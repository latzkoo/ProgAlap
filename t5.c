#include <stdio.h>

int tehenek(int n) {
	if (n < 0 || n > 50)
		return -1;
	else if (n == 0)
		return 1;

	int tehenek[n];

	for (int i = 0; i < n; ++i) {
		if (i < 2)
			tehenek[i] = 1;
		else if (i < 5)
			tehenek[i] = tehenek[i-1] + 1;
		else
			tehenek[i] = tehenek[i-1] + tehenek[i-3];
	}

	return tehenek[n - 1];
}

int main()
{
	printf("%d\n", tehenek(13));
	return 0;
}