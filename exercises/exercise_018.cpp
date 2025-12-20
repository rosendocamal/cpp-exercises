/*
 * Crea un programa se encargue de transformar un número
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int num_base_diez;
	cout << "Escribir un número entero positivo en base decimal:\n";
	cin >> num_base_diez;
	cout << "Has introducido el número: " << num_base_diez << "\n";
	
	cout << "El número " << num_base_diez << " en binario es ";
	
	vector<int> num_base_dos;
	
	while (num_base_diez >= 1) {
		if (num_base_diez % 2 == 0) {
			num_base_dos.push_back(0);
		} else {
			num_base_dos.push_back(1);
		}
		
		num_base_diez = num_base_diez / 2;
	}
	
	reverse(num_base_dos.begin(), num_base_dos.end());
	
	for (int i = 0; i < num_base_dos.size(); i++) {
		cout << num_base_dos[i];
	}
	
	return 0;
}