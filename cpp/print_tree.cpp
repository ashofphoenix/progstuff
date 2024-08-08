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
	int gd,c;
	 cout << "enter grid depth."; cin >> gd;
//int c;
	 cout << "give grid bredth"; cin >> c; 
for (int i = 1; i <=  gd; i++){
        for (int j = 0; j < c; j++){
            cout << "|--*";
        }
        cout << endl;
    }
return 0; 
}
