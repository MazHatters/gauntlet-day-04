Container chosen: std::map

Reason: std::map automatically iterates through the list in ascending order,
	which leads us to not needing to manually sort the data,
	we can also much easily search through the key explicitly
	comapred to using std::vector