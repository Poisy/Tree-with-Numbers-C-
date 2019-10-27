// First C++ Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

void CreatingTree(int n)
{
	for (int i = 0; i < 100; i++) { printf("*"); if (i == 99) { printf("\n"); } }

	for (int r = n, b = 0; r >= 0; r--, b++)                      // r --> Rows left to print
	{                                                                           // b --> Starting number of Branches

		for (int w = r + 25; w > 0; w--)                            // w --> Number of White Spaces to print
		{
			printf(" ");
		}
		for (int x = -b; x <= b; x++)                              // Printing the created branches
		{
			printf("%d", abs(x));
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++)
	{
		for (int y = n + 24; y >= 0; y--)                          // Creating the tree stalk (bg = stublo)
		{
			printf(" ");
		}
		printf("0\n");
	}
	for (int i = 0; i < 100; i++) { printf("="); }
}


int main()
{
	int n;
	printf("Give the n number: ");
	while (true)
	{
		scanf_s("%d", &n);
		if (n < 10 && n > 0)
		{
			break;
		}
		else
		{
			printf("Try again: ");
		}
	}
	
	CreatingTree(n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
