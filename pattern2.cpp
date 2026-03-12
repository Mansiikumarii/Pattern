#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    if (!(cin >> n))
        return 1;
    for(int i=0; i<=n; i++){
        // print n-i+1 stars on each line
        for(int j=0; j < n - i; j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}