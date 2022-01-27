#include "best_time_to_buy_and_sell_stock_121_leetcode.h"


int best_time_to_buy_and_sell_stock_121_leetcode::max(int &a, int &b)
{
    return a >= b ? a : b;
}

int best_time_to_buy_and_sell_stock_121_leetcode::best_time(vector<int> &prices)
{
    int min = prices[0];
    int profit = 0;

    for(unsigned i = 0; i < prices.size(); i++)
    {
        if(prices[i] - min > profit)
        {
            profit = prices[i] - min;
        }
        if(prices[i] < min)
        {
            min = prices[i];
        }
    }

//    for(unsigned i = 0; i < prices.size(); i++)
//    {
//        for(unsigned j = processed_part + 1; j < prices.size(); j++)
//        {
//            buy_elem = prices[i];
//            if(buy_elem < prices[j])
//            {
//                buffer = prices[j] - buy_elem;
//                profit = max(profit, buffer);
//            }
//        }
//        processed_part++;
//    }

    return profit;
}

int best_time_to_buy_and_sell_stock_121_leetcode::best_time_to_buy_and_sell_stock()
{
    vector<int> prices = {7,1,5,10,6,4};

    return best_time(prices);
}

best_time_to_buy_and_sell_stock_121_leetcode::best_time_to_buy_and_sell_stock_121_leetcode()
{

}


