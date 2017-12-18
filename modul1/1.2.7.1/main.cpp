#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> banknotes { 10, 20, 50, 100, 200 };
	vector<int> numbers { 5, 6, 3, 4, 5 };
	int money1, money2;
	cin >> money1 >> money2;
	bool a = false, b = false;
	if (money1 % 10 != 0)
        cout << "Incorrect amount of money.";
	else
	{
        for (vector<int>::reverse_iterator itB = banknotes.rbegin(), itN = numbers.rbegin();  itB != banknotes.rend(); )
        {
            if (money1 < *itB)
            {
                itB++;
                itN++;
            }
            else
            {
                if (*itN > 0)
                {
                    money1 -= *itB;
                    --*itN;
                }
                else
                {
                    itB++;
                    itN++;
                }
            }
            if (money1 == 0)
            {
                cout << "Enough money.";
                break;
            }
        }
        if (money1 != 0)
            cout << "Not enough money.";
	}

	if (money2 % 10 != 0)
	{
	    cout << "Incorrect amount of money.";
	    b = true;
	}
	else
	{
        for (vector<int>::reverse_iterator itB = banknotes.rbegin(), itN = numbers.rbegin();  itB != banknotes.rend(); )
        {
            if (money2 < *itB)
            {
                itB++;
                itN++;
            }
            else
            {
                if (*itN > 0)
                {
                    money2 -= *itB;
                    --*itN;
                }
                else
                {
                    itB++;
                    itN++;
                }
            }
            if (money2 == 0)
            {
                cout << "Enough money.";
                break;
            }
        }
        if (money2 != 0)
            cout << "Not enough money.";
	}

	return 0;
}
