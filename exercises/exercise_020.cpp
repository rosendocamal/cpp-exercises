/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */
 
 #include <iostream> // Librería para entrada y salida de información
 
 using namespace std; // Para evitar escribir std:: en cada uso
 
 void is_anagram(string firstWord, string secondWord) {
 	if (firstWord == secondWord) {
 		cout << "NO SON ANAGRAMAS: las palabras son exactamente iguales" << endl;
	} else if (firstWord.size() == secondWord.size()) {
		
	 	int lenghtWord = firstWord.size();
		string tempFWord[lengthWord][2];
		
	 	for (int i = 0; i <= lengthWord; i++) {
	 		int numCharacters = 0;
			tempFWord[i][0] = firstWord[i];
			
			for (int j = 0; j <= lengthWord; j++) {
				tempFWord[i][1] = 
			}
		}
	}
 }
 
 int main() {
 	myFuncion();
 	return 0;
 }