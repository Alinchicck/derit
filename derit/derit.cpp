﻿#include<iostream>
using namespace std;
int main()
{
	char hello[5][10];
	for (int i = 0; i < 5; i++) {
		cin >> hello[i];
	}
	for (int i = 0; i < 5; i++) {
		bool o = false;
		for (int j = 0; j < 10; j++) {
			if (hello[i][j] == 'a') {
				o = true;
				cout << hello[i] << endl;
			}
		}

	}
}