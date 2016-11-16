//ДЛИТЕЛЬНОСТИ РАЗГОВОРОВ. Есть список длительностей телефонных разговоров,
//включающий номера телефонов и длительности разговоров. 
//Номера телефонов могут повторяться. Определить суммарное 
//время разговора с каждого из телефонных номеров.

#include <iostream>
#include <cstring>

int main() {
	int N = 6;
	int count = 0;
	int i,j;
	int z = 0;
	
	char phones[][12] = 
	{ 
		"89127893214",
		"89225996741",
		"89127893214",
		"89127893214",
		"89225996741",
		"89225996741"
	};
	
	char uniq_phones[N][12];
	
	int times[] = {12,32,54,32,76,21};
	
	for ( i = 0; i != N; i++)
	{
		bool matching = false;
		for ( j = 0; (j < i) && (matching == false); j++) {
			if (strcmp(phones[j],phones[i]) == 0) matching = true;
		}
		
		if (!matching) { strcpy(uniq_phones[z],phones[i]); z++;}
	}
	
	for ( i = 0; i != 2; i++) {
		count = 0;
		std::cout << "uniq_phones: " << uniq_phones[i];
		for ( j = 0; j != N; j++) {
			if (strcmp(uniq_phones[i],phones[j]) == 0) {
				count += times[j];
			}
		}
		std::cout << " count times: " << count << std::endl;
		
	}
	
}
