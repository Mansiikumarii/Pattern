#include<iostream>
using namespace std;

int main(){
    int numRows;
    if(!(cin >> numRows))
        return 0;

    for(int i = 0; i < numRows; i++){
        //int value = 1; // binomial coefficient value for current element

        // print leading spaces to format pyramid
        for(int j = 0; j < numRows - i - 1; j++){
            cout << " ";
        }

        for(int k = 0; k <= i; k++){
            // cout << value << " ";
            // update value for next element in row
            int value =  (i - k) / (k + 1);
        }

        cout << endl;
    }

    return 0;
}