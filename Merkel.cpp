#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include "csvReader.h"


std::vector<std::string> tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;
    signed int start, end;
    std::string token;

    start = csvLine.find_first_not_of(separator, 0);

    do
    {
        end = csvLine.find_first_of(separator, start);

        if (start == csvLine.length() || start == end)
            break;
        if (end >= 0)
            token = csvLine.substr(start, end - start);
        else
            token = csvLine.substr(start, csvLine.length() - start);

        tokens.push_back(token);

        start = end + 1;

    } while (end != std::string::npos);

    return tokens;
}


int main()
{

//    MerkelMain app{};
//    app.init();

    //std::ifstream csvFile{"20200317.csv"};
    //std::string line;
    //std::vector<std::string> tokens;



    //    csvFile.close();
    //}
    //else
    //{
    //    std::cout << "Could not open file " << std::endl;
    //}

    csvReader reader;

    return 0;

}
