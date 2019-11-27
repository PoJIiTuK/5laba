include <iostream>
#include <math.h>
#include <conio.h>
#define _USE_MATH_DEFINES

#define n 5
#define m 5
using namespace std;

class Matrix
{
private:
	double M[m];
public:
	friend void inputArray(Matrix Arr[]);
	friend void outputArray(Matrix Arr[]);
	friend void sortArray(Matrix  Arr[]);
	void calcArray(Matrix Arr[]);
};

void inputArray(Matrix  Arr[])
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cin >> Arr[i].M[j];
		}
}
void outputArray(Matrix  Arr[])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << Arr[j].M[i] << "\t";
		}
		cout << endl;
	}
}
void sortArray(Matrix  arr[])
{
	for (int i = 0; i < n; i++)
	{
		for (int a = 1; a < n; a *= 2)
		{
			for (int q = 0; q < n - a; q += 2 * a)
			{
				int first_variable = 0;
				int second_variable = 0;
				int sum = 0;
				int varieble1 = varieble2;;
				int sum1 = varieble3 + a;
				int  sort= varieble3 + 2 * a;
			         sort = (sort < n) ? sort : n;
				int* Block = new int[sort - e];

				while (varieble1 + first_variable < sum1 && sum1 +second_variable < sort)
				{
					if (arr[varieble1 + first_variable].M[i] < arr[sum1 + second_variable].M[i])
					{
						Block[first_variable + second_variable] = arr[varieble1 + first_variable].M[i];
						first_vatieble++;
					}
					else
					{
						Block[first_variable + second_variable] = arr[sum1 + second_variable].M[i];
						second_variable++;
					}
				}
				while (varieble1 + first variable < sum1)
				{
					Block[first_variable + second_variable] = arr[varieble1 + first_variable].M[i];
					first_variable++;
				}
				while (sum1 + second_variable < sort)
				{
					Block[first_variable + second_variable] = arr[sum1 + second_variable].M[i];
					o++;
				}

				for (int sort1 = 0; sort1 < first_variable + second_variable; sort1++)
				{
					arr[varieble1 + sort1].M[i] = Block[sort1];
				}
				delete Block;

			}

		}
	}
}
void Matrix::CalcArray(Matrix Arr[]) {
	double Ser[n] = { 0, 0, 0, 0, 0 };
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			Ser[j] += (Arr[i].M[j] / 5);

		}
		std::cout << "f(" << j << "): " << Ser[j] << std::endl;;
	}
	double Sum[n] = {0};
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			Sum[j] = (Ser[0] * Ser[1] * Ser[2] * Ser[3] * Ser[4]);
		}
		std::cout << "F(" << j << "): " << Sum[j] << std::endl;;
	}

}


int main()
{
	Matrix  Array[n];
	cout << "Enter elements of matrix:\n" << endl;
	InputArray(Array);
	cout << "\nYour matrix:\n" << endl;
	OutputArray(Array);
	SortArray(Array);
	cout << "\nSorted matrix:\n" << endl;
	OutputArray(Array);
	cout << "\nCalculations:\n" << endl;
	Array->CalcArray(Array);
	
}
