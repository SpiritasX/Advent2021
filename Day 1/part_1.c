#include <stdio.h>

int main()
{
	FILE* fp = fopen("ulaz.txt", "r");
	int curr, prev = 0, increased = 0;

	while (fscanf(fp, "%d\n", &curr) == 1)
	{
		if (prev != 0 && curr > prev)
			increased++;

		prev = curr;
	}

	printf("%d\n", increased);

	return 0;
}