// Lab2Programowanie Krzysiu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
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
	}

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

	// Zadanie 8
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
			cout << i << "\n";
	}

	// Zadanie 9
	int n;
	cout << "Podaj przez ile mam dzielic: ";
	cin >> n;

	for (int i = 0; i <= 100; i++)
	{
		if (i % n == 0)
			cout << i << "\n";
	}
	
	// Zadanie 10
	int n;
	int suma = 0;
	cout << "Podaj przez ile mam dzielic: ";
	cin >> n;

	for (int i = 0; i <= 100; i++)
	{
		if (i % n == 0)
			suma++;
	}
	cout << "Liczb podzielnych przez " << n << " jest: " << suma << endl;

	// Zadanie 11
	int a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	
	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			if (i % 3 == 0)
				cout << i << "\n";
		}
	}
	else if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % 3 == 0)
				cout << i << "\n";
		}
	}
	else
	{
		cout << "Liczby sa rowne";
	}

	// Zadanie 12
	int n, srednia;
	srednia = 0;
	cout << "Podaj n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		srednia = srednia + i;
	}
	srednia = srednia / n;
	cout << "Srednia arytmetyczna liczb od 1 do " << n << " wynosi: " << srednia << endl;

	// Zadanie 13
	for (int i = 100; i >= 0; i--)
	{
		cout << i << endl;
	}

	// Zadanie 14
int a, b, c;
cout << "Podaj 3 liczby:\n";
cin >> a >> b >> c;
if (a <= b && a <= c)
{
	cout << "Liczba " << a << " jest najmniejsza" << endl;
}
else if (b <= a && b <= c)
{
	cout << "Liczba " << b << " jest najmnniejsza" << endl;
}
else
{
	cout << "Liczba " << c << " jest najmniejsza" << endl;
}*/

// Zadanie 15


	return 0;
}

