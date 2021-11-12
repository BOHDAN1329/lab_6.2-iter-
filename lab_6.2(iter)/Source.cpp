
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

void creat(int* r, int size, int low, int high)
{
	for (int i = 0; i < size; i++)
		r[i] = low + rand() % (high - low + 1);
}

int maxEven(int* a, const int size)
{
	int max;
	int imax = -1; 
	for (int i = 0; i < size; i++)
		if (a[i] %2 == 0 )
		{
			max = a[i]; 
			imax = i; 
			break; 
		}
	if (imax == -1)
	{
		cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
		return 0; 
	}
	for (int i = imax + 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
			max = a[i];
	return max;
}

int Find(int* a, const int size, const int x)
{
	for (int i = 0; i < size; i++) {
		if (a[i] == x)
			return i;
	}
}

int main()
{
	srand((unsigned)time(NULL));


	const int n = 20;
	int a[n];
	int low = -10;
	int high = 50;
	creat(a, n, low, high);

	cout << "==================================================================================" << endl;
	cout <<
	"|";
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << a[i] << " ";
	}
	cout << "|\n";
	cout << "==================================================================================" << endl;

	int MaxEven = maxEven(a, n);

	cout << " |Max even number : " << MaxEven << " | " << endl;
	cout << " |Index of max even number : " << Find(a,n,MaxEven) << " | " << endl;
		
}