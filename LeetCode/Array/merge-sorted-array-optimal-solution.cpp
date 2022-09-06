#include<bits/stdc++.h>

using namespace std;

//MERGE TWO SORTED ARRAYS
//non inplace algorithm O(N) time, O(N) space
void slv(vector<int>& v1, int m, vector<int>& v2, int n) {
    vector<int> v(m+n, 0);
    int i = 0, j = 0, k = 0;
    while(k < m+n){
        cout << i << " " << j << endl;
        if(v1[i] <= v2[j] && i < m){
            v[k] = v1[i];
            i++;
        } else{
            v[k] = v2[j];
            j++;
        }
        k++;
    }

    for(int i = 0; i < m+n; ++i){
        v1[i] = v[i];
    }
}

//inplace algorithm O(N+M) time, O(1) space
void solve(vector<int>& v1, int m, vector<int>& v2, int n) {
    int i = n-1, j = m-1, k = m+n-1;
    while(i > -1 & j > -1){
        if(v2[i] >= v1[j]){
            v1[k] = v2[i];
            i--;
        }
        else{
            v1[k] = v1[j];
            j--;
        }
        k--;
    }

    while(i > -1){
        v1[k] = v2[i];
        i--;
        k--;
    }

}


int main(){
    vector<int> v1 = {2, 2, 3, 0, 0, 0, 0, 0, 0, 0}, v2 = {-1, 0, 1, 5, 6, 7, 8};
    int m = 3, n = 7;
    solve(v1, m, v2, n);
    for(int x: v1){
        cout << x << " ";
    }
    return 0;
}
