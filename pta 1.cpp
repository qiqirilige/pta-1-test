// 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int foot;
	int inch;
	int meter;
	cin >> meter;
	foot = meter / 30.48;
	inch = (meter - 30.48*foot) / 30.48 * 12;
	cout << foot << " " << inch << endl;

	return 0;
}






