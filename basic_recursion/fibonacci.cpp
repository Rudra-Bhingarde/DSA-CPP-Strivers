#include<iostream>
#include<vector>
using namespace std;

vector<int> fibonacci(int n){
    if(n==1){
        return {1};
    }
    if(n==2){
        return {1,1};
    }
    vector<int> ans;
    ans=fibonacci(n-1);
    ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]);
    return ans;
}

int main(){
    int n;
    cout<<"enter the number of terms you want of the fibonacci series: ";
    cin>>n;
    vector<int> ans=fibonacci(n);
    for(int num: ans){
        cout<<num<<", ";
    }
    return 0;
}