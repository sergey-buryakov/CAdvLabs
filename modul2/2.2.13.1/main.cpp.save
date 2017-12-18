#include <iostream>
#include <set>
#include <functional>

using namespace std;

void foo (set <double, greater<double>> values, double number) {
    if (values.count(number) == 0)
        cout << "Not found";
    else
        for (auto it = values.find(number); it != values.end(); it++)
            cout << *it << " ";
}

int main() {

	set <double, greater<double>> valuesA = { -1.1, 2.9, -2.3, 2.71 };
	set <double, greater<double>> valuesB = { -3.14, 2.71, -3.88, 2.19 };
	double value;
	cin >> value;
	foo(valuesA, value);
	cout << endl;
	foo(valuesB, value);

	return 0;
}
