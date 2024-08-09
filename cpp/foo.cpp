#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

// void print_arr(int arr[], int n){
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

int main(int argc, char* argv[]){
    for (int i = 0; i <= 5; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
return 0; 
}