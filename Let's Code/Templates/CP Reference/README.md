## `Template`
```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(),v.end()
void Go() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void doIt(int tc) {

}
int main() {
    Go();
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        doIt(tc);
}
```











# `Techniques`

## `Prefix Sum`

- Gets sum from the start of the array to the position I

```c++
vector<ll>getPrefix(vector<ll>&v) {
    vector<ll> prefix = v;
    for (int i = 1; i < prefix.size(); i++) {
        prefix[i] += prefix[i - 1];
    }
    return prefix;
}
```
```cpp
int a, b; // 0 based
cin >> a >> b;
cout << (a ? prefix[b] - prefix[a - 1] : prefix[b]);
```

## `Suffix Sum`

- Gets sum from the end of the array to position I

```c++
vector<ll>getSuffix(vector<ll>&v) {
    vector<ll> suffix = v;
    for (int i = v.size() - 2; i >= 0; i--) {
        suffix[i] += suffix[i + 1];
    }
    return suffix;
}
```

## `2D Prefix Sum`
```cpp


```



## `Partial [Ranged] sum`

```cpp
void doIt() {
    int n; cin >> n;
    vector<int>v(n), ranged(n + 1, 0);
    for (auto& it : v)
        cin >> it;

    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        ranged[l] += k;
        ranged[r + 1] -= k;
    }
    for (int i = 1; i < n; i++) {
        ranged[i] += ranged[i - 1];
    }
    for (int i = 0; i < n; i++) {
        v[i] += ranged[i];
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
```

















# `Searching`

## `Binary Search`
```cpp
void doIt() {
    vector<int>v = { 1,2,3,4,5 };
    sort(v.begin(), v.end()); // array must be sorted
    int start = 0, end = v.size() - 1, mid;
    int goal = 6;
    bool found = false;
    while (start <= end) {
        mid = (start + end) / 2;
        if (v[mid] > goal) {
            end = mid - 1;
        }
        else if (v[mid] < goal) {
            start = mid + 1;
        }
        else if (v[mid] == goal) {    
            found = true; 
            break;
        }
    }
    cout << (found ? "Yes" : "No");
}
```
### Lower & Upper bound
```cpp
vector<int>v = { 1,2,3,4,5 };
int val, index;

auto low = lower_bound(v.begin(), v.end(), 3); // low is iterator points to 3
if (low != v.end()){
    val = *low; // 3
    index = low - v.begin(); // 2
}

auto upper = upper_bound(v.begin(), v.end(), 3); // low is iterator points to 4
if (upper != v.end()){
    val = *upper; // 4
    index = upper - v.begin(); // 3
}
```
### Optimization BS
```cpp
int start = 0, end = 1e5, mid, ans = 0; 
while (start <= end) {
    mid = (start + end) / 2;
    if (can(mid, params)) {
        ans = mid;
        start = mid + 1;
    }
    else {
        end = mid - 1;
    }
}
```

## `2 Pointers - Sliding Window`
### Longest k-Good Segment [Contain no more than k different values]
- insert in the set and update the max distance till the set size become > k
- when the set size exceeds k, still remove from it till the size becomes <= k
```cpp
void doIt() {
    int n, k;
    cin >> n >> k; 
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;
 
    // variable size sliding window
    set<int>st;
    vector<int>mp(1e6 + 5, 0);
    int start = 0, end = 0, mx = -1, sz, a = -1, b = -1;
    while (end < n) {   
        // insert
        st.insert(v[end]);
        mp[v[end]]++;
        sz = end - start + 1;
        if (st.size() <= k) {
            if (sz > mx) {
                mx = sz;
                a = start + 1, b = end + 1;
            }
        }
        // remove
        while (st.size() > k) {
            mp[v[start]]--;
            if (!mp[v[start]]) {
                st.erase(v[start]);
            }
            start++;
        }
        end++;
    }
    cout << a << " " << b;
}
```
### smallest sub-arr A contains all arr B elements
```cpp
void doIt() {
    int n, k;
    cin >> n >> k;
    
    vector<int>A(n), B(k);
    
    for (auto& it : A)
        cin >> it;
    
    map<int, bool>found;
    for (auto& it : B)
        cin >> it, found[it] = 1;
    
    // variable size sliding window
    int start = 0, end = 0, a = -1, b = -1, mn = INT_MAX, sz;
    map<int, int>mp;
    while (end < n) {
        // insert
        if (found[A[end]])
            mp[A[end]]++;

        // check and remove
        while (mp.size() == k) {
            sz = end - start + 1;
            if (sz < mn)
                mn = sz, a = start + 1, b = end + 1;
             
            if (mp.count(A[start])) {
                mp[A[start]]--;
                if (mp[A[start]] == 0)
                    mp.erase(A[start]);
            }
            start++;
        }
        end++;
    }
    cout << mn << "\n";
    cout << a << " " << b << "\n";
}
```

# `Complete Search`

## `Bitmask`
```cpp
void doIt() {
    int n;
    cin >> n ;
    vector<int>v(n);
    for(auto &it:v)
        cin >> it;

    for(int i = 0; i < 1 << n; i++){
        bitset<20>b(i);
        for(int j = 0; j < n; j++){
            if (b[j])
                cout << v[j] << " ";
        }
        cout << "\n";
    }
}
```

## `Backtracking`
### Maze Solver
```cpp
void traverse(int i, int j, int n, int m, vector<vector<char>>& grid, string path) {
    if (i == n - 1 and j == m - 1) {
        cout << path << "\n";
        return;
    }
    
    // go right R
    if (j + 1 < m and grid[i][j + 1] != '#')
        traverse(i, j + 1, n, m, grid, path + 'R');

    // go down D
    if (i + 1 < n and grid[i + 1][j] != '#')
        traverse(i + 1, j, n, m, grid, path + 'D');
}
```
```cpp
string path;
void generatePaths(int i, int j, int n, int m, vector<vector<char>>grid) {
    if (i == n - 1 and j == m - 1) {
        cout << path << "\n";
        return;
    }
        
    if (j + 1 < m and grid[i][j + 1] != '#') {
        path += 'R';
        generatePaths(i, j + 1, n, m, grid);
        path.pop_back();
    }
    if (i + 1 < n and grid[i + 1][j] != '#') {
        path += 'D';
        generatePaths(i + 1, j, n, m, grid);
        path.pop_back();
    }
}
```

### Create nPr
```cpp
vector<int>perm;
vector<bool>visited(10, false);
void solve(int i, int r, vector<int>& v) {
    if (perm.size() == r) {
        for (auto it : perm)
            cout << it << " ";

        cout << "\n";
        return;
    }

    for (auto it : v) {
        if (!visited[it]) {
            visited[it] = 1;

            perm.push_back(it);
            solve(i + 1, r, v);
            perm.pop_back();

            visited[it] = 0;
        }
    }
}
```

### Create nCr
```cpp
multiset<vector<string>>ms;
vector<string>tmp;
void solve(int i, int r, vector<string>& v) {
    if (tmp.size() == r) {
        vector<string>finalSorted = tmp;
        sort(all(finalSorted));
        ms.insert(finalSorted);
        return;
    }
    if (i == v.size()) {
        return;
    }
 
    tmp.push_back(v[i]);
    solve(i + 1, r, v);
    tmp.pop_back();
 
    solve(i + 1, r, v);
}
```











# STLs
## `Map`
#### `erase`
```cpp
map<char, int>mp;
mp['a'] = 20;
mp['b'] = 40;
mp['c'] = 60;
auto it = mp.find('a');
if (it!=mp.end()) 
  mp.erase(it); // or mp.erase('a') key 
```

## `Priority Queue`
#### `Priority Queue Min`
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(5);
pq.push(1);
pq.push(4);
cout << pq.top(); //1
```
## `Set`
#### `Traverse descending`
```cpp
vector<int>v = {1,5,2,4};
set<int>st(v.begin(), v.end());
set<int>::reverse_iterator it = st.rbegin();
for (it; it != st.rend(); it++) {
    cout << *it << " "; // 5 4 2 1
}
```


### `erase`
**`st.erase(it)` erase only value at this iterator [how to get the iterator? using find]**
```cpp
vector<int>v = { 1,1,2,2,3,3,3,4 };
multiset<int>ms;
for (auto it : v) { ms.insert(it); }
ms.erase(1); // erase all ones
for (auto it : ms) { cout << it << " "; } // 2 2 3 3 3 4
cout << "\n";
```

**`st.erase(val)` erase all elements has this val [In case of multiset]**
```cpp
vector<int>v = { 1,1,2,2,3,3,3,4 };
multiset<int>ms;
for (auto it : v) { ms.insert(it); }
ms.erase(ms.find(2)); // erase the first 2
for (auto it : ms) { cout << it << " "; } // 1 1 2 3 3 3 4
cout << "\n";
```

**`Erase range`**
```cpp
vector<int>v = { 0,1,2,3,4,5,6,7,8 };
set<int>st(v.begin(), v.end());
auto it1 = st.find(1), it2 = st.find(5);
st.erase(it1, it2); // erase form it1 to it2-1
for (auto it : st) { cout << it << " "; } //0 5 6 7 8
```




















# String

## `find`
- check if string a contains a string b or not
- return the index of first occurence of string b in string a. else return -1
```cpp
string s = "ababac";
if (s.find("ab") == -1) { cout << "not found"; }
else cout << s.find("ab") << "\n"; // 0 
```

## `rfind`
**same as find but returns the index of last occurence of string b in a else return -1**
```cpp
string s = "ababac";
if (s.rfind("ab") == -1) { cout << "not found\n"; }
else { cout << s.rfind("ab") << "\n"; } // 2
```

## `Convert string to number`
```cpp
string s = "123";
int intNum = stoi(s);
ll llNum = stol(s);
cout << llNum; 
```

## `Convert number to string`
```cpp
int num = 10;
string str = to_string(num);
cout << str;
```

## `Convert char to string`
```cpp
char ch; 
cin >> ch;
string s;
s += ch;
```

## `Convert 1 digit to char`
```cpp
int n = 5;
char ch = n + '0';
```

## `Convert char to number`
```cpp
char ch = '4';
int num = ch - '0';
```
```cpp
string s = "123";
int sum = 0;
for (auto it : s) {
    sum += (it - '0');
}
cout << sum; // 6
```

## `erase`
#### `str.erase(pos)`
remove from index pos to the end of the string
```cpp
string s = "abcdef";
s.erase(1);
cout << s; // "a" 
```
#### `str.erase(pos, length)`
remove from index pos length characters
```cpp
string s = "abcdef";
s.erase(1, 2);
cout << s; // "adef"
```

## `substr`
#### `str.substr(pos)`
get the string from index pos to the end
```cpp
string s = "abcdef";
string sub = s.substr(2); //cdef
```
#### `str.substr(pos, length)`
get the string from string index length characters
```cpp
string s = "abcdef";
string sub = s.substr(2, 2); // cd
```

## `insert`
#### `str.insert(int pos, string s)`
insert string s at index pos
```cpp
string str = "abc";
str.insert(0, "AB");
cout << str; // ABabc
```
##### `s.insert(int pos , int size ,char ch)`
insert char ch at index pos size times
```cpp
string s = "abcdef";
s.insert(0, 1, 'R');
cout << s << "\n"; // Rabcdef
```

```cpp
string s = "abcdef";
s.insert(2, 4, 'R');
cout << s << "\n"; // abRRRRcdef
```

## `append`
#### `str.append(int freq, char ch)`
append to the end of the string char ch freq times
```cpp
string s = "abcdef";
s.append(3, 'F'); 
cout << s; //abcdefFFF
```

## `Get many lines`
```cpp
string s;
int n; cin >> n;
vector<string>v;
cin.ignore();
while (n--) {
    getline(cin, s);
    v.push_back(s);
}
for (auto it : v) { cout << it << "\n"; }
```

## `Lower and Upper`

### `Char`
#### Convert char 
```cpp
string s = "aB";
s[0] = toupper(s[0]);
s[1] = tolower(s[1]);
cout << s << "\n"; // Ab
```
#### Check char
```cpp
char ch = 'A';
cout << isupper(ch); // 1
```

### `String`
```cpp
string str = "abd";
transform(str.begin(), str.end(), str.begin(), ::toupper);
cout << str << "\n";
```

















## 2D Vector
### `Declaration`
```cpp
vector<vector<int>>v(n, vector<int>(m));
```

### `Traversing column by column`

```cpp
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        cout << arr[j][i] << " ";
    }
    cout << "\n";
}
```

### `Traversing Diagonal of Square matrix [rows = columns]`
```cpp
cout << "Diagonal 1\n";
for(int i = 0; i < n; i++){
    cout << arr[i][i] << " ";
}

cout << "\nDiagonal 2\n";
for(int i = 0; i < n; i++){
    cout << arr[i][n - 1 - i] << " ";
}
```

















