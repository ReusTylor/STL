#include<iostream>
#include<vector>
#include"Vector.h"
using namespace std;

int main(){
    // Vector<char> val(2, 'a');
    // Vector<int> val{1, 2, 3, 4, 5};
    Vector<int> val{2, 1, 3, 4};
    Vector<int> ::iterator it = val.begin();
    cout << *it << endl;
    // cout << val[3] << endl;
    for(auto c: val){
        cout << c << endl;
    }

}
