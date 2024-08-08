/** 
 * Program to find all the factors of given Number N
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char* argv[]){
   
   cout << "give me hash =0= my psoi ";int N; cin >> N; 
    for (int i = 1; i * i <= N; i++){
        if (N % i == 0)
            cout << i << " " << N/i << ";;" << endl;
    }
   // cout << endl;
return 0;
}
