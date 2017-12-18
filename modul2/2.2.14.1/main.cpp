#include <iostream>
#include <set>

using namespace std;

void foo (multiset <double> values, double start_value, double stop_value) {
    if (values.count(start_value) == 0 || values.count(stop_value) == 0)
    {
        cout << "Not found ";
    }
    else
    {
        double sum = 0;
        for (auto it = values.find(start_value); it != values.upper_bound(stop_value);it++)
            sum += *it;
        cout << sum;
    }
}

int main() {

	multiset <double> valuesA = { 1.1, 2.3, 2.7, 2.9, 3.5 };
	multiset <double> valuesB = { 2.5, 2.7, 3.14, 3.5, 3.5, 4.5 };
	double start_value, stop_value;
	cin >> start_value;
	cin >> stop_value;
	foo(valuesA, start_value,stop_value);
	cout << endl;
	foo(valuesB, start_value, stop_value);

	return 0;
}
