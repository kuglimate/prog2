// rendez.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int rendez(int szamok[], int db) {
	for (int i = 0;i < db;i++) {
		for (int j = 0;j < db;j++) {
			if (szamok[j] > szamok[j + 1]) {
				int temp = szamok[j];
				szamok[j] = szamok[j + 1];
				szamok[j+1] = temp;
			}
		}
	}
	for (int i = 0;i < db;i++) {
		cout << szamok[i] << "  " ;
	}
	return 0;
}

int main()
{
	int tomb[5] = { 34,56,76,23,21 };
	int db = 4;
	rendez(tomb, db);
	getchar();
    return 0;
}

