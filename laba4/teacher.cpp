#define _CRT_SECURE_NO_WARNINGS
#include "teacher.h"
#include <iostream>
#include <iomanip>
using namespace std;
teacher::teacher() {

}
teacher::~teacher() {

}

std::ostream& operator<< (std::ostream& os, teacher& temp)
{
	cout << temp.getFio().getFam();
	for (int j = 0; j < 15 - strlen(temp.getFio().getFam()) + 7; j++) cout << " ";
	cout << temp.getFio().getName();
	for (int j = 0; j < 15 - strlen(temp.getFio().getName()) + 3; j++) cout << " ";
	cout << temp.getFio().getFath();
	int s = 0;
	for (int j = 0; j < 15 - strlen(temp.getFio().getFath()) + 8; j++) cout << " ";
	if (temp.getDep() == 1) cout << "ИПОВС";
	if (temp.getDep() == 2) cout << "ВМ";
	if (temp.getDep() == 3) cout << "ВТ";
	if (temp.getDep() == 1) s = 5;
	if (temp.getDep() == 2) s = 2;
	if (temp.getDep() == 3) s = 2;
	for (int j = 0; j < 15 - s + 7; j++) cout << " ";
	if (temp.getSt() == 1) cout << "преподаватель";
	if (temp.getSt() == 2) cout << "доцент";
	if (temp.getSt() == 3) cout << "доктор наук";
	if (temp.getSt() == 1) s = 13;
	if (temp.getSt() == 2) s = 6;
	if (temp.getSt() == 3) s = 11;
	for (int j = 0; j < 15 - s + 13; j++) cout << " ";
	cout << temp.getSubj() << endl;
	return os;
}
