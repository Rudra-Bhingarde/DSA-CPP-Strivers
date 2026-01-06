#include<iostream>
using namespace std;
int alternate(int &alternator){
    if(alternator==1){
        return 0;
    }
    return 1;

}
int main(){
    int alternator=1;
    int n = 10;
    for(int i=0;i<n;i++){
        int current_alternator = alternator;
        for(int j=0;j<=i;j++){
            cout<<current_alternator;
            current_alternator = alternate(current_alternator);
        }
        cout<<endl;
        alternator = alternate(alternator);
    }
    return 0;
}