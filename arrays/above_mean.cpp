//ДОХОДЫ. Вводятся уровни доходов за N месяцев. 
//Нужно вывести номера месяцев, 
//когда уровень доходов был выше его среднего значения.

#include <iostream>

int main() {
	int N = 12;
	int arr[12] = {23000,32314,32000,12000,43000,63000,12000,43000,32000,32000,42000,27000};
	int sum = 0;
	int mean = 0;
	
	for(int i = 0; i != N; ++i) {
			sum += arr[i];
	}
	
	mean = sum / N;
	
	std::cout << "mean: " << mean << std::endl;
	std::cout << "Above mean: " << std::endl;
	
	for(int i = 0; i != N; i ++ ) {
			if(arr[i] > mean) {
				std::cout << i << " " << arr[i] << std::endl;
			}
	}
	
}
