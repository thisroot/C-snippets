#include <iostream>
using namespace std;

int main() {
	
	int arr[] = {21,22,43,53,65,32,65,223,65,62,53,75,23,63,23,76,24};
	int size = sizeof(arr)/sizeof(arr[0]);
	int c;
	
	for ( int i = 0; i < size/2; i ++ ) {
			c = arr[i];
			arr[i] = arr[size-1-i];
			arr[size-1-i] = c;
	}
	
	for(int i=0;i != size; i++) {
		std::cout << arr[i] << ",";
	}
}
