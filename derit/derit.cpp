﻿#include<iostream>
using namespace std;
int main()
{
	char hello[6][15];
	for (int i = 0; i < 6; i++) {
		cin >> hello[i];
	}
	for (int i = 0; i < 6; i++) {
		bool o = false;
		for (int j = 0; j < 15; j++) {
			if (hello[i][j] == 'a') {
				o = true;
				cout << hello[i] << endl;
			}
		}

	}
}