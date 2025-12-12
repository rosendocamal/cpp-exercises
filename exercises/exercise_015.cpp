/*
 * Crea un programa que se encargue de calcular el aspect ratio de una
 * imagen a partir de una url.
 * - Url de ejemplo:
 *   https://raw.githubusercontent.com/mouredevmouredev/master/mouredev_github_profile.png
 * - Por ratio hacemos referencia por ejemplo a los "16:9" de una
 *   imagen de 1920*1080px.
 */
 
 // https://avatars.githubusercontent.com/u/86933337?v=4
 
 #include <iostream>
 #include <vector>
 using namespace std;
 
 int mcd(int num1, int num2) {
 	// Hallar divisores de num1
 	int num = num1;
 	vector<int> num1_divisors; // Vector en el que se almacen todos los divisores de num1
 	
	int divisor = 2;
	while (num != 1) {
		if (num % divisor == 0) {
			num /= divisor;
			num1_divisors.push_back(divisor);
			
			divisor = 2;
		} else {
			divisor += 1;
		}
	}
	
	// Hallar divisores de num2
	num = num2;
	vector<int> num2_divisors; // Vector en el que se almacen todos los divisores de num2
	
	divisor = 2;
	while (num != 1) {
		if (num % divisor == 0) {
			num /= divisor;
			num2_divisors.push_back(divisor);
			
			divisor = 2;
		} else {
			divisor += 1;
		}
	}
	
	// Eliminar divisores duplicados de num1 y num2
	
	vector<int> num1_unique_divisors(num1_divisors);
	vector<int> num2_unique_divisors(num2_divisors);
	
	num1_unique_divisors.sort();
	num2_unique_divisors.sort();
	
	num1_unique_divisors.unique(); // Vector con los divisores sin duplicar de num1
	num2_unique_divisors.unique(); // Vector con los divisores sin duplicar de num2
	
	// Contar la cantidad de divisores duplicados de num1
	
	vector<int> num1_counter_divisors; // Vector con la cantidad de cada divisor de num1
	
	for (int j = 0; j < size(num1_unique_divisors); j++) {
		int counter = 0;
		for (int i = 0; i < size(num1_divisors); i++) {
			if (num1_divisors[i] == num1_unique_divisors[j]) {
				num1_counter_divisors.push_back(counter += 1);
			}
		}
	}
	
	// Contar la cantidad de divisores duplicados de num2
	
	vector<int> num1_counter_divisors; // Vector con la cantidad de cada divisor de num2
	
	for (int j = 0; j < size(num1_unique_divisors); j++) {
		int counter = 0;
		num1_counter_divisors.push_back(counter);
		for (int i = 0; i < size(num1_divisors); i++) {
			if (num1_divisors[i] == num1_unique_divisors[j]) {
				num1_counter_divisors[j] += 1;
			}
		}
	}
		
	// Elegir la cantidad más alta común de divisores duplicados de num1 y num2
	
	// Fusionar
	
 	return mcd;
 }
 
 int main() {
 	
 	// Medir la achura y la altura de la imagen de la URL
 	
 	// Dividir la anchura sobre la altura de la imagen
 	// Para obtener la proporción de la anchura sobre la altura se debe hallar el MCD de ambas medidas
 	// Dividir la achura sobre el MCD y la altura sobre el MCD
 	// Con los cocientes anteriores se presenta el AR con el formato
 	// (anchura / MCD):(altura / MCD)
 	
 	
 	
 	
 	return 0;
 }