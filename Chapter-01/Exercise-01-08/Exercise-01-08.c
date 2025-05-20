/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 *
 */

#include <stdio.h>

// To simulate EOF (End of File) from the terminal, Press CTRL + d
main()
{
	int c, b, t, n;

	b = t = n = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++b;
		};

		if (c == '\t')
		{
			++t;
		};

		if (c == '\n')
		{
			++n;
		};
	}

	printf("%d blanks, %d tabs, %d newlines\n", b, t, n);
}