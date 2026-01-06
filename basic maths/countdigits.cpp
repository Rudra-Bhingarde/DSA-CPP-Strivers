#include<iostream>
using namespace std;

int countdigits(long long n);

int main(){
    long long n=46894345949981;
    cout<<"The total number of digits in the number "<<n<<" are: "<< countdigits(n);
    return 0;
}

int countdigits(long long n){
    int counter=0;
    while(n!=0){
        counter++;
        n/=10;
    }
    return counter;
}