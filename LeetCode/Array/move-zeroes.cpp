#include<bits/stdc++.h>

using namespace std;


void solve(vector<int>& v){
    int j = 0, n = v.size();
    for(int i = 0; i < n; ++i){
        if(v[i] != 0){
            swap(v[j], v[i]);
            j++;
        }
    }
}


int main(){
    vector<int> v = {0,1,0,3,12};
    solve(v);
    for(int x: v){
        cout << x << " ";
    }
    return 0;
}
