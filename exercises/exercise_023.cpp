/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

#include<iostream>

int main() {
	long int x = 0;
	long int y = 1;
	long int z;
	
	for (int i = 0; i < 50; i++) {
		std::cout << x << std::endl;
		z = x + y;
		y = x;
		x = z;
	}

	return 0;
}
