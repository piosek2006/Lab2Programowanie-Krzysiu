// Lab2Programowanie Krzysiu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Zadanie 1
	/*for (int i = 0; i <= 10; i++)
    {
		cout << i << endl;
	}
	for (int i = 5; i <= 7; i++)
	{
		cout << i << endl;
	}
	for (int i = 5; i < 7; i++)
	{
		cout << i << endl;
	}
	for (int i = 0; i <= 10; i+=2)
	{
		cout << i << endl;
	}
	for (int i = 10; i >= 0; i--)
	{
		cout << i << endl;
	}

	// Zadanie 2, 3, 5
	float fahr, celsius, start, limit, krok;

	start = 0;
	limit = 200;
	krok = 20;

	fahr = start;
	while (fahr <= limit)
	{
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		cout << fahr << "\t" << celsius << endl;
		fahr = fahr + krok;
	}
	
	for (fahr = 0.0; fahr <= 200.0; fahr = fahr + 20.0)
	{
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		cout << fahr << "\t" << celsius << endl;
	}
	
	for (fahr = 0; fahr <= 200; fahr = fahr + 20)
	{
		celsius = 5 * (fahr - 32.0) / 9;
		cout << fahr << "\t" << celsius << endl;
	}

	// Zadanie 6
	float fahr, celsius, start, limit, krok;

	start = 0;
	cout << "Podaj limit stopni F: ";
	cin >> limit;
	cout << "Podaj krok: ";
	cin >> krok;

	for (fahr = 0; fahr <= limit; fahr = fahr + krok)
	{
		celsius = 5 * (fahr - 32.0) / 9;
		cout << fahr << "\t" << celsius << endl;
	}*/

	// Zadanie 7
	float rzeczywista[10];

	for(int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> rzeczywista[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (rzeczywista[i] > 0)
		{
			cout << "Liczby rzeczywiste: " << rzeczywista[i] << endl;
		}
	}

	return 0;
}

