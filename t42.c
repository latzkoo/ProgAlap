#include <stdio.h>

void strtorles(char str[]) {
	int size;

	for (size = 0; str[size] != '\0'; ++size);

	char output[size];

	for (int i = 0; i < size; ++i)
		output[i] = str[i];

	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (i % 2 == 0)
			str[j++] = output[i];
	}

	str[j] = '\0';
}

int main()
{
	char str[20] = "zsirosdeszka";

	strtorles(str);

	printf("%s\n", str);

	return 0;
}