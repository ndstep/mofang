// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int mofang[6][9];
	for (int i = 0; i < 6; i++)
	{
		cout << "输入第" << i+1 << "面:" << endl;
		for (int j = 0; j < 9; j++)
		{
			cin >> mofang[i][j];
		}
	}


	system("pause");
    return 0;
}

