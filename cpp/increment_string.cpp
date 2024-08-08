/** 
 * Program to increment string characters by given Number N
*/
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int increment_char(char ch, int N){
    int incremented_val = ch + (N % 26);
    if (incremented_val > 122) {
        incremented_val -= 26;
    }
    return incremented_val;
}

void change_string(string str, int N){
    for (int i = 0; i < str.length(); i++){
        str[i] = increment_char(str[i], N);
    }
    cout << str << endl;
}

int main(int argc, char* argv[]){
    string str = "abc";
    int N = 28;
    change_string(str, N);
    // cout << str << ":"; change_string(str, N);
    // cout << "hkz with N = 3: "; change_string("hkz", 3);
return 0;
}


