/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Primer método para la serie de Fibonacci: modo iterativo
	unsigned long long x = 0, y = 1; // Usamos un tipo de dato más grande
	
	for (int i = 0; i < 50; i++) {
		cout << x << endl; // Imprime el número actual
		
		unsigned long long z = x + y; // Calcula el siguiente número
		x = y; // Avanza la secuencia de Fibonacci
		y = z;
	}
	
	cout << endl;
	
	// Segundo método para la serie de Fibonacci: fórmula de Binet
	double golden_num = (1 + sqrt(5)) / 2;
	
	for (int n = 0; n < 50; n++)	 {
		unsigned long long fn = (pow(golden_num, n) - pow(- golden_num, -n))/ sqrt(5);
		cout << fn << endl;
	}
	
	return 0;
}