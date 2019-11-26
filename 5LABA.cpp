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
	friend void InputArray(Matrix Arr[]);
	friend void OutputArray(Matrix Arr[]);
	friend void SortArray(Matrix  Arr[]);
	void CalcArray(Matrix Arr[]);
};

void InputArray(Matrix  Arr[])
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cin >> Arr[i].M[j];
		}
}
void OutputArray(Matrix  Arr[])
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
void SortArray(Matrix  arr[])
{
	for (int i = 0; i < n; i++)
	{
		for (int a = 1; a < n; a *= 2)
		{
			for (int q = 0; q < n - a; q += 2 * a)
			{
				int p = 0;
				int o = 0;
				int sum = 0;
				int e = q;
				int z = q + a;
				int c = q + 2 * a;
				c = (c < n) ? c : n;
				int* Block = new int[c - e];

				while (e + p < z && z + o < c)
				{
					if (arr[e + p].M[i] < arr[z + o].M[i])
					{
						Block[p + o] = arr[e + p].M[i];
						p++;
					}
					else
					{
						Block[p + o] = arr[z + o].M[i];
						o++;
					}
				}
				while (e + p < z)
				{
					Block[p + o] = arr[e + p].M[i];
					p++;
				}
				while (z + o < c)
				{
					Block[p + o] = arr[z + o].M[i];
					o++;
				}

				for (int w = 0; w < p + o; w++)
				{
					arr[e + w].M[i] = Block[w];
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
