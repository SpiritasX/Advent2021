#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	FILE* fp = fopen("ulaz.txt", "r");
	int count[12] = { 0 };
	char row[13];
	int gamma = 0, epsilon = 0, n = 0;

	while (fscanf(fp, "%12s\n", row) == 1)
	{
		n++;
		for (int i = 0; i < 12; i++)
			if (row[i] == '1')
				count[i]++;

	}

	for (int i = 0; i < 12; i++)
	{
		int res = count[i] > (n / 2);
		gamma = (gamma | res) << 1;
		epsilon = (epsilon | !res) << 1;
	}

	gamma >>= 1;
	epsilon >>= 1;

	printf("%d\n", gamma * epsilon);
}