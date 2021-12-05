#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("ulaz.txt", "r");

	char dir[10];
	int amount;
	int horizontal = 0, depth = 0, aim = 0;

	while (fscanf(fp, "%s %d\n", dir, &amount) == 2)
	{
		if (!strcmp(dir, "forward"))
		{
			horizontal += amount;
			depth += aim * amount;
		}
		else if (!strcmp(dir, "down"))
			aim += amount;
		else if (!strcmp(dir, "up"))
			aim -= amount;
	}

	printf("%d\n", depth * horizontal);
}