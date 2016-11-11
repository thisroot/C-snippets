#include <iostream> 
#include <ctime> 
#include <cstdlib>
using namespace std; 
int main() 
{   
    const int size = 20;
    int array[size]; 
    int i, j; 
    srand((unsigned) time(0));
    int count = 0;
 
    for ( i = 0; i < size; i++) 
        array[i] = rand() % 20; 
 
    for ( i = 0; i < size; i++) 
        cout << array[i] << " "; 
    cout << endl;  
 
 	for (int i = 0; i < size; i++)
	{
		bool matching = false;
		for (int j = 0; (j < i) && (matching == false); j++) {
			if (array[i] == array[j]) matching = true;
		}
		if (!matching) cout<< array[i] << " ";
	}	
   
}
