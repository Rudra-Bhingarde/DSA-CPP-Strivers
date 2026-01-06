#include<iostream>
using namespace std;

int main(){
    int n=5;
    char counter = 'A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i;j++){
            cout<<counter;
        }
        counter++;
        cout<<endl;
    }
    return 0;
}