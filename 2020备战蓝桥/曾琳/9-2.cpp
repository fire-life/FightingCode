
#include<iostream>
#include<string>
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int number[100] = { 1,1,0,1,1,1,0,1,0,1,0,1};

void transformation(int character[100])
{
	char a[4];
	int total = 0;
	int* p = character;
	for (int n = 1, i = 0; n <= 3; ++n, i++)
	{
		int mi = 3;
		total = 0;
		for (; mi >= 0 && p != '\0'; p++, mi--)
		{
			total = total + pow(2, mi)*(*p);
		}
		a[i] = total;
	}
	cout << "转化为十六进制数为:";
	for (int i = 0; i < 3; i++)
	{
		switch (a[i])
		{
		case 0:cout << "0"; break;
		case 1:cout << "1"; break;
		case 2:cout << "2"; break;
		case 3:cout << "3"; break;
		case 4:cout << "4"; break;
		case 5:cout << "5"; break;
		case 6:cout << "6"; break;
		case 7:cout << "7"; break;
		case 8:cout << "8"; break;
		case 9:cout << "9"; break;
		case 10: cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:
			cout << "error!" << endl;
			break;
		}
	}
}
int main()
{
	transformation(number);
	cout <<"(16)"<< endl;
	system("pause");
	return 0;
}
