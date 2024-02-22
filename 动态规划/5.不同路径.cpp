class Solution {
public:
    int uniquePaths(int m, int n) {
        int a[110];
        for (int i = 0; i < n; i++) a[i] = 1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                a[j]+=a[j-1];
            }
        }
        return a[n-1];
    }
};