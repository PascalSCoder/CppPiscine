#include <iostream>
#include "Data.hpp"

#pragma region Debug

#define C_RESET  "\x1B[0m"
#define C_RED  "\x1B[31m"
#define C_GREEN  "\x1B[32m"
#define C_YELLOW  "\x1B[33m"
#define C_BLUE  "\x1B[34m"
#define C_MAGENTA  "\x1B[35m"
#define C_CYAN  "\x1B[36m"
#define C_WHITE  "\x1B[37m"

void PrintTitle(std::string str)
{
	std::cout << std::endl << C_CYAN << str << C_RESET << std::endl;
}

#pragma endregion

uintptr_t Serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	PrintTitle("Initialize dataset");
	Data data;
	data.someName = "Dit is mijn naam";
	data.someInt = 123456;
	data.someLong = INT_MAX;
	std::cout << "Name: " << data.someName << std::endl;
	std::cout << " Int: " << data.someInt << std::endl;
	std::cout << "Long: " << data.someLong << std::endl;

	PrintTitle("Serializing!");
	uintptr_t uint = Serialize(&data);
	std::cout << "Reinterpreted data address: " << &data << " to: " << uint << std::endl;

	PrintTitle("Deserialize again...");
	Data *dataPtr = Deserialize(uint);
	std::cout << "Reinterpreted " << uint << " to " << dataPtr << std::endl;
	std::cout << "Name: " << dataPtr->someName << std::endl;
	std::cout << " Int: " << dataPtr->someInt << std::endl;
	std::cout << "Long: " << dataPtr->someLong << std::endl;
}
