#include "Person.h"

std::string dm::Person::GetName() const
{
	return name;
}

uint64_t dm::Person::GetAge() const
{
	return age;
}

dm::Person::Person(std::string nickname, uint64_t OldStage) : name(nickname), age(OldStage)
{}
