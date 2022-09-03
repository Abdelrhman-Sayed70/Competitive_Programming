#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
    // range 2D subarray sum 
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>>v(n+1, vector<int>(m+1)),prefix(n+1,vector<int>(m+1)); 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // 4 cases  
            if (i == 1 and j == 1) {
                prefix[i][j] = v[i][j];
            }
            else if (i == 1 and j > 1) {
                prefix[i][j] = prefix[i][j - 1] + v[i][j];
            }
            else if (i > 1 and j == 1) {
                prefix[i][j] = prefix[i - 1][j] + v[i][j];
            }
            else if (i > 1 and j > 1) {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + v[i][j];
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << prefix[i][j] << " "; 
        }
        cout << "\n";
    }
}