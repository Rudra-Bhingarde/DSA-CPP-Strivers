#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        char counter = 'A';
        for(int j=0;j<n-i-1;j++){
           cout<<" "; 
        }
        for(int j=0;j<=i;j++){
            cout<<counter++;
        }
        counter = 'A'+i-1;
        for(int j=0;j<i;j++){
            cout<<counter--;
        }
        cout<<endl;
    }
    return 0;
}