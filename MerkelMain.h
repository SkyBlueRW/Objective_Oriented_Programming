//Only include below libarary/file once
#pragma once
#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{
    public:
        MerkelMain();  
        // Call this to start the sim
        void init();  
    
    // Can not be called directly I.E.: app.printMenu()
    // Can be called via public function
    // Generally good to expose less things to the outside world
    private:
        void loadOrderBook();
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterOffer();
        void enterBid();
        void printWallet();
        void gotNextTimeFrame();
        int getUserOption();
        void processUserOption(int userOption);

        std::vector<OrderBookEntry> orders;

};