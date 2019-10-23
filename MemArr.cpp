// MemArr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#define MAX 10000
//#define DEBUG

using namespace std;

int main()
{
	char arr[MAX];
	int i = 0;
	int length = 0;

	cout << "Put in the HEX!\n";
	
	while (cin >> arr[i]) {
		i++;
	}

	for (int i = 0; i < MAX * 2; i++) {
#ifdef DEBUG
		if (arr[i] == 0xFFFFFFCC) {
			break;
		}
#endif // DEBUG
#ifndef DEBUG
		if (arr[i] == 0x00) {
			break;
		}
#endif // !DEBUG


		length++;
	}
	cout << "char array\[" << length/2 << "\] \= \{ ";
	for (int i = 1,j = 0; i < length; i += 2, j--) {
		if (j == 0) {
			j = 16;
			cout << "\n\t";
		}
		cout << " 0x" << arr[i - 1] << arr[i];
		if (i != length - 1) {
			cout << ",";
		}

	}
	cout << "\n}";

}
