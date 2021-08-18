#pragma once
#include"leaner.h"
class studen: public leaner
{
public:
	studen();
	~studen();
	friend std::ostream& operator<<(std::ostream& os, studen& temp);
};

