#pragma once
#include "Person.h"
namespace un {
	class Student : public dm::Person 
	{
	public:
		explicit Student(std::string Nickname, uint64_t Age, std::string UniName);
		std::string GetUni() const;
	private:
		std::string uni;
	};
}

