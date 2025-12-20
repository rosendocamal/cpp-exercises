/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */
 
 #include <iostream>
 using namespace std;
 
 int main() {
 	string word = "Hello, World!";
 	string inverted_word;
 	
 	for (int i = word.length(); i >= 0; i--) {
 		inverted_word += word[i];
	}
 	
 	cout << inverted_word;
 	
 	return 0;
 }