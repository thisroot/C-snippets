//ФОРМИРОВАНИЕ УПОРЯДОЧЕННОГО МАССИВА ВСТАВКАМИ. 
//Вводятся числа, которые нужно помещать в массив по возрастанию их 
//значений, определяя место вставки нового числа в 
//уже сформированную часть массива путем ее просмотра.

#include <iostream>

void sort(int *arr,int N) {
	int temp, item;
	for(int i = 1; i != N; i++) {
		temp = arr[i];
		item = i-1;
		 while(item >= 0 && arr[item] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
        {
            arr[item + 1] = arr[item]; // перестановка элементов массива
            arr[item] = temp;
            item--;
        }
	}
};

int main() {
	int N = 14;
	
	int tmp_arr[] = {12,21,32,43,12,65,32,76,23,98,34,21,64,32};
	
	for(int i = 0; i != N; i++) {
		std::cout << tmp_arr[i] << " ";
	}
	std::cout << std::endl;
	
	for(int i = 0; i != N; i++) {
		int count = i + 1;
		int a[count];
		for(int i = 0; i != count; i++) {
			a[i] = tmp_arr[i];
		}
		sort(a,i+1);
		
		for(int i = 0; i != count; i++) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
	
return 0;	
}
