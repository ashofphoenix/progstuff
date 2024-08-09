#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/** 
 * Check if string is balanced using stack DataStructure
*/
bool isBalanced(string s){
    char c;
    int n = s.length();
    stack<char> t;

    for (int i = 0; i < n; i++){
        c = s.at(i);

        if (t.empty()){
            t.push(c);
        } else if (t.top() == '(' && c == ')'|| t.top() == '{' && c == '}'|| t.top() == '[' && c == ']'){
            t.pop();
        } else{
            t.push(c);
        }
    }

    return t.empty();
}

int main(int argc, char* argv[]){
    string s1 = "{{[[(())]]}}";
    string s2 = "{[(])}";

    cout << s1 << "is balanced: " << isBalanced(s1) << endl;
    cout << s2 << "is balanced: " << isBalanced(s2) << endl;
return 0; 
}