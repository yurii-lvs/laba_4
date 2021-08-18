#pragma once
#include"prepod.h"
class teacher: public prepod
{
public:
	teacher();
	~teacher();
	friend std::ostream& operator<<(std::ostream& os, teacher& temp);
};

