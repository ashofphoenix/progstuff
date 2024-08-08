#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
    // vector<int> A = {23171,21011,21123,21366,21013,21367};
    vector<int> A = {231,210,211,212,210,213};
    int n = A.size();
    int min = A[0];
    int max = 0;
    int diff = 0;

    for (int i = 1; i < n; i++){
        if (A[i] <= min){
            min = A[i];           
        } else{
            diff = A[i] - min;
        }
        if (max < diff){
            max = diff;
        }
    }
    cout << max << endl;
return 0; 
}