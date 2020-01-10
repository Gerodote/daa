#include "Student.h"

un::Student::Student(std::string Nickname, uint64_t Age, std::string UniName) : Person(Nickname, Age), uni(UniName) {}

std::string un::Student::GetUni() const
{
	return uni;
}
