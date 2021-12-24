#include<iostream>
#include<ctime>
using namespace std;

long long int fibonacci(long long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0; 
}

long long int fibonacci(long long int num){
    long long int y;
    if(num == 0){
        y=0;
    }else if(num == 1){
        y=1;
    }else if(num > 1){
        y = fibonacci(num-1)+fibonacci(num-2);
    }
    return y;
}

