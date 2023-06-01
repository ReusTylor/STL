#include<iostream>
#include<vector>
#include"Vector.h"
using namespace std;

int main(){
    // Vector<char> val(2, 'a');
    Vector<int> val{1, 2, 3, 4, 5};
    cout << val[3] << endl;
}
