// Minimum Descending itu mencari nilai terkecil nya dulu, terus diurutkan kebalik(nilai terkecil paling belakang),
// Jadi kalo nilai terkecil nya udah ketemu, nilainya bakalan ditaruh di indeks terakhir

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	// deklarasi array sebanyak 5 angka
	int angka[5] = { 3,5,2,7,4 };

	// menampilkan nilai sebelum diurutkan
	cout << "Sebelum diurutkan : ";
	for (int i = 0; i < 5; i++)
	{
		cout << angka[i] << ' ';
	}
	cout << endl;

	// --------------------------------------------------- pengurutan nilai ---------------------------------------------

	// jmin itu sebagai acuan indeks dari nilai terkecil 
	// contoh dari data 3 5 2 7 4, nilai terkecilnya 2, nah 2 itu berada di indeks/posisi ke 2
	// nah fungsinya jmin untuk menyimpan nilai indeksnya yaitu 2
	int jmin;

	// temp Untuk wadah sementara pada saat pertukaran angka
	// contoh dari data 3 5 2 7 4 ditemukan angka terkecil 2
	// nah untuk mindahin nilai 2 ini ke indeks pertama(indeks 0) kan nggak bisa begitu aja, 
	// karena kalo dipindahin langsung nilainya jadi sama-sama 2 nanti
	// trus 3 nya ditaruh mana?
	// nah jadi fungsinya temp ini untuk menyimpan sementara angka 3
	// trus angka 2 nya ditaruh di indeks pertama(indeks 0) jadi 2 5 2 7 4
	// trus angka 3 nya ditaruh di indeks 2 jadi 2 5 3 7 4
	int temp;

	// u disini sebagai pivot nya
	int u = 4;

	// nah ini perulangan sebanyak 5 kali untuk pengurutannya
	// misal loop pertama ketemu terkecilnya 2 ditaruh depan, 
	// trus looping selanjutnya ketemu 3 ditaruh di indeks berikutnya
	// trusss 5x sampe semua nya terurut
	for (int j = 0; j < 5; j++)
	{
		// ini jmin diset 0 setiap perulangan, ingat! jmin itu sebagai penampung nilai indeks dari angka terkecil
		jmin = 0;

		// ini perulangan sebanyak u kali, diatas kan dideklarasikan u = 4
		// jadi pada perulangan/pengurutan pertama (j = 0) u masih bernilai 4
		// yang artinya semua data diurutkan 
		for (int k = 1; k <= u; k++)
		{
			// intinya ini adalah pengkondisian untuk menentukan angka terkecilnya
			if (angka[k] < angka[jmin])
			{
				// kalau udah ditemukan angka terkecilnya disimpan deh di variable jmin
				jmin = k;
			}
		}
		// ini untuk penukarannya, sesuai penjelasan variable temp
		temp = angka[u];
		angka[u] = angka[jmin];
		angka[jmin] = temp;

		// u nya dikurangin agar di pengurutan berikutnya hanya 4 data yang diurutkan, karena nilai terkecil yang pertama udah ditemukan
		// begitu seterusnya
		u--;
	}

	// menampilkan nilai setelah diurutkan
	cout << "Setelah diurutkan : ";
	for (int i = 0; i < 5; i++)
	{
		cout << angka[i] << ' ';
	}
	cout << endl;

	_getch();

	return 0;
}