#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double jumlah_Bitcoin_dibeli, harga_pembelian, harga_saat_ini ;
	
	
	cout << "Jumlah Bitcoin yang ingin dibeli\t: "; cin >> jumlah_Bitcoin_dibeli;
	cout << "Harga Pembelian\t\t\t\t: "; cin >> harga_pembelian;
	cout << "Harga Bitcoin saat ini\t\t\t: "; cin >> harga_saat_ini;
	cout << endl << endl;
	
	
	cout << "Kenaikan/Penurunan\t: " << ((harga_saat_ini-harga_pembelian)/harga_pembelian)*100 << "" << "%" << endl;
	cout << "Keuntungan/Kerugian\t: " << ((jumlah_Bitcoin_dibeli*harga_saat_ini)-(jumlah_Bitcoin_dibeli*harga_pembelian)) / 1000000 << " " << "juta" << endl;
	
	
	return 0;
}
	
