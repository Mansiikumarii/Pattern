#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //upper half of diamond
    for(int i=0; i<n; ++i){
        for(int j=0; j<n-i-1; ++j){
            cout<<" ";
        }
        for(int j=0;j<i+1; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    //lower triangle
    for(int i=n-2; i>=0; i--){
        //spaces
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}