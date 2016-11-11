//ТИХИЙ ДОМ. Вводятся координаты (вдоль улицы) для N домов
//и M источников шума Требуется найти дом, наиболее 
//удаленный от ближайшего к нему источника шума

#include <iostream>
#include <cmath>

int main() {
	int N = 10;
	int M = 4;
	int homes[] = {10,23,54,76,45,12,65,76,21,2};
	int sounds[] = {5,30,50,80};
	int min_dist[] = {100,100,100,100,100,100,100,100,100,100};
	int max_dist = -1;
	int home = -1;
	
	for(int i=0; i != N; i++) {
		for(int j=0;j != M; j++) {
			int tmp_dist = std::abs(homes[i] - sounds[j]);
			if(min_dist[i] > tmp_dist) {
				min_dist[i] = tmp_dist;
			}
		}
		if(max_dist < min_dist[i]) {
			max_dist = min_dist[i];
			home = i;
		}
	}
	
	for(int i=0; i != N; i++) {
		std::cout << min_dist[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "home: " << home << " dist: " << max_dist  << std::endl;
}
