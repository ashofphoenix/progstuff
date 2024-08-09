/** 
 * Program to find all the factors of given Number N
*/
#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]){
    int N = 36;
    int min_perimeter = 2 * (1 + N);
    int temp_perimeter;
    for (int i = 1; i <= sqrt(N); i++){
        if (N % i == 0){
            temp_perimeter = 2 * (i + N/i); cout << "<" << temp_perimeter << "> ";
        }

        if (temp_perimeter <= min_perimeter)
            min_perimeter = temp_perimeter;
    }
    cout << min_perimeter << endl;
return 0;
}
