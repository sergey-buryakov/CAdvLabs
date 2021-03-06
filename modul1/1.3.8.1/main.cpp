#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;
	int max_value;
	cout << "Enter max value: ";
	cin >> max_value;
	if (max_value % 2 == 1)
	    max_value++;
    for (int i = 1; i < max_value; i += 2 )
    {
        v1.push_back(i);
        v2.push_back(i + 1);
    }

    for (vector<int>::iterator it1 = v1.begin(); it1 != v1.end() ;  it1++)
    {
        for (vector<int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++)
        {
            cout << *it1 + *it2 << " ";
        }
        cout << endl;
    }

    for (vector<int>::reverse_iterator it1 = v1.rbegin(); it1 != v1.rend() ;  it1++)
    {
        for (vector<int>::reverse_iterator it2 = v2.rbegin(); it2 != v2.rend(); it2++)
        {
            cout << *it1 + *it2 << " ";
        }
        cout << endl;
    }

	return 0;
}
