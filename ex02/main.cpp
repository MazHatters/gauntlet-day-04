#include <iostream>
#include <string>
#include <set>

int main()
{
	int list[] = {7, 2, 7, 42, 13, 2, 42};
	int lstSize = sizeof(list) / sizeof(list[0]);
	std::set<int> ids;

	for (int i = 0; i < lstSize; i++) // <- Inserting from list into ids
		ids.insert(list[i]);

	std::cout << "-- spawned (unique, sorted) --" << std::endl;	
	for (const auto& i : ids)		// <- Prints all inserted id inside ids
		std::cout << std::to_string(i) << std::endl;
	std::cout << "count: " << ids.size() << std::endl;

	int isSpawned[] = {42, 99};
	for (const auto& i : isSpawned)
	{
		std::string spawned = ids.find(i) != ids.end() ? "yes" : "no" ;
		std::cout << "is " << i << " spawned? "
			<< spawned << std::endl;
	}
	return (0);
}

// spawn stream (note the repeats):
// 7, 2, 7, 42, 13, 2, 42