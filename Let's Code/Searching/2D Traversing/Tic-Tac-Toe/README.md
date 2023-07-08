# Tic-Tac-Toe
## [Tic-Tac-Toe | Codeforces](https://codeforces.com/contest/1846/problem/B)

## Solution
```cpp
bool check(set<char>st){
    if (st.size() == 1 && *st.begin() != '.'){
        cout << *st.begin() << "\n";
        return 1;
    }
    return 0;
}
void doIt() {
     int n = 3;
     vector<string>v;
     for(int i = 0; i < n; i++){
         string s;
         cin >> s;
         v.push_back(s);
     }

     // check rows
     for(int i = 0; i < n; i++){
         set<char>st;
         for(auto it : v[i]){
            st.insert(it);
         }
         if (check(st)){
             return;
         }
     }

     // check columns
     for(int i = 0; i < n; i++){
         set<char>st;
         for(int j = 0; j < n; j++){
             st.insert(v[j][i]);
         }
         if (check(st))
             return;
     }

     // check diagonals
     set<char>st, st1;
     for(int i = 0; i < n; i++){
         st.insert(v[i][i]);
         st1.insert(v[i][n - i - 1]);
     }
     if (check(st) or check(st1))
        return;

     // draw
     cout << "DRAW\n";
}
```
