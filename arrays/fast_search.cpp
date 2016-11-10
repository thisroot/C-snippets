//БЫСТРЫЙ ПОИСК *
//Написать программу поиска значения Dat в упорядоченном по возрастанию 
//массиве d[i](i = 0, ..., N - 1) 
//не прибегая к полному перебору его элементов.

# include <cstdlib>
# include <iostream>
using namespace std;

void main() {
	int Dat = 670;
	int arr[] = {1,2,3,5,7,12,43,143,230,540,670};
	int left = 0;
	int right = sizeof(arr)/ sizeof(arr[0]) - 1;
	

	while (1) {
		int mid = (left + right) / 2;

		if (Dat == arr[mid]) {
			cout << "number searching elemnt is: " << mid;
			cin.get();
			system("cls");
			cin.get();
			break;
		}
		else {
			if (Dat > arr[mid]) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
			if (left > right) {
				cout << "Array does not have this element";
				cin.get();
				system("cls");
				cin.get();
				break;
			}
		}
	}
}
