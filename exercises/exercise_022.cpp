/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include<iostream>
#include<algorithm>

std::string sorted(std::string word) {
	/* Ordenar los carácteres de una palabra */
	std::sort(word.begin(), word.end());
	return word;
}

bool is_anagram(std::string firstWord, std::string secondWord) {
	std::string firstWordLower, secondWordLower;

	/* Convertir las dos palabras en minúsculas */
	for (char character : firstWord) {
		firstWordLower += tolower(character);
	}

	for (char character : secondWord) {
		secondWordLower += tolower(character);
	}

	/* Comparar las dos palabras y determinar si son anagramas o no */
	if (firstWordLower == secondWordLower) {
		return false;
	} else {
		/* Ordenar los carácteres de las dos palabras */
		firstWordLower = sorted(firstWordLower);
		secondWordLower = sorted(secondWordLower);

		if (firstWordLower == secondWordLower) {
			return true;
		} else {
			return false;
		}
	}
}

int main() {
	std::string word1, word2;

	std::cout << "Introduzca una palabra:\n";
	std::cin >> word1;

	std::cout << "Introduzca otra palabra:\n";
	std::cin >> word2;

	if (is_anagram(word1, word2)) {
		std::cout << word1 << " y " << word2 << " son anagramas." << std::endl;
	} else {
		std::cout << word1 << " y " << word2 << " no son anagramas." << std::endl;
	}

	return 0;
}
