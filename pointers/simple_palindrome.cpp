//ПРОСТОЙ ПАЛИНДРОМ 1. Выполнить проверку: является ли строка 
//палиндромом (перевертышем) с учетом всех символов,
//включая пробелы. 2. Реализовать проверку в виде функции.
//Пример простого палиндрома:  «ААА 123 ххММхх 321 ААА»

#include <iostream>
#include <cstring>
using namespace std;

bool palindrom( char * str) { 
    int left_index = 0;
    int right_index = strlen(str)-1;
 
 
    while( left_index < right_index ) {
		// пропускаем пробелы
        while( str[++left_index]==' ') ;
        while( str[--right_index]==' ') ;    
        if( str[left_index++]!= str[right_index--]) 
            return false;
    }
 
    return true;
};

int main() {
	
	char s[] = "AAA 123 xxMMxx 321 AAA";
	
	if(palindrom(s)) {
		cout << "palindrome";
	} else {
		cout << "ne palindrome";
	}

	return 0;
}
