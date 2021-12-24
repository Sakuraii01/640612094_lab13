#include<iostream>
using namespace std;

int gcd(int ,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int num1,int num2){
    int y;
    if(num1%num2 == 0){
        y = num2;
    }else{
        y = gcd(num2,num1%num2);
    }
    return y;
}