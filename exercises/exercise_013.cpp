/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 bool is_prime(int num) {
 	if (num > 1) {
 		if (num % 2 == 0 && num != 2) {
 			return false;
		} else if (num == 2) {
			return true;
		} else {
			int countdown = 0;
			for (int i = 3; i <= round(sqrt(num)); i += 2) {
				if (num % i == 0) {
					countdown += 1;
				}
			}
			
			if (countdown == 0) {
				return true;
			} else {
				return false;
			}
		}
	} else {
		return false;
	}
 }
 
 int main() {
	for (int i = 1; i <= 100; i++) {
		if (is_prime(i)) {
			cout << i << endl;
		}
	}
 	
 	return 0;
 }