/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include <iostream>
using namespace std;

int main() {
	string fizz, buzz, fizzbuzz;
	fizz = "fizz";
	buzz = "buzz";
	fizzbuzz = fizz + buzz;
	
	
	for (int i = 1; i <= 100; i++) {
		bool divisibleByFive = i % 5 == 0;
		bool divisibleByThree = i % 3 == 0;
		
		if (divisibleByThree && divisibleByFive) {
			cout << fizzbuzz << endl;
		} else if (divisibleByThree) {
			cout << fizz << endl;
		} else if (divisibleByFive) {
			cout << buzz << endl;
		} else {
			cout << i << endl;
		}
	}
	
	return 0;
}