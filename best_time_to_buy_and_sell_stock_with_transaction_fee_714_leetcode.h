#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_TRANSACTION_FEE_714_LEETCODE_H
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_TRANSACTION_FEE_714_LEETCODE_H

//    You are given an array prices where prices[i] is the
//    price of a given stock on the ith day, and an integer fee representing a transaction fee.

//    Find the maximum profit you can achieve. You may complete
//    as many transactions as you like, but you need to pay the transaction fee for each transaction.

//    Note: You may not engage in multiple transactions simultaneously
//          (i.e., you must sell the stock before you buy again).

#include <vector>

using namespace std;

class best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode
{
public:
    best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode();

    static int best_time(vector<int>& prices, int fee);
    static int best_time_to_buy_and_sell_stock();
    static int max(int &a, int &b);
    static int min(int &a, int &b);
};

#endif // BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_TRANSACTION_FEE_714_LEETCODE_H
