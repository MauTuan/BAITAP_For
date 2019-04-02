#include<iostream>
using namespace std;

  int main()
 {
	int a;
	int b;
	int gta = 0;
	int gtb = 0;
	cout << " nhap a:";
	cin >> a;

	   for (int i = 1; i < a; i++)
	{

		if (a%i == 0)

		{
			cout << i << " ";
			gta += i;
		}
		
	}

	cout << "\ntong cac so a la :" << gta << endl;

	cout << " nhap b:";
	cin >> b;
	for (int j = 1; j< b; j++)
	{

		if (b%j == 0)

		{
			cout << j << " ";
			gtb += j;
		}
	       
	}
	cout <<"\ntong cac so b la :"<< gtb << endl;

	    if (a == gtb)
			
	    {
		cout << " vay 2 so " << a << " va " << b << " la 2 so ban be " << " YES ";
    	}
		else

		{
		cout << " vay 2 so " << a << " va " << b << " khong la 2 so ban be " << " NO ";
		}
		system("pause");
	return 0;
}