#include <iostream>
#include <vector>
#include "Entity.hpp"

int main()
{
	std::vector<Entity> roster;

	roster.push_back(Entity{7, "orc", 30});
	roster.push_back(Entity{2, "bat", 8});
	roster.push_back(Entity{42, "boss", 300});
	roster.push_back(Entity{13, "rat", 4});

	std::cout << "-- roster --" << std::endl;
	for (auto i = roster.begin(); i != roster.end();)
	{
		std::cout << std::to_string(i->id) << " "
			<< i->name << " (hp " << std::to_string(i->hp)
			<< ")" << std::endl;
		i++;
	}
	std::cout << "-- survivors -- " << std::endl;
	for (auto j = roster.begin(); j != roster.end();)
	{
		if (j->hp <= 5)
			roster.erase(j);
		else
		{
			std::cout << std::to_string(j->id) << " "
				<< j->name << " (hp " << j->hp
				<< ")" << std::endl;
			j++;
		}
	}
}

// seed, in this order:
//{7, "orc", 30}, {2, "bat", 8}, {42, "boss", 300}, {13, "rat", 4}
