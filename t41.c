#include <stdio.h>

void checkRow(char sor, int *mezok)
{
	if (sor - 1 >= '1')
		(*mezok)++;
	if (sor + 1 <= '8')
		(*mezok)++;
}
void checkCol(char oszlop, int *mezok)
{
	if (oszlop - 1 >= 'a')
		(*mezok)++;
	if (oszlop + 1 <= 'h')
		(*mezok)++;
}

int main()
{
	char oszlop;
	char sor;
	int mezok = 0;

	oszlop = 'd';
	sor = '4';

	if (oszlop < 'a' && oszlop > 'h')
		return -1;

	if (oszlop - 2 >= 'a')
		checkRow(sor, &mezok);

	if (oszlop + 2 <= 'h')
		checkRow(sor, &mezok);

	if (sor - 2 >= '1')
		checkCol(oszlop, &mezok);

	if (sor + 2 <= '8')
		checkCol(oszlop, &mezok);

	printf("%d\n", mezok);

	return 0;
}