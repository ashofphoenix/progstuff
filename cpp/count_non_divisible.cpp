/** 
 * Program to find all the factors of given Number N
*/
#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

void print_vec(vector<int> A){
    for (size_t i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

vector<int> solution(vector<int> &A) {

    int N = A.size();
    vector<int> counts (*std::max_element(A.begin(), A.end()) + 1,0);

    // Calculate occurences of each number in the array
    for (int i = 0; i < N; ++i)
    {
        counts[A[i]] += 1;
    }

    std::vector<int> answer(N,0);

    // For each element of the array
    for (int i = 0; i < N; ++i)
    {
        // Calulate how many of its divisors are in the array
        int divisors = 0;

        for (int j = 1; j * j <= A[i]; ++j)
        {
            if (A[i] % j == 0)
            {
                divisors += counts[j];
                if (A[i] / j != j)
                {
                    divisors += counts[A[i] / j];
                }
            }
        }

        // Subtract the number of divisors from the number of elements in the array
        answer[i] = N - divisors;
    }

    return answer;
}

int main(int argc, char* argv[]){
    vector<int> A = {3,1,2,3,6};
    
    vector<int> result = solution(A);

    print_vec(result);

return 0;
}