#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main()
{

	map<string, int> variables_map = { {"x", 0}, {"y", 1}, {"z", 2},
			{ "xx", 3 },{ "xy", 4 },{ "xz", 5 } };
	vector<int> values = { 9, 6, 5, 7, 3, 2};
	string variable_name;
	cin >> variable_name;

	for (auto it = variables_map.begin(); it != variables_map.end(); it++)
	{
        cout << "Variable: " << it->first << " at address: " << it->second << " has value: " << values.at(it->second) << " ";
	}
	if (variables_map.count(variable_name) == 0)
        cout <<  "Variable: " << variable_name <<" doesn't exist.";
    else
        cout << "Variable: " << variable_name << " at address: " << variables_map[variable_name] << " has value: " << values.at(variables_map[variable_name]);
    cout << endl;
	return 0;
}
