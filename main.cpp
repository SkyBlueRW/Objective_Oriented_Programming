#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:
        // Constructor
        OrderBookEntry( double _price,
                        double _amount,
                        std::string _timestamp,
                        std::string _product,
                        OrderBookType _orderType)
        : price(_price),
          amount(_amount),
          timestamp(_timestamp),
          product(_product),
          orderType(_orderType)
        {

        }


        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType orderType;
};

void printMenu()
{
    // 1 print help
    std::cout << "1: Print help" << std::endl;
    // 2 print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    // 3 make an offer
    std::cout << "3: Make an offer" << std::endl;
    // 4 make a bid
    std::cout << "4: Make a bid" << std::endl;
    // 5 print wallet
    std::cout << "5: Print Wallet" << std::endl;
    // 6 continue to next time step
    std::cout << "6: Continue" << std::endl;

    std::cout << "============" << std::endl;
}

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyze the makret and make bids and offers" << std::endl;
}

void printMarketStats()
{
    std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}

void gotNextTimeFrame()
{
    std::cout << "Going to the next step" << std::endl;
}

int getUserOption()
{
    int userOption;

    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotNextTimeFrame();
    }
}

int main()
{
    // while (true)
    // {
    //     printMenu();
    //     int userOption = getUserOption();
    //     processUserOption(userOption);
    // }

    std::vector<OrderBookEntry> orders;

    orders.push_back(OrderBookEntry{1000,
                                    0.002,
                                    "2020/03/17 17:01:24.884492",
                                    "BTC/USDT",
                                    OrderBookType::bid});

    orders.push_back(OrderBookEntry{2000,
                                    0.002,
                                    "2020/03/17 17:01:24.884492",
                                    "BTC/USDT",
                                    OrderBookType::bid});

    // The first implementation
    //& means do not make a copy 
    for (OrderBookEntry& order: orders)
    {
        std::cout << "This price is " << order.price << std::endl;
    }
    // The second implementation
    for (unsigned int i = 0; i < orders.size() ; ++i)
    {
        std::cout << "This price is " << orders[i].price << std::endl;
    }

    return 0;
}


