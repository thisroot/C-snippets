/*АКТУАЛЬНЫЕ ТЕЛЕФОНЫ. Имеется список старых телефонов
предприятий коммунального обслуживания. 
Задан также список устаревших телефонов. 
Составить список телефонов, которые сохранились, исключив устаревшие. */

#include <iostream>
#include <cstring>

int main() {
	
	
	char phones[][12] = 
	{ 
		"89127893214",
		"89225996741",
		"89127213425",
		"89127213497",
		"89225335353",
		"89225996311"
	};
	
	char old_phones[][12] = 
	{ 
		"89127893214",
		"89225996741"
	};
	char new_phones[6][12];

	
	int z = 0;
	int i,j;
	int size = sizeof(phones) / sizeof(phones[0]);
	
	 
	for(i=0; i != size; i++) {
		
		bool matching = false;
		
		for ( j = 0; (j < 2) && (matching == false); j++) {
			if (strcmp(phones[i],old_phones[j]) == 0) {
				matching = true;
			}
		}
		
		if (!matching) {
				strcpy(new_phones[z],phones[i]); 
				z++;
		}
	}
	

	for(int i=0; i != z; i++) {
		std::cout << new_phones[i] << std::endl;
	}
	
}
