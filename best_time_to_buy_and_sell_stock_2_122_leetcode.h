#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_2_122_LEETCODE_H
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_2_122_LEETCODE_H

//    You are given an integer array prices where prices[i]
//    is the price of a given stock on the ith day.

//    On each day, you may decide to buy and/or sell the stock.
//    You can only hold at most one share of the stock at any time.
//    However, you can buy it then immediately sell it on the same day.

//    Find and return the maximum profit you can achieve.

#include <vector>

using namespace std;

class best_time_to_buy_and_sell_stock_2_122_leetcode
{
public:
    best_time_to_buy_and_sell_stock_2_122_leetcode();

    static int best_time(vector<int>& prices);
    static int best_time_to_buy_and_sell_stock();
};

#endif // BEST_TIME_TO_BUY_AND_SELL_STOCK_2_122_LEETCODE_H
