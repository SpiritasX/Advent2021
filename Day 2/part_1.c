#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("ulaz.txt", "r");

	char dir[10];
	int amount;
	int forward = 0, down = 0;

	while (fscanf(fp, "%s %d\n", dir, &amount) == 2)
	{
		if (!strcmp(dir, "forward"))
			forward += amount;
		else if (!strcmp(dir, "down"))
			down += amount;
		else if (!strcmp(dir, "up"))
			down -= amount;
	}

	printf("%d\n", down * forward);
}