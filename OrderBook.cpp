#include "OrderBook.h"
#include "csvReader.h"
#include <iostream>
#include <map>


OrderBook::OrderBook(std::string filename)
{
	orders = csvReader::readCSV(filename);
}

std::vector<std::string> OrderBook::getKnownProducts()
{
	std::vector<std::string> products;

	std::map<std::string, bool> prodMap;

	for (OrderBookEntry& e : orders)
	{
		prodMap[e.product] = true;
	}
	// flatten the map to a vector of strings
	for (auto const& e : prodMap)
	{
		products.push_back(e.first);
	}

	return products;
}


std::vector<OrderBookEntry> OrderBook::getOrders(OrderBookType type,
	std::string product,
	std::string timestamp)
{
	std::vector<OrderBookEntry> orders_sub;
	return orders_sub;
}