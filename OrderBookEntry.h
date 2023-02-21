#pragma once
#include <string>

enum class OrderBookType { bid, ask, unknown};


// OrderBookEntry namespace
class OrderBookEntry
{
public:
    // Constructor
    OrderBookEntry(double _price,
        double _amount,
        std::string _timestamp,
        std::string _product,
        OrderBookType _orderType);
    static OrderBookType stringToOrderBookType(std::string s);

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};
