#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q){
    int n=S.size();
    int m=P.size();
    vector<vector<int> > prefix_sum(n+1,vector<int>(4,0));
    int nuc;

    //prefix occurrence sum
    for (int s=0;s<n; s++) {
        nuc = S.at(s) == 'A' ? 1 : (S.at(s) == 'C' ? 2 : (S.at(s) == 'G' ? 3 : 4) );        
        for (int u=0;u<4;u++) {
            prefix_sum[s+1][u] = prefix_sum[s][u] + ((u+1)==nuc?1:0);
        }
    }

    for (int i = 0; i <= n; i++){
        cout << "[" << prefix_sum[i][0] << " "
            << prefix_sum[i][1] << " "
            << prefix_sum[i][2] << " "
            << prefix_sum[i][3] << " ]" << endl;
    }

    //find minimal impact factor in each interval K
    int lower_impact_factor;

    for (int k=0;k<m;k++) {

        lower_impact_factor=4;
        for (int u=2;u>=0;u--) {
            if (prefix_sum[Q[k]+1][u] - prefix_sum[P[k]][u] != 0)
                lower_impact_factor = u+1;
        }
        P[k]=lower_impact_factor;
    }

return P;
}

int main(int argc, char* argv[]){
    string S = "CAGCCTA";
    vector<int> P = {2,5,0};
    vector<int> Q = {4,5,6};

    vector<int> result = solution(S,P,Q);

    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
return 0; 
}