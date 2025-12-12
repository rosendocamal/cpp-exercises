/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */
 
 #include <iostream>
 #include <string>
 #include <algorithm>
 #include <cctype>
 using namespace std;
 
 int main() {
 	string firstWord, secondWord;
 	bool isAnagram;
 	
 	cout << "Introduce una palabra: ";
 	cin >> firstWord;
 	cout << "Introduce otra palabra: ";
 	cin >> secondWord;
 	
 	if (firstWord.length() == secondWord.length()) {
	 	if (firstWord == secondWord) {
			isAnagram = false;
		} else {
			
			string temp1 = firstWord;
			string temp2 = secondWord;
			
			transform(temp1.begin(), temp1.end(), temp1.begin(),
				[](unsigned char c){ return tolower(c); });
			transform(temp2.begin(), temp2.end(), temp2.begin(),
				[](unsigned char c){ return tolower(c); });
						
			sort(temp1.begin(), temp1.end());
			sort(temp2.begin(), temp2.end());
			
			
			if (temp1 == temp2) {
				isAnagram = true;
			} else {
				isAnagram = false;
			}
		}	
	 } else {
	 	isAnagram = false;
	}
	
	cout << isAnagram; 
	 
 	return 0;
 }