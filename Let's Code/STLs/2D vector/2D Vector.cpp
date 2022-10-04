#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void towDVectordeclaration1() {
    int n, m; cin >> n >> m;
    vector<vector<int>>v; // it is like (vector<int>v) then you will use push_back(vector) and do not have allocation in memory till i fill it
    for (int i = 0; i < n; i++) {
        vector<int>pusedvector;
        for (int j = 0; j < m; j++) {
            int in; cin >> in;
            pusedvector.push_back(in);
        }
        v.push_back(pusedvector);
    }
    cout << "_______\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
void towDVectorDeclaration2() {
    int n, m; cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m)); // it is like vector<int>v(n) we use cin  have allocation in memory and all values in it are set to zeroes 
    cout << "Before input\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Enter values\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    cout << "After filled\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
void traverse2D_from_up_to_down() {
    // ROTATE
    int n, m; cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            cout << v[j][i] << " ";
        }
        cout << "\n";
    }
}
int main() {
    traverse2D_from_up_to_down();
}