// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void clockwise(int side);
void counterclockwise(int side);
void rotate(int type);

int mofang[6][9];
int main()
{
	int step[20];
	for (int i = 0; i < 20; i++)
		step[i] = -1;

	for (int a = 0; a < 6; a++)
	{
		for (int b = 0; b < 9; b++)
		{
			mofang[a][b] = a;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "输入第" << i+1 << "面:" << endl;
		for (int j = 0; j < 9; j++)
		{
			cin >> mofang[i][j];
		}
	}
	
	
	while (step[19] < 12) {
		step[1]++;

		for (int i = 0; i < 19; i++) {
			if (step[i] = 11) {
				step[i] = 0;
				step[i + 1]++;
			}
		}

		for (int i = 0; i < 20; i++) {
			if (step[i] = -1)
				break;
			rotate(step[i]);
		}



	}

	system("pause");
    return 0;
}

void rotate(int type) {
	if (type % 2 == 0) {
		clockwise(type);
	}else{
		counterclockwise(type / 2);
	}
	
}

void clockwise(int side) {
	int temp,t1,t2,t3;
	temp = mofang[side][0];
	mofang[side][0] = mofang[side][6];
	mofang[side][6] = mofang[side][8];
	mofang[side][8] = mofang[side][2];
	mofang[side][2] = temp;
	temp = mofang[side][3];
	mofang[side][3] = mofang[side][7];
	mofang[side][7] = mofang[side][5];
	mofang[side][5] = mofang[side][1];
	mofang[side][1] = temp;
	if (side == 0) {
		t1 = mofang[1][0];
		t2 = mofang[1][3];
		t3 = mofang[1][6];
		mofang[1][0] = mofang[4][6];
		mofang[1][3] = mofang[4][7];
		mofang[1][6] = mofang[4][8];
		mofang[4][6] = mofang[3][8];
		mofang[4][7] = mofang[3][5];
		mofang[4][8] = mofang[3][2];
		mofang[3][8] = mofang[5][2];
		mofang[3][5] = mofang[5][1];
		mofang[3][2] = mofang[5][0];
		mofang[5][2] = t1;
		mofang[5][1] = t2;
		mofang[5][0] = t3;
	}
}

void counterclockwise(int side) {
	int temp;
	temp = mofang[side][0];
	mofang[side][0] = mofang[side][2];
	mofang[side][2] = mofang[side][8];
	mofang[side][8] = mofang[side][6];
	mofang[side][6] = temp;
	temp = mofang[side][3];
	mofang[side][3] = mofang[side][1];
	mofang[side][1] = mofang[side][5];
	mofang[side][5] = mofang[side][7];
	mofang[side][7] = temp;
}