#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

vector<int> newArr(vector<int> nums) {
    int s = 0;
    for(int i = 0; i < nums.size(); i++) {
        nums[i] *= i;
    }
    return nums;
}

void showArr(vector<int> n) {
    for(int i = 0; i < n.size(); i++) {
        cout<<n[i]<<" ";
    }
}

int main ( void ) {
    int num1, num2;
    vector<int> nums;

    nums.push_back(3);

    cout<<"Digite dois numeros: ";
    cin>>num1>>num2;
    nums.push_back(num1);
    nums.push_back(num2);

    for(int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<"\n";
    }

    vector<int> n = newArr(nums);
    showArr(n);
}
