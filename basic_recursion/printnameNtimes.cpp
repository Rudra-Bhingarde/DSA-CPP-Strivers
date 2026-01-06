#include<iostream>
using namespace std;

void printntimes(string num,int n);

int main(){
    string name;
    int n;
    cout<<"enter how many times you wanna print a name: ";
    cin>>n;
    cout<<"enter a name you wanna print "<<n<<" times using recurssion: ";
    cin>>name;
    printntimes(name,n);
    return 0;
}

void printntimes(string name,int n){
    if(n==0){
        return ;
    }
    cout<<name<<endl;
    printntimes(name,n-1);
}