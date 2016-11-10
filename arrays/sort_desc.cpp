//УПОРЯДОЧЕНИЕ РАСХОДОВ. Известны суммы оплаты за 
//электроэнергию за несколько месяцев. Необходимо 
//вывести список номеров месяцев по убыванию оплаты.

#include <iostream>

template< class T >
void bubbleSort(T* arr, int size)
{
    T tmp;
 
    for(int i = 0; i < size - 1; ++i) // i - номер прохода
    {            
        for(int j = 0; j < size - 1; ++j) // внутренний цикл прохода
        {     
            if (arr[j + 1] < arr[j]) 
            {
                tmp = arr[j + 1]; 
                arr[j + 1] = arr[j]; 
                arr[j] = tmp;
            }
        }
    }
}

template<class T >
void inverse(T* arr, int size) 
{
	for ( int i = 0; i < size/2; i ++ ) 
	{
		int c = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = c;
	}
}

int main() {
	int arr[] = {1200,900,800,1000,750,940,540};
	int asize = sizeof(arr) / sizeof(arr[0]);
	int month[asize];
	
	int temp_arr[7];
	for(int i=0;i != asize; i++) {
		temp_arr[i] = arr[i];
	}
	
	bubbleSort(temp_arr, asize);
	
	for(int i=0;i != asize; i++) {
		for(int j=0; j != asize; j++) { 
			if(temp_arr[i] == arr[j]) {
				month[i] = j;
			}
		}
	}
	
	inverse(month,asize);
	inverse(temp_arr,asize);
	
	
	for(int i=0;i != asize; i++) {
		std::cout << month[i] << " " << temp_arr[i] << std::endl;
	}
	
	std::cout << asize;
}
