#pragma once
#include "OrderBookEntry.h"
#include "csvReader.h"
#include <string>
#include <vector>

class OrderBook
{
public:
	/** Construct, reading a csv data file*/
	OrderBook(std::string filename);
	/** return vector of all kown products in the dataset*/
	std::vector<std::string> getKnownProducts();
	std::vector<OrderBookEntry> getOrders(OrderBookType type, 
										  std::string product,
										  std::string timestamp);

private:
	std::vector<OrderBookEntry> orders;
};

