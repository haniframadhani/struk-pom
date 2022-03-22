#include <iostream>
using namespace std;
int main()
{
	int pertalite = 7000, pertamax = 9000, liter, pilihan, total;
	string nama, jenisBensin;

	cout << "Nama Pelanggan : ";
	getline(cin, nama);
	cout << "Jenis bensin : " << endl;
	cout << "1. pertalite " << endl;
	cout << "2. pertamax " << endl;
	cout << "Pilih jenis bensin(1/2) : ";
	cin >> pilihan;
	switch (pilihan)
	{
	case 1:
		cout << "Masukan jumlah liter : ";
		cin >> liter;
		jenisBensin = "pertalite";
		total = liter * pertalite;
		cout << "Total pembelian Rp." << total;
		break;
	case 2:
		cout << "Masukan jumlah liter : ";
		cin >> liter;
		jenisBensin = "pertamax";
		total = liter * pertamax;
		cout << "Total pembelian Rp." << total;
		break;
	default:
		cout << "input salah";
		break;
	}

	system("cls");

	cout << "++++++++++++++struk pembelian++++++++++++++" << endl;
	cout << "Nama Pembeli \t: " << nama << endl;
	cout << "Jenis bensin \t: " << jenisBensin << endl;
	cout << "Total Liter \t: " << liter << " Liter" << endl;
	cout << "Total Harga \t: Rp." << total;
}