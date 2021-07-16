#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(nullptr));

	const int ROWS{ 7 };
	const int COLS{ 8 };

	int matrix[ROWS][COLS]{};
	/*
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			matrix[i][j] = rand() % 100;*/

	// 1 поиск максимального и сумм
	
	//for (int i = 0; i < ROWS; i++)
	//{
	//	//int max{ matrix[i][0] };
	//	int sum{};
	//	for (int j = 0; j < COLS; j++)
	//	{
	//		/*if (max < matrix[i][j])
	//			max = matrix[i][j];*/
	//		sum += matrix[i][j];
	//		cout << matrix[i][j] << "\t";
	//	}
	//	//cout << "| " << max << "\n";
	//	cout << "| " << sum << "\n";
	//}

	//for (int i = 0; i < COLS * 8 + 8; i++)
	//	cout << "-";
	//cout << "\n";

	////int matrixmax{ matrix[0][0] };
	//int matrixsum{};
	//for (int j = 0; j < COLS; j++)
	//{
	//	//int max{ matrix[0][j] };
	//	int sum{};
	//	for (int i = 0; i < ROWS; i++)
	//		sum += matrix[i][j];
	//		/*if (max < matrix[i][j])
	//			max = matrix[i][j];*/
	//	//cout << max << "\t";
	//	cout << sum << "\t";
	//	/*if (matrixmax < max)
	//		matrixmax = max;*/
	//	matrixsum += sum;
	//}

	////cout << "| " << matrixmax << "\n";
	//cout << "| " << matrixsum << "\n";

	// 2 
	//const int SIZE{ 5 };
	//int matrix[SIZE][SIZE]{};
	
	/*int counter{ 1 };
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (i >= SIZE - j - 1)
				matrix[i][j] = counter++;*/

	int counter{ 1 };
	for (int j = 0; j < COLS; j++)
	{
		if (j % 2)
			for (int i = ROWS - 1; i >= 0; i--)
				matrix[i][j] = counter++;
		else
			for (int i = 0; i < ROWS; i++)
				matrix[i][j] = counter++;
	}


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << matrix[i][j] << "\t";
		cout << "\n";
	}
		
	
	return 0;
}