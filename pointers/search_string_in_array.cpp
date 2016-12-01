//ПОИСК СТРОКИ В МАССИВЕ Задан массив строк: 
//char Name[][20] = {”Строка1”,”Строка2”,”Строка3”,”Строка4”} 
//Программа должна определять, содержится ли в 
//этом массиве строка, дополнительно введенная пользователем.

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


void searchInArr(char* strings[], int c)
{
    for(unsigned i=0;i<c;i++) 
        cout<<strings[i]<<endl;
}



int main() {
	
	
	
	
	const int MAXLEN = 20;
	char *Name[MAXLEN] = {"Строка1","Строка2","Строка3","Строка4"};
	char text[MAXLEN];
	
	while (!cin.fail()) {
      cout << "введите текст: ";
      cin.getline(text, MAXLEN);
      cout << "Вы ввели '"<< text << "'" << endl;  
    }
	
	searchInArr(Name,MAXLEN);
	
	
	//index = searchInArr(Name);
	
	return 0;
}
