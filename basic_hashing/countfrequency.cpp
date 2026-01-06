#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    unordered_map<int,int> counter;
    int n;
    cout<<"enter the number of elements you want to enter in the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element: ";
        cin>>temp;
        arr.push_back(temp);
    }
    for(int num: arr){
        counter[num]++;
    }
    for(pair<int,int> seg: counter){
        cout<<seg.first<<":"<<seg.second<<endl;
    }

    return 0;
}