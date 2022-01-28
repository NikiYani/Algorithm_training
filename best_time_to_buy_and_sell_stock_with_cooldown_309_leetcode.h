#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_309_LEETCODE_H
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_309_LEETCODE_H

//    You are given an array prices where prices[i] is the price of a given stock on the ith day.

//    Find the maximum profit you can achieve.
//    You may complete as many transactions as you like
//    (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:

//    After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).
//    Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

#include <vector>

using namespace std;

class best_time_to_buy_and_sell_stock_with_cooldown_309_leetcode
{
public:
    best_time_to_buy_and_sell_stock_with_cooldown_309_leetcode();

    static int best_time(vector<int>& prices);
    static int best_time_to_buy_and_sell_stock();
    static int max(int &a, int &b);
    static int min(int &a, int &b);
};

#endif // BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_309_LEETCODE_H
