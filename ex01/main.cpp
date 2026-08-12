#include "Entity.hpp"
#include <map>

int main()
{
	std::map<int, Entity> byId;

	byId[0] = {7, "orc", 30};
	byId[1] = {2, "bat", 8};
	byId[2] = {42, "boss", 300};
	byId[3] = {13, "rat", 4};
	auto i = byId.find();

}

// seed:
// {7, "orc", 30}, {2, "bat", 8}, {42, "boss", 300}, {13, "rat", 4}