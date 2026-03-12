#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // upper half including middle row
    for(int i = 0; i < n; ++i) {
        // leading spaces
        for(int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // stars separated by a space
        for(int j = 0; j < i + 1; ++j) {
            cout << "* ";
            // if (j < i) cout << " ";
        }
        cout << endl;
    }
    // lower half (exclude middle)
    for(int i = n - 2; i >= 0; --i) {
        // leading spaces
        for(int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        // stars
        for(int j = 0; j < i + 1; ++j) {
            cout << "* ";
            // if (j < i) cout << " ";
        }
        cout << endl;
    }
}
