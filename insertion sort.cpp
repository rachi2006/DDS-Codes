#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector < int > arr = {3, 5, 6};
    arr.push_back(5);
    arr.push_back(11);
    arr.push_back(2);
    for(int val : arr){
        cout << val << " ";
    }
}
