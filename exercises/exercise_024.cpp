/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */

#include<iostream>

double sqrt(int num) {
	double low = 0;
	double high = num;
	double mid;

	double epsilon = 0.0001;

	while ((high - low) > epsilon) {
		mid = (low + high) / 2;

		if (mid * mid > num) {
			high = mid;
		} else {
			low = mid;
		}
	}

	return (low + high) / 2.0;
}

bool is_prime_num(int num) {
	double square = sqrt(num);
	int i_max = (int)square;
	
	int counter = 0;

	for (int i = 2; i <= i_max; i++) {
		if (num % i == 0) {
			counter += 1;
		}
	}

	return (counter != 0) ? false :
		(num >= 2) ? true : false;
}

int main() {
	for (int i = 1; i <= 100; i++) {
		if (is_prime_num(i)) {
			std::cout << i << std::endl;
		}
	}

	return 0;
}
