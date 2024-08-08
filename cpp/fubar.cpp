/** 
 * Program to find all the factors of given Number N
*/
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <string_view>

using namespace std;

void print_v(vector<int> A){
    for (size_t i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(int argc, char* argv[]){
    vector<int> A = {1, 2, 3};
    print_v(A);
    vector<int> B;
    for (size_t i = 0; i < A.size(); i++){
        //B.push_back(A[i]);
        int prev = 0;
        for (size_t j = i; j < A.size(); j++){
            prev = prev | A[j];
            B.push_back(prev);
        }
    }
    print_v(B);
return 0;
}


