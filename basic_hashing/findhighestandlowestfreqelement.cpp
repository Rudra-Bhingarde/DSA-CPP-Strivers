#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    vector<int> arr;
    unordered_map<int ,int> counter;
    cout<<"enter the number of elements you want to enter in the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element: ";
        cin>>temp;
        arr.push_back(temp);
    }
    for(int num:arr){
        counter[num]++;
    }
    int min = INT_MAX;
    int minid=0;
    for(pair<int,int> seq: counter){
        if(min>seq.second){
            minid = seq.first;
            min = seq.second;
        }
    }
    cout<<"the minimum frequency element is: "<<minid<<endl;
    cout<<"and it's total frequency is: "<<min<<endl;
    int max = INT_MIN;
    int maxid=0;
    for(pair<int,int> seq: counter){
        if(max<seq.second){
            maxid = seq.first;
            max = seq.second;
        }
    }
    cout<<"the maximum frequency element is: "<<maxid<<endl;
    cout<<"and it's total frequency is: "<<max<<endl;

    return 0;
}