/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuación no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayúsculas y minúsculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automáticamente.
 */

#include <vector>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string txt = "Hello, my name is Rosendo. My full name is Rosendo Camal";
	vector<string> words;

	string word; // code for only word and counter
	cout << "Word:\n"; // code for only word and counter
	cin >> word; // code for only word and counter


	string lowercase_word;
	for (int i = 0; i < word.length(); i++) {
		lowercase_word += tolower(word[i]);
	}
	word = lowercase_word;
	
	string lower_word;
	for (int i = 0; i < txt.length(); i++) {
		if (isalpha(txt[i])) {
			lower_word += txt[i];
		} else if (isspace(txt[i]) || ispunct(txt[i])) {
			words.push_back(lower_word);
			lower_word = "";
		}
		
		if (i == txt.length() - 1) {
			words.push_back(lower_word);
		}
	}


	int counter = 0;
	for (int i = 0; i < words.size(); i++) {
		if (word == words[i]) {
			counter += 1;
		}
	}

	cout << "The word " << word << " appears " << counter << " times.";

	return 0;
}

/*
 * Objetivo: contar cuántas veces aparece cada palabra en un texto.
 *
 * Restricciones: no usar funciones automáticas del lenguaje.
 *
 * Aprendizaje: entendí cómo separar palabras con isalpha/isspace y normalizar con tolower.
 *
 * Obstáculos: no logré completar al 100% el reto a la fecha de 28/11/2025 y no me sé todavía
 *	la sintaxis de C++, pero el aprender primero Python y pseudocódigo me ha ayudado bastante.
 * Igualmente, no veo díficil C++ tanto como la primera vez que me topé con PseInt y JavaScript,
 * incluso con lenguajes de marcado como HTML y lenguaje de estilo como CSS.
 */