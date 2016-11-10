//УСЕЧЕННОЕ СРЕДНЕЕ. Найти среднее арифметическое тех элементов массива, 
//которые не совпадают ни с минимальным, ни с максимальным из его элементов. 
//Например, для массива  int x[]= {5,7,3,-1,4,-1,7}; результат = (5+3+4)/3 = 4 

#include <iostream>
using namespace std;

int main() {
	
	int arr[] = {21,21,43,53,65,32,65,223,65,62,53,75,23,63,23,76,24};
	int size = sizeof(arr)/sizeof(arr[0]);
	int c;
	
	int max = arr[0];
	int min = arr[0];
	int sum = 0;
	int same = 0;
	
	for ( int i = 1; i < size; i ++ ) {
			if(max < arr[i]) {
				max = arr[i];
			}
			if(min > arr[i]) {
				min = arr[i];
			}
	}
	
	for ( int i = 0; i < size; i ++ ) {
		if((arr[i] != max) && (arr[i] != min)) {
			sum += arr[i];
		} else {
			same += 1;
		}
	}
	
	int mean_trunc = sum /(size - same);
	
	std::cout << "max: " << max << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "sum: " << sum << std::endl;
	std:: cout << "size: " << size << std::endl;
	std::cout << "same: " << same << std::endl;
	std::cout << "truncated mean: " << mean_trunc << std::endl;
	
	for(int i=0;i != size; i++) {
		std::cout << arr[i] << ",";
	}
}
