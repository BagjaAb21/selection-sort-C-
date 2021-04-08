#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int angka[5];
	int jmax, temp, u = 0;

	// memasukkan nilai yang akan di urutkan
	cout << "Masukkan nilai pada elemen array yang akan di urutkan  \n\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Angka [" << i << "] = ";
		cin >> angka[i];
	}

	// menampilkan nilai sebelum diurutkan
	cout << "Sebelum diurutkan : ";
	for (int i = 0; i < 5; i++)
	{
		cout << angka[i] << ' ';
	}
	cout << endl;
	// pengurutan nilai dari terbesar ke terkcil
	for (int j = 0; j < 5; j++)
	{
		jmax = 4;
		for (int k = u; k <= 3; k++)
		{
			if (angka[k] > angka[jmax])
			{
				jmax = k;
			}
		}
		temp = angka[u];
		angka[u] = angka[jmax];
		angka[jmax] = temp;
		u++;


		cout << "hasil  proses ke-" << j + 1 << " = ";
		for (int k = 0; k < 5; k++)
		{
			cout << angka[k] << " ";
		}
		cout << endl;
	}

	// menampilkan nilai setelah diurutkan
	cout << "Setelah diurutkan : ";
	for (int i = 0; i < 5; i++)
	{
		cout << angka[i] << ' ';
	}
	cout << endl;

	int apa =_getch();

	return 0;
}