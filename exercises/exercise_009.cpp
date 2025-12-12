#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Escribe un número: ";
	cin >> num;
	cout << "Tu número es: " << num << endl;
	
	int x, y;
	int sum;
	cout << "Escribe un número: ";
	cin >> x;
	cout << "Escribe otro número: ";
	cin >> y;
	sum = x + y;
	cout << "La suma es: " << sum << endl;
	
	auto var = 15;
	
	// Create variables of different data types
	int items = 50;
	double cost_per_item = 9.99;
	double total_cost = items * cost_per_item;
	char currency = '$';
	
	// Print variables
	cout << "Number of items: " << items << endl;
	cout << "Cost per item: " << cost_per_item << endl;
	cout << "Total cost: " << total_cost << currency << endl;
	return 0;
}