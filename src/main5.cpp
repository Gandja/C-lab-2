#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"

int main()
{
	char line[10];
	srand(time(NULL));

	for (int j = 0; j < 10; j++)
	{
		process(line);
		printf("%s", line);
		unsigned int retTime = time(0) + 1;
		while (time(0) < retTime);
		putchar('\n');
	}
	return 0;
}