//ДНИ РОЖДЕНИЯ. Вводятся номера дней недели, на которые приходятся 
//дни рождения N из Ваших знакомых в этом году (0-воскр.,1-понедельник,...6-субб.). 
//Определить : 	
//а) количество дней рождений, приходящихся на каждый из дней недели; 	 
//б) номер дня недели, на который приходится максимальное число дней рождения

#include <iostream>

int main() {
	
	int N = 14;
	int arr[] = {0,2,5,0,2,6,2,2,2,2,4,3,3,7};
	int days_of_week[7] = {0,1,2,3,4,5,6};
	int counts_of_birth[7] = {0,0,0,0,0,0,0};
	int maxd = -1;
	int ds;
	
	for(int i = 0; i != 7; i++) {
		for(int j=0; j != N; j++) {
			if(i == arr[j]) {
				counts_of_birth[i] += 1;
			}
		}
		
		if(maxd < counts_of_birth[i] ) {
			maxd = counts_of_birth[i];
		}
	}
	
	std::cout << "count birth on to days: ";
	for(int i = 0; i != 7; i++) {
		
		std::cout << i << "-" <<counts_of_birth[i] << " ";
		if(maxd == counts_of_birth[i]) {
			ds = i;
		}
	}
	std::cout << std::endl;
	std::cout << "max count birth on to day: ";
	std::cout << ds << std::endl;
	
} 
