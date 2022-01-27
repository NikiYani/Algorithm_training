#include "best_time_to_buy_and_sell_stock_2_122_leetcode.h"

int best_time_to_buy_and_sell_stock_2_122_leetcode::best_time(vector<int> &prices)
{
    int min = prices[0];
    int profit = 0;

    for(unsigned i = 1; i < prices.size(); i++)
    {
        if(prices[i] - min > 0)
        {
            profit += prices[i] - min;
            min = prices[i];
        }
        else
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }
        }
    }

    return profit;
}

int best_time_to_buy_and_sell_stock_2_122_leetcode::best_time_to_buy_and_sell_stock()
{
    vector<int> prices = {7,1,5,10,6,8};

    return best_time(prices);
}

best_time_to_buy_and_sell_stock_2_122_leetcode::best_time_to_buy_and_sell_stock_2_122_leetcode()
{

}

