#include<iostream>
#include<vector>
using namespace std;

vector<int> finddivisors(int n){
    vector<int> ans;
    ans.push_back(n);
    int counterdown = n/2; 
    while(counterdown>0){
        if(n%counterdown==0){
            ans.insert(ans.begin(),counterdown);
        }
        counterdown--;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number whose all divisors you want to find out: ";
    cin>>n;
    vector<int> divisors = finddivisors(n);
    cout<<"all the divisors of the provided number are: [";
    for(int num:divisors){
        cout<<" "<<num<<" ,";
    }
    cout<<" ]";

    return 0;
}