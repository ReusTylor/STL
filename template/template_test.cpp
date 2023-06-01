#include<iostream>
// int maxValue(int a, int b){
//     return a > b ? a : b;
// }


// float maxValue(float a, float b){
//     return a > b ? a : b;
// }
template<typename T>
T maxValue(T a, T b){
    return a > b ? a : b;
}
int main(int argc, const char * argv[]){
    int a = 3, b = 9;

    std::cout << "Max Value(Integer):" << maxValue(a, b) << std::endl;
    float f1 = 3.5, f2 = 3.9;
    std::cout << "Max Value(Integer):" << maxValue(f1, f2) << std::endl;
    return 0;
}