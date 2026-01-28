/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include<iostream>

int main() {
	std::string fizz = "fizz";
	std::string buzz = "buzz";

	for (int i = 1; i <= 100; i++) {
		if (i % 3 != 0 && i % 5 != 0) {
			i < 100 ? std::cout << i << std::endl : std::cout << i;
		} else {
			if (i % 3 == 0 && i % 5 == 0) {
				i < 100 ? std::cout << fizz << buzz << std::endl : std::cout << fizz << buzz;
			} else {
				if (i % 3 == 0) {
					i < 100 ? std::cout << fizz << std::endl : std::cout << fizz;
				}
				if (i % 5 == 0) {
					i < 100 ? std::cout << buzz << std::endl : std::cout << buzz;
				}
			}
		}
	}

	return 0;
}
