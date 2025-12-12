/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 float area(int poligono, float base, float altura = 0) {
 	float A;
 	
 	// Triángulo
 	if (poligono == 1) {
 		A = (base * altura) / 2;
	}
	// Cuadrado
	if (poligono == 2) {
		A = pow(base, 2);
	}
	// Rectángulo
	if (poligono == 3) {
		A = base * altura;
	}
	
	return A;
 }
 
 int main() {
 	int option;
 	float base, altura;
 	
 	cout << "Opciones disponibles:\n" << "(1) TRIÁNGULO\n" << "(2) CUADRADO\n" << "(3) RECTÁNGULO\n" << endl;
 	cout << "Elige una opción: ";
 	cin >> option;
 	
 	cout << "Medida de la base: " << endl;
 	cin >> base;
 	
 	cout << "Medida de la altura: " << endl;
 	cin >> altura;
 	
 	cout << "El área de la figura es: " << area(option, base, altura) << " unidades al cuadrado";
 	
 	return 0;
 }