// bai7_cac_thu_trong _tuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "CAC THU TRONG TUAN\n";
	int(so);
	cout << "nhap so\n";
	cin >> so;
	switch (so)
	{
	case 2:
		cout << "Thu Hai\n";
		break;
	case 3:
		cout << "Thu Ba\n";
		break;
	case 4:
		cout << "Thu Tu\n";
		break;
	case 5:
		cout << "Thu nam\n";
		break;
	case 6:
		cout << "Thu Sau\n";
		break;
	case 7:
		cout << "Thu bay\n";
		break;
	case 8:
		cout << "Chu nhat\n";
		break;
	default:
		cout << "khong phai cac thu trong tuan";
	}

	return 0;
}