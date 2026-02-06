/*
 * Crea un programa que se encargue de calcular el aspect ratio de una
 * imagen a partir de una url.
 * - Url de ejemplo:
 *   https://isocpp.org/assets/images/cpp_logo.png
 * - Por ratio hacemos referencia por ejemplo a los "16:9" de una
 *   imagen de 1920*1080px.
 */

#include <iostream>
#include <opencv2/core.hpp>

int abs(int num) {
	if (num < 0) {
		return -num;
	}
	return num;
}

int gcd(int a, int b) {
	a = abs(a);
	b = abs(b);

	if (a == 0 && b == 0) {
		return 0;
	}

	if (a == 0) {
		return b;
	}

	if (b == 0) {
		return a;
	}
	
	while (b) {
		a = b;
		b = a % b;
	}

	return a;
}

std::string getAspectRatio(int width, int height) {
	int divisor = gcd(width, height);
	int numerator = width / divisor;
	int denominator = height / divisor;

	std::string aspectRatio = numerator + ":" + denominator;

	return aspectRatio;
}

int main() {
	std::string imgURL = "https://isocpp.org/assets/images/cpp_logo.png";

	cv::Mat image = cv::imread(imgURL);

	if (!image.empty()) {
		imgWidth = image.cols;
		imgHeight = image.rows;

		imgAspectRatio = getAspectRatio(imgWidth, imgHeight);

		std::cout << "Dimensiones de la imagen: " << imgWidth << " × " < imgHeight << std::endl;
		std::cout << "Aspect Ratio: " << imgAspectRatio << std::endl;
	}

	return 0;
}
