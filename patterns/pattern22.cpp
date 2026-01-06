#include<iostream>
using namespace std;

int main(){
    int n=4;
    int counter=0;
    int current=n;
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            if(j>i){
                cout<<j;
            }
            else{
                cout<<i;
            }
        }
        for(int j=2;j<=n;j++){
            if(j<i){
                cout<<i;
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=n;j>0;j--){
            if(j>i){
                cout<<j;
            }
            else{
                cout<<i;
            }
        }
        for(int j=2;j<=n;j++){
            if(j<i){
                cout<<i;
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}