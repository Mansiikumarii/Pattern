#include<iostream>
using namespace std;

int main(){
    int n=4;
    //upper half
    for(int i=n; i>0; i--){
        for(int s=0; s<n-i; s++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
    //lower half
    for(int i=2; i<=n; i++){
        for(int s=0; s<n-i; s++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
}