#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = fopen("ulaz.txt", "r");
	int niz[3];
	int prev = 10000, curr, n = 0;

	fscanf(fp, "%d\n", &niz[0]);
	fscanf(fp, "%d\n", &niz[1]);

	curr = niz[0] + niz[1];

	while (fscanf(fp, "%d\n", niz + 2) == 1)
	{
		curr += niz[2];

		if (curr > prev)
			n++;

		prev = curr;

		curr -= niz[0];

		niz[0] = niz[1];
		niz[1] = niz[2];
	}

	printf("%d\n", n);
}