#include "Entity.hpp"
#include <iostream>
#include <map>

int main()
{
	std::map<int, Entity> byId =
	{
		{7, {7, "orc", 30}},
		{2, {2, "bat", 8}},
		{42, {42, "boss", 300}},
		{13, {13, "rat", 4}}
	};

	int targetId[] = {42, 99};
	int size = sizeof(targetId) / sizeof(targetId[0]);
	std::string isFound;
	for (int i = 0; i < size; i++)
	{
		auto result = byId.find(targetId[i]);
		if (result != byId.end())
			isFound = result->second.name;
		else
			isFound = "(not found)";
		std::cout << "id " << std::to_string(targetId[i])
			<< ": " << isFound << std::endl;
	}
	std::cout << "-- entities by id--" << std::endl;		// <- entities by id

	for (const auto& [id, type] : byId)
		std::cout << type.id  << " "
			<< type.name << std::endl;
	return (0);
}

// seed:
// {7, "orc", 30}, {2, "bat", 8}, {42, "boss", 300}, {13, "rat", 4}