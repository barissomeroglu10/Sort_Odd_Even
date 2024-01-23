/*
In this code, we will get value from user for array A and B. Then we will use odd-even sort to put the arrays in an order.
After this, we will subtraction to have array C.

Developer: Barış Someroğlu
Date: 23.01.2024 / 4:50 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, change, temp;

	// get size for array
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n), B(n), C(n);

	cout << endl;

	// get value from user for arrays
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter Value for A[" << i << "]: ";
		cin >> A[i];

		cout << "Please Enter Value for B[" << i << "]: ";
		cin >> B[i];
	}

	cout << endl;

	// write entered array A
	cout << "Array A is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	// write entered array B
	cout << "Array B is: ";
	for (int i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}

	change = 1;

	// use odd-even sort for array A
	while (change == 1)
	{
		change = 0;

		// odd-even
		for (int i = 1; i < n - 1; i += 2)
		{
			if (A[i+1]<A[i])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
				change = 1;
			}
		}

		// even-odd
		for (int i = 0; i < n - 1; i += 2)
		{
			if (A[i + 1] < A[i])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
				change = 1;
			}
		}
	}

	cout << endl;

	// write sorted array A
	cout << "Sorted array A is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	change = 1;

	// use odd-even sort for array B
	while (change == 1)
	{
		change = 0;

		// odd-even
		for (int i = 1; i < n - 1; i += 2)
		{
			if (B[i + 1] < B[i])
			{
				temp = B[i];
				B[i] = B[i + 1];
				B[i + 1] = temp;
				change = 1;
			}
		}

		// even-odd
		for (int i = 0; i < n - 1; i += 2)
		{
			if (B[i + 1] < B[i])
			{
				temp = B[i];
				B[i] = B[i + 1];
				B[i + 1] = temp;
				change = 1;
			}
		}
	}

	cout << endl;

	// write sorted array B
	cout << "Sorted array B is: ";
	for (int i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}
	

	// do subtraction
	for (int i = 0; i < n; i++)
	{
		C[i] = A[i] - B[i];
	}

	cout << endl;

	// write subtraction array C
	cout << "Subtraction array C is: ";
	for (int i = 0; i < n; i++)
	{
		cout << C[i] << " ";
	}

	cout << endl;

	return 0;
}