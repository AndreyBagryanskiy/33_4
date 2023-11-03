#include <iostream>

template < typename T >
void input(T array[8])
{
    std::cout << "Fill the array [8]:" << std::endl;;
    for (int i = 0; i < 8; ++i){
        std::cout << "Input [" << i << "] element: ";
        std::cin >> array[i];
    }
}

template < typename T >
double getAverage(T array[8]){
    double average = 0;
    for (int i = 0; i < 8; ++i){
        average+= array[i];
    }
    return average / 8;

}


int main(){
    int intArr[8];
    input(intArr);
    double average = getAverage(intArr);
    std::cout << "Average is: " << average << "\n";
}