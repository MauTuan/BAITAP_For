#include <iostream>
#include < conio.h>
using namespace std;

int biendem(int dem, int n);

int main()
{
	int n;
	int dem = 0;
	int tong = 0;
	int chuso;
	
		cout << " nhap so n:";
		cin >> n;
		int temp = n; // gán lưu số n

		//cout << " bien dem " << biendem(dem, n) + 1 << endl;
		int somu = biendem(dem, n) + 1;
		// tách  các chữ số 
		while (n != 0)
		{
			chuso = n % 10;

			n /= 10;
			tong += pow(chuso, somu);
		}
		cout << "tong bang :" << tong;
		// kiểm tra kết quả 
		if (tong == temp)
			cout << " \n la so Armstrong : YES";
		else
			cout << " \n la so Armstrong : NO";
	
	
	_getch();
	return 0;
}
// đếm số 
int biendem(int dem, int n)
{
	while (n >= 10)
	{
		n = n / 10;
		dem++;
	}
	
	return dem;

}
