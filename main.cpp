#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"


int main()
{
    MerkelMain app{};
    app.init();

    // while (true)
    // {
    //     printMenu();
    //     int userOption = getUserOption();
    //     processUserOption(userOption);
    // }

    // std::vector<OrderBookEntry> orders;

    // orders.push_back(OrderBookEntry{1000,
    //                                 0.002,
    //                                 "2020/03/17 17:01:24.884492",
    //                                 "BTC/USDT",
    //                                 OrderBookType::bid});

    // orders.push_back(OrderBookEntry{2000,
    //                                 0.002,
    //                                 "2020/03/17 17:01:24.884492",
    //                                 "BTC/USDT",
    //                                 OrderBookType::bid});

    // // The first implementation
    // //& means do not make a copy 
    // for (OrderBookEntry& order: orders)
    // {
    //     std::cout << "This price is " << order.price << std::endl;
    // }
    // // The second implementation
    // for (unsigned int i = 0; i < orders.size() ; ++i)
    // {
    //     std::cout << "This price is " << orders[i].price << std::endl;
    // }

    return 0;
}


