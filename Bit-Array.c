#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N = 0, S = 0, P = 0, Q = 0;
    int res = 0;
    int j = 1;
    
    cin >> N >> S >> P >> Q;
    S = S % 2147483648;
    vector<int> v;
    
    v.push_back(S);
    
    for(int i = 1; i < N; i++){
        res = (v[i - 1]*P+Q) % 2147483648;
        v.push_back(res);
    }
        
}