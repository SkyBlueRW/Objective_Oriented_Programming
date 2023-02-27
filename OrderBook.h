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
	/** returns the earliest time in the order book */
	std::string getEarliestTime();
	/** returns the next time after the sent time in the order book*/
	std::string getNextTime(std::string timestamp);

	static double getHighPrice(std::vector<OrderBookEntry>& orders);
	static double getLowPrice(std::vector<OrderBookEntry>& orders);
	static double getMeanPrice(std::vector<OrderBookEntry>& orders);


private:
	std::vector<OrderBookEntry> orders;
};

