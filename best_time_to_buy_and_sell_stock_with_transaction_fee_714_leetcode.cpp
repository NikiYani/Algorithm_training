#include "best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode.h"

int best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode::max(int &a, int &b)
{
    return a >= b ? a : b;
}

int best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode::min(int &a, int &b)
{
    return a <= b ? a : b;
}

int best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode::best_time(vector<int> &prices, int fee)
{
    int profit = 0;
    int current_profit = 0;
    int min_p = prices[0];
    int max_p = prices[0];
    int buffer = 0;

    for (unsigned i = 1; i < prices.size(); i++)
    {
        min_p = min(min_p, prices[i]); // проверка является ли данный элемент минимальным
        max_p = max(max_p, prices[i]); // проверка является ли данный элемент максимальным

        buffer = prices[i] - min_p - fee; // оценка выгоды при продаже на данном элементе

        current_profit = max(current_profit, buffer); // сравнение выгоды

        if(max_p - prices[i] >= fee) //продажа акции только в том случае, если новая покупка отбивает цену комиссии
        {
            profit += current_profit;
            current_profit = 0;
            min_p = prices[i];
            max_p = prices[i];
        }
    }

    return profit + current_profit;
}

int best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode::best_time_to_buy_and_sell_stock()
{
    vector<int> prices = {1,3,10,5,10};

    return best_time(prices, 3);
}

best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode::best_time_to_buy_and_sell_stock_with_transaction_fee_714_leetcode()
{

}


