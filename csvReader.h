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
	static std::vector<std::string> tokenise(std::string csvLine, char separator);
	static OrderBookEntry stringsToOBE(std::string priceString,
										std::string amountString,
										std::string timestamp,
										std::string product,
										OrderBookType OrderBookType);

private:
	static OrderBookEntry stringsToOBE(std::vector<std::string> strings);



};

