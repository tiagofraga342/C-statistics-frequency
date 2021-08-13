#include <stdio.h>
#include <math.h>
#include <windows.h>

//Gotoxy function
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char const *argv[])
{
	/* code */
	const int MAXDATA = 100;
	int range1;
	int range2;
	int item_num;
	int brute_data[MAXDATA];
	int frequency[MAXDATA];
	int relative_frequency[MAXDATA];
	int cumulative_frequency[MAXDATA];
	int cumulativeRelative_frequency[MAXDATA];

	//Ask the user for the number of data inputs
	printf("Type the number of data inputs\n");
	scanf("%i", &item_num);

	//Ask the user for the range of numbers in data
	printf("Input the range (first number)\n");
	scanf("%i", &range1);
	printf("Input the range (second number)\n");
	scanf("%i", &range2);

	system("cls");

	//Input the brute data
	printf("Input the data\n");
	for (int i = 0; i < item_num; i++)
	{
		scanf("%i", &brute_data[i]);
		printf("You added %i\n", brute_data[i]);
	}

	//Sort the brute data to ascending order (Rol)
	for (int i = 0; i < item_num; i++)
	{
		for (int j = i + i; j < item_num; i++)
		{
			if (brute_data[i] > brute_data[j])
			{
				int a = brute_data[i];
				brute_data[i] = brute_data[j];
				brute_data[j] = a;
			}
		}
	}

	for (int i = 0; i < item_num; i++)
	{
		printf("%i\n", brute_data[i]);
	}

	//Defines the frequency
	for (int i = range1; i < range2; i++)
	{

	}

	return 0;
}