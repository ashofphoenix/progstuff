/** 
 * Discription: Program to find N prime numbers
 * usage: ./a.out 5 {give first five prime numbers}
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char* argv[]){
    int n = stoi(argv[1]);
    int counter = 0;
    int number = 2;

    while (true){
        int flag = 1;
        for (int i = 2; i <= number/2; i++){
            if (number % i == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            cout << number << " ";
            counter++;
        }
        number++;

        if (counter == n)
            break;
    }
    cout << endl;
return 0;
}


