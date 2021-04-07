#include <iostream>

using namespace std;

int main()
{
	// deklarasi array dengan 5 elemen
	int A[5];
	int j, k, i, temp;
	int jmax, u = 4;

	// memasukkan nilai yang akan di urutkan
	cout << "Masukkan nilai pada elemen array yang akan di urutkan  \n";
	for (i = 0; i < 5; i++)
	{
		cout << "A [" << i << "] = ";
		cin >> A[i];
	}

	//menampilkan nilai yang sudah di inputkan dan belum di urutkan
	cout << "\nNilai elemen array sebelum di urutkan   \n";
	for (i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	// proses pengururtan secara menaik (ascending)

	for ( j = 0; j < 5; j++)
	{
		jmax = 0;
		for ( k = 1; k <= u; k++)
		{
			if (A[k] > A[jmax])
				jmax = k;

			temp = A[u];
			A[u] = A[jmax];
			A[jmax] = temp;
			u--;
			
			
			cout << "hasil  proses ke-" << j + 1 << " = ";
			for (k = 0; k < 5; k++)
			{
				cout << A[k] << " ";
			}
			cout << endl;
			
		}
		
	}

	// menampilkan nilai stelah diurutkan
	cout << "\nNilai setelah diurutkan " << endl;
	for ( i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
		
	}
	cout << endl;

	system("pause");
	return 0;
}