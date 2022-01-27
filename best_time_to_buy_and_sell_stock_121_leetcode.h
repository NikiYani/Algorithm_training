#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_121_LEETCODE_H
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_121_LEETCODE_H

//    You are given an array prices where prices[i]
//    is the price of a given stock on the ith day.

//    You want to maximize your profit by choosing a single
//    day to buy one stock and choosing a different day in the future to sell that stock.

//    Return the maximum profit you can achieve from this transaction.
//    If you cannot achieve any profit, return 0.

#include <vector>

using namespace std;

class best_time_to_buy_and_sell_stock_121_leetcode
{
public:
    best_time_to_buy_and_sell_stock_121_leetcode();

    static int best_time(vector<int>& prices);
    static int best_time_to_buy_and_sell_stock();
    static int max(int &a, int &b);
};

#endif // BEST_TIME_TO_BUY_AND_SELL_STOCK_121_LEETCODE_H
