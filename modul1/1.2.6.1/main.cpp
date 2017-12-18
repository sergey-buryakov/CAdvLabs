#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table {"127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };
	int number;
	cin >> number;
	if (number > ip_table.size())
        cout << "Too big - value must be smaller than or equal to vector size." << endl;
    else
        for (int i = 0; i < number; i++)
            cout << ip_table[i] << " ";
	return 0;
}
