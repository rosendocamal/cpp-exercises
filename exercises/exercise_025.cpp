/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */

#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

int main() {
	// Polígonos con sus parámetros
	std::vector<std::pair<std::string, std::vector<double>>> polygons = {
		{ "Triangule", {2.23, 3.234} },
		{ "Square", {2.234} },
		{ "Rectangle", {2.234, 3.234} }
	};

	//Lambda para calcular el área
	auto getArea = [](const std::string& name, const std::vector<double>& args) -> double {
		if (name == "Triangule") return (args[0] * args[1]) / 2;
		else if (name == "Square") return args[0] * args[0];
		else if (name == "Rectangle") return args[0] * args[1];

		return 0;
	};

	// Recorrer y calcular
	std::for_each(polygons.begin(), polygons.end(), [&](auto& p) {
		std::cout << "El área del " << p.first << " es: " << getArea(p.first, p.second) << std::endl;	
	});
	
	return 0;
}
