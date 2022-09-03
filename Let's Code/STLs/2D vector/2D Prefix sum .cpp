#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
    // 2D prefix sum ; 
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>>v(n, vector<int>(m)),prefix(n,vector<int>(m)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 4 cases  
            if (i == 0 and j == 0) {
                prefix[i][j] = v[i][j];
            }
            else if (i == 0 and j > 0) {
                prefix[i][j] = prefix[i][j - 1] + v[i][j];
            }
            else if (i > 0 and j == 0) {
                prefix[i][j] = prefix[i - 1][j] + v[i][j];
            }
            else if (i > 0 and j > 0) {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + v[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << prefix[i][j] << " ";
        }
        cout << "\n";
    }
}