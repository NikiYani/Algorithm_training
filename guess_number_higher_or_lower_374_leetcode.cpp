#include "guess_number_higher_or_lower_374_leetcode.h"
#include "random"
#include "time.h"
#include "iostream"

using namespace std;

int guess_number_higher_or_lower_374_leetcode::guess_game()
{
    srand(time(nullptr));

    int picked_num = rand() % 50;
    int choice_num = -100;

    while(true)
    {
        cout << "Guess the number I made (from 0 to 50): " << endl;
        cin >> choice_num;

        if(choice_num < 50 && choice_num > 0){
            if(choice_num > picked_num)
            {
                cout << "This is more than I chose!" << endl << endl;
            }
            else if(choice_num < picked_num)
            {
                cout << "This is less than I chose!" << endl << endl;
            }
            else
            {
                cout << "I made a number: " << endl;
                return choice_num;
            }
        }
        else
        {
            cout << "The number is out of range" << endl;
        }
    }
}

guess_number_higher_or_lower_374_leetcode::guess_number_higher_or_lower_374_leetcode()
{

}
