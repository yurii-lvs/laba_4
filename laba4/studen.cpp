#define _CRT_SECURE_NO_WARNINGS
#include "studen.h"
#include <iostream>
#include <iomanip>
using namespace std;
studen::studen() {

}
studen::~studen() {

}

std::ostream& operator<< (std::ostream& os,studen& temp)
{
	cout << temp.getStu().getFam();
	for (int j = 0; j < 15 - strlen(temp.getStu().getFam()) + 7; j++) cout << " ";
	cout << temp.getStu().getName();
	for (int j = 0; j < 15 - strlen(temp.getStu().getName()) + 3; j++) cout << " ";
	cout << temp.getStu().getYear();
	for (int j = 0; j < 18; j++) cout << " ";
	cout << temp.getFac();
	for (int j = 0; j < 15 - strlen(temp.getFac()) + 9; j++) cout << " ";
	cout << temp.getGr() << endl;
	return os;
}