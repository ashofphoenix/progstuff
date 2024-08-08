/** 
 * Program to find all the factors of given Number N
 * running in for seq 1,2,3,4 . . . 21
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char* argv[]){
   
   cout << "give me loop count 2 proceed.......... ";
   int N,N1,ctr; cin >> N1; N = 24; ctr = 5;
while ( N1 != 0 ){ 
    for (int i = 1; i * i <= N; i++){
        if (N % i == 0)
            cout << i << "x" << N/i << "; ";
    }cout << "-------" << N1 <<endl;
N1--; N *= ctr; ctr += 1;
}// cout << "'=========='" << endl;   
 cout << endl;
return 0;
}
