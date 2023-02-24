#pragma once

#include "OrderBookEntry.h"
#include <vector>
#include <string>

class csvReader
{
public:
	csvReader();

	// Can call it without create an instance
	static std::vector<OrderBookEntry> readCSV(std::string csvFilename);

private:
	static std::vector<std::string> tokenise(std::string csvLine, char separator);
	static OrderBookEntry stringsToOBE(std::vector<std::string> strings);



};
