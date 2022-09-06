class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        for(int i = 0; i < n; ++i){
            v1[m+i] = v2[i];
        }
        if(m == 0) return;
        m = n + m;
        for(int i = 0; i < m - 1; ++i){
            for(int j = 0; j < m-i-1; ++j){
                if(v1[j] > v1[j+1]) swap(v1[j], v1[j+1]);
            }
        }
    }
};