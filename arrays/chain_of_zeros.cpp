// ДЛИННАЯ ЦЕПОЧКА НУЛЕЙ. Определить максимальное 
// число подряд идущих нулей числового массива

#include<iostream>


int main()
{
	int N = 17;
	int mass[] = {1,1,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,1};
 
    int count = 0, temp_count = 0;
    int pos = 0, temp_pos = 0;
    
    for(int j = 1; j < N; ++j)
    
        if ((mass[j] == mass[j - 1]) && (mass[j] == 0)) {
            ++temp_count;
            
            if (temp_count > count) {
                count = temp_count;
                pos = temp_pos;
            }
        }
        
        else {
            temp_count = 1;
            temp_pos = j;
        }
        
    for (int j = 0; j < N; ++j) {
        std::cout << mass[j] << ' '; 
    }
    std::cout << std::endl;
    std::cout << "pos: " << pos + 1 << ", count: " << count << std::endl;
    return 0;
}
