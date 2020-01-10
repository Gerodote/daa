#pragma once
#include <string>
namespace dm {
	class Person
	{
	public:
		std::string GetName() const;
		uint64_t GetAge() const;
		explicit Person(std::string nickname, uint64_t OldStage);

	private:
		std::string name;
		uint64_t age;
	};
}

