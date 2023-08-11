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















# Math & Number Theory

## `Arithmetic Progression`
`ak = a1 + (k - 1) * diff`

```cpp
ll sumSequance(ll firstNumber, ll lastNumber, ll numberOfNumbers){
    ll ans = ((firstNumber + lastNumber) / 2) * numberOfNumbers;
    return ans;
}
```
**Check if a number exists in a range**
```cpp
bool exists(double start, double diff, double searchFor){
    double check = (searchFor - start) / diff;
    return check == int(check);
}
```



## `Geometric Progression`
`ak = a1 * r^(k-1)` <br>
`sum = a1(1 - r^n) / (1 - r)`


## `Bit manipulation`
### `XOR [^]`
- **Return 1 if 2 bits are different, else return 0**
- **the res contains numbers of bits = 1 representing that binary rep was different at those positions**
- **ans is unpredicted**
- `a + b = ( a ^ b ) + 2 ( a & b )` 

**Properties**
- 0 ^ n = n
- n ^ n = 0
- (A ^ B ^ C ^ D ^ E) ^ (A ^ B ^ C) = D ^ E

**The next roles are the same for multiplication**

- odd ^ odd = odd
- even ^ even = even
- odd ^ even = odd 

## `is power of 2`
```cpp
bool ispowerOf2(ll n){
    return (n and !(n & (n - 1)));
}
```


**n = pow(2, ?)**

```cpp
int thePowerOf(ll n) {
    // return the nearest [smaller of equal] power of 2 from the number
    return log(n) / log(2);
}
```

**Number with all bits = 1 `PM1`**
- (Power of 2) - 1
- `4: 100` `3: 11`
- `8: 1000` `7: 111`

**Number with exactly one bit = 0**
- PM1 - Power of 2
- 7 - 2 = 5 `101`

```cpp
vector<ll>one0Bit;
void pre(){
    for(ll i = 2; i < 64; i++){
        ll pm1 = (1LL << i) - 1;
        for(int j = 0; j <= i - 2; j++){
            one0Bit.push_back(pm1 - (1LL << j));
        }
    }
    sort(all(one0Bit));
}
```


## `countBit0`
```cpp
int countBit0(int n){
    int cnt = 0;
    while(n){
        cnt += !(n & 1);
        n >>= 1;
    }
    return cnt;
}
```

## `decimal to binary`
```cpp
string decimalToBinary(ll n){
    string s;
    while(n){
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(all(s));
    return s;
}
```



## `bitset`
### `Declaration`
**Convert decimal binary using an array of bits**
```cpp
int n = 13;
bitset<5>b(n);
cout << b; // 01101
cout << "\n" << b[0] << b[1] << b[2]; // 101
```

### `Convert to string`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << "\n"; // 01101
string s = b.to_string();
cout << s << "\n"; // 01101 [same as representation of bitset]
cout << s[0] << s[1] << s[2]; //011
```

### `Convert binary to decimal`
```cpp
string s = "101011";
bitset<10>b(s);
cout << b.to_ullong(); // 43
```

### `Indexing`
#### `bitset`
`Indexing in bitset is from right to left [2^0, 2^1, 2^2, ...]`
```cpp
int n = 13;
bitset<5>b(n);
cout << b; // 01101
cout << "\n" << b[0] << b[1] << b[2]; // 101
```
#### `string`
`Indexing in a string from left to right [from last bit to first bit]`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << "\n"; // 01101
string s = b.to_string();
cout << s << "\n"; // 01101 [same as representation of bitset]
cout << s[0] << s[1] << s[2]; //011
```


### `Update`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << " : with value: " << b.to_ullong(); // 01101 with value 13
b[1] = 1;
cout << "\n" << b << " : with value: " << b.to_ullong() ; // 01111 : with value: 15
```

### `any`
**returns if the binary representation contains bit = 1**
```cpp
int n;
cin >> n;
bitset<10>b(n);
cout << b.any();
```
---

### `count`
**return numbers of 1 bits**
```cpp
int n = 5;
bitset<10>b(n);
cout << b.count(); // 2
```


### `set`
**`make a number or specific bit to 1`**
```cpp
string s = "1101101";
bitset<8>b(s);
b.set(1);
cout << b; // 1101111
```

### `reset`
**`make number or specific bit to 0`**
```cpp
string s = "1101101";
bitset<8>b(s);
b.reset();
cout << b; // 00000000
```
```cpp
string s = "1101101";
bitset<8>b(s);
b.reset(0);
cout << b; // 1101100
```


### `flip`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << "\n";
b.flip(1);
cout << b; // 01111
```








# 👌 `GCD`

**GCD of 2 numbers is the greatest number that divides a, b without remainders**

**`GCD of 2 numbers held the multiplication of common divisors between 2 numbers`**
- gcd(20, 15) = 5
- gcd(6, 3) = 3
- gcd(7, 5) = 1
- gcd(0, 5) = 5

## `GCD with Prime Factorization` 
- **Get prime factors of each number, the gcd will be the multiplication of the common numbers**
- Complexity: O(sqrt(max n))

## `GCD with Euclidian Algorithm`
- `gcd(a, b) = gcd(b, a % b)`


## `GCD Properties`
- **gcd(0, n) = n**
- **gcd(1, n) = 1**
- **gcd(n, n + 1) = 1**
- **gcd(a!, b!) = min(a, b)!**
- **`1 <= gcd(a, b) <= min(a, b)`**
- **gcd of 2 even numbers always >= 2. 2 <= gcd(ev, ev) <= min(a, b)**
- GCD(array elements after adding x) = **`gcd(a[0] + x, gcd(a[1] - a[0], ...., a[n - 1] - a[0])`** such that array is **sorted**

## `GCD Implementation`
```cpp
int a, b;
cin >> a >> b;
cout << __gcd(a, b);
```
```cpp
ll gcd(ll a,  ll b) {
    // recursive 
    // gcd(a,b) =gcd(b,a%b)
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll gcd(ll a, ll b) {
    // iterative 
    // gcd(a,b) =gcd(b,a%b)
    while (b != 0) {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}
```

# 👌 `LCM`

**Least common multiple, the smallest number that is multiple of a, b *e.g divisible by a, b***

**lcm(3, 8) = 24** `multiples of 3: (3, 6, 9, 12, 15, 18, 21, 24, ..)` `multiples of 8: (8, 16, 24, ..)`

### `How LCM Works`
**Get the prime factors of 2 numbers and for each repeated factor, choose the most frequent**

a = 2 * 2 * 3 * 3 * 5 * 7

b = 2 * 3 * 5 * 5 * 7 * 7

LCM(a, b) = (2 * 2) * (3 * 3) * (5 * 5) * (7 * 7)

### `LCM Rule`
LCM(a, b) = (a * b) / gcd(a, b)

### `LCM Properties`
- lcm between 2 numbers that are multiples of each other = max(a, b). lcm(6, 18) = 18
- lcm(1, n) = n
- lcm(0, n) Error
- gcd(a, b) * lcm(a, b) = a * b
- gcd(a, b) + lcm(a, b) = x. when `a = 1` `b = x - 1`
- to get the lcm of more than 2 numbers first set lcm = 1 as lcm (1, n) = n

### `LCM Implementation`
```cpp
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    // lcm(a,b) = (a*b) / gcd(a,b)
    return a / gcd(a, b) * b;
}
```
```cpp
ll lcm(ll a, ll b)
    return  a / __gcd(a, b) * b;
```



## `Factorization`
```cpp
vector<ll> getDivisors(ll n) {
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(all(v));
    return v;
}
```


**How to check if a number has 3 divisors?**
- First, check if the number of divisors is odd -> `number is perfect square`
- Then check if the sqrt(n) is prime. if prime so the numbers have only 3 divisors `1 n sqrt(n)`


#### `Perfect Square`
```cpp
bool isPerfectSquare(ll n){
    ll sq = sqrt(n);
    return sq * sq == n;
}
```



## `Prime Factorization`
```cpp
void doIt() {
    int n;
    cin >> n;

    map<int,int>mp;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            mp[i]++;
            n /= i;
        }
    }   
    if (n != 1)
        mp[n]++;

    // print prime factors
    for(auto it: mp){
        cout << "factor: " << it.first << ", count: " << it.second << "\n";
    }
}
```


## `Common factors of 2 numbers`
```cpp
vector<int> commonDivisors(int a, int b){
    ll gcd = __gcd(a, b); // held multiplication of common divisors

    // fatorization of gcd
    vector<int>divisors;
    for (int i = 1; i * i <= gcd; i++) {
        if (gcd % i == 0) {
            divisors.push_back(i);

            if (gcd / i != i)
                divisors.push_back(gcd / i);
        }
    }
    return divisors;
}
```

## `Multiples`
```cpp
void doIt(){
    int n, mx;
    cin >> n >> mx;
    // generate multiples of n till mx
    for(int i = n; i <= mx; i += n){
        cout << i << " ";
    }
}
```

## `Modular arithmetic`
```cpp
ll add(ll a, ll b, ll c){
    return ((a % c) + (b % c)) % c;
}
ll subtract(ll a, ll b, ll c){
    return ((a % c) - (b % c) + c) % c;
}
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
ll modneg(ll n, ll mod){
    // n is negative
    return ((n % mod) + mod) % mod;
}
```


## `Fast Power`
ll fastPower(int base, int power){
    if (power == 1){
        return base;
    }
    ll a = fastPower(base, power / 2);

    if (power & 1)
        return base * a * a;
    else
        return a * a;
}

## `Modular Exponentiation`
**Calculate `(base ^ power) % m`**
```cpp
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
ll fastPowerModular(int base, int power, int m){
    if (power == 1)
        return base;

    ll a = fastPowerModular(base, power / 2, m);
    ll result = multiply(a, a, m);

    if (power & 1)
        result = multiply(result, base, m);

    return result;
}
```


## `Prefix To Array`

```cpp
vector<ll>prefixToArray(vector<ll>prefix, int n){
    vector<ll>v(n);
    v[0] = prefix[0];
    for(int i = n - 1; i > 0; i--){
        v[i] = prefix[i] - prefix[i - 1];
    }
    return v;
}
```

# `Prime Theory`

## `Seive`

```cpp
const int N = 1e6; // max number
vector<bool>isPrime(N + 5, true);
void seive(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= N; i++){
        if (isPrime[i]){
            // mark all multiples of i as not prime
            for(int j = i * i; j <= N; j += i){
                isPrime[j] = false;
            }
        }
    }
}
```

## `is prime`
```cpp
bool isPrime(ll n){
    if (n < 2)
        return false;

    for(ll i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
```


## `Decompose Number to Sum of Primes`
**Any number can be summation of 1, 2 or 3 primes (or more of course)**

### Number is a summation of `1 prime`
- the number is prime

### Number is a summation of `2 primes`
- the number is even
- the number is odd and n - 2 is prime. first number = n - 2, second number = 2

### Number is a summation of `3 primes`
- the number is odd and the above condition is not satisfied ^_^
- you can get those 3 numbers using the Bruteforce algorithm. Don't worry it will pass 😂
```cpp
for (int i = 3;; i += 2) {
    if (isPrime(i)) {
        for (int j = 3; j < n; j += 2) {
            if (isPrime(j) and isPrime(n - (i + j))) {
                cout << i << " " << j << " " << n - (i + j);
                return;
            }
        }
    }
}
```

## `Geometry`

### `Triangle Area`
**Using base, height**
```cpp
double triangleArea(double base, double height){
    return 0.5 * base * height;
}
```
**Using 3 sides**
```cpp
double triangleArea(double a, double b, double c){
    double s = (a + b + c) / 2;
    double ans = sqrt(s * (s - a) * (s - b) * (s - c));
    return ans;
}
```

## `Counting`
`Number of subsequences`
number of non-zero subsequence = `(2^n) - 1`

`Number of subarrays` = 
`n * (n + 1) / 2`


### `nPr`
A = {a, b, c}
generate all 2 permutations `ab ba ac ca bc cb`

```cpp
ll nPr(ll n, ll r){
    ll res = 1;
    for(ll i = n - r + 1; i <= n; i++){
        res *= i;
    }
    return res;
}
```
**Modular nPr**
```cpp
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
ll nPr(ll n, ll r){
    ll res = 1;
    for(ll i = n - r + 1; i <= n; i++){
        res = multiply(res, i, mod);
    }
    return res;
}
```

### `nCr`
order does not matter. `ab = ba` `abc = bca = acb`
```cpp
ll nCr(ll n, ll r){
    ll ans = 1;
    ll div = 1; // held r!
    for(ll i = r + 1; i <= n; i++){
        ans *= i;
        ans /= div;
        div++;
    }
    return ans;
}
```

## `Sum Sequences`
### Arithmatic Sequance

`Arithmetic Sequence Sum = [(First Number + Last Number) / 2] * Number of Numbers`
```cpp
ll sumSequance(ll firstNumber, ll lastNumber, ll numberOfNumbers){
    ll ans = (firstNumber + lastNumber) * numberOfNumbers / 2 ;
    return ans;
}
```

`Sum of even numbers`
```cpp
ll sumEven(ll a, ll b){
    // validate start & end
    if (a & 1)
        a++;
    if(b & 1)
        b--;
    if (a > b)
        return 0;

    // calculate
    ll numberOfNumbers = ((b - a) / 2) + 1;
    ll ans = ((a + b) * numberOfNumbers) / 2;
    return ans;
}
```
`Sum of odd numbers`
```cpp
ll sumOdd(ll a, ll b){
    // validate start & end
    if (a % 2 == 0)
        a++;
    if(b % 2 == 0)
        b--;
    if (a > b)
        return 0;

    // calculate
    ll numberOfNumbers = ((b - a) / 2) + 1;
    ll ans = ((a + b) * numberOfNumbers) / 2;
    return ans;
}
```

### 

### Geometric Sequence

`Geometric Sequence Sum = [(First Number) * (1 - ratio ^ Number of Numbers)] / (1 - ratio)`
```cpp
ll sumSequance(ll firstNumber, ll numberOfNumbers, ll ratio) {
    ll ans = (firstNumber * (1 - pow(ratio, numberOfNumbers))) / (1 - ratio);
    return ans;
}
```

`Sum of numbers from a to b that are divisible by c`
```cpp
ll sum(ll n) {
    return n * (n + 1) / 2;
}
ll sumDivisible(ll a, ll b, ll c) {
    return sum(max(a, b) / c) * c - sum((min(a, b) - 1) / c) * c;
}
```

## `Count dividing pairs`
```cpp
const int N = 1e7 + 5;
vector<int>freq(N);
void doIt(int tc) {
    int n;
    cin >> n;
    int mx = -1;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        mx = max(mx, in);
        freq[in]++;
    }
 
    ll ans = 0;
    ans += 1LL * freq[0] * (n - freq[0]);
    freq[0] = 0;
 
    for (int i = 1; i <= mx; i++) {
        if (!freq[i])
            continue;
 
        for (int j = i + i; j <= mx; j += i) {
            ans += 1LL * freq[i] * freq[j];
        }
 
        freq[i] = 0;
    }
 
    cout << "Test case #" << tc << ": " << ans << "\n";
}
```


















# Algorithms

## `max subarray sum`
```cpp
ll maxSubArraySum(vector<ll>& v) {
    ll mx = -1e9, sum = 0;
    
    for (auto it : v) {
        sum += it;
        mx = max(mx, sum);
        if (sum < 0)
            sum = 0;
    }
    return mx;
}
```

## `Maximum number of overlapping Intervals`
```cpp
bool overlapSign = 0; // 0 if [1 2][2 3] -> non overlap , 1 else
bool cmp(pair<int, int>p1, pair<int, int>p2) {
    if (p1.first == p2.first) 
        return  (overlapSign ? p1.second > p2.second : p1.second < p2.second);

    return p1.first < p2.first;
}

int maxOverlappingIntervals(vector<pair<int, int>>intervals) {
    int n = intervals.size();

    vector<pair<int, int>>v;
    for (int i = 0; i < n; i++) {
        int a = intervals[i].first, b = intervals[i].second;
        v.push_back({ a, 1 });
        v.push_back({ b, -1 });
    }

    sort(v.begin(), v.end(), cmp);
   
    int cur = 0, mx = 1;
    for (auto it : v) {
        cur += it.second;
        mx = max(mx, cur);
    }

    return mx;
}
```

## `Merge Intervals`
```c++
vector<pair<int, int>> mergeIntervals(vector<pair<int, int>>&v) {
    int n = v.size();
    sort(all(v));
    
    vector<pair<int, int>>mergedIntervals;
    int a = v[0].first, b = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first <= b) {
            b = max(b, v[i].second);
        }
        else {
            mergedIntervals.push_back({ a,b });
            a = v[i].first, b = v[i].second;
        }
    }
    mergedIntervals.push_back({ a,b });
    
    return mergedIntervals;
}
```

## `NGE`
```cpp
vector<ll>NGE(vector<ll>v) {
    int n = v.size();
    vector<ll>nge(n, -1);
    stack<ll>st; // will contain indecies
    st.push(0);
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[st.top()]) {
            st.push(i);
            continue;
        }

        while (st.size() and v[i] > v[st.top()]) {
            nge[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return nge;
}
```

## `Can a string be Palindrom`
swap any 2 chars any number of times. can string be palindrome?

```cpp
bool canBePalindrom(string s){
    map<char, int>mp;
    for (auto it : s) {
        mp[it]++;
    }

    int cnt = 0;
    for (auto it : mp) {
        cnt += it.second & 1;
    }

    if ((s.size() & 1 and cnt != 1) or (s.size() % 2 == 0 and cnt != 0))
        return 0;
    
    return 1;
}
```
## `Matrix Multiplication`
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            ans[i][j] += v1[i][k] * v2[k][j];
        }
    }
}
```



















# Functions

## `Built-in Functions`

## `Permutations`
#### Get all permutations
```cpp
vector<int>v = { 1,2,3 };
sort(v.begin(), v.end()); // array must be sorted
do {
    for (auto i : v) { cout << i << " "; }
    cout << "\n";
} while (next_permutation(v.begin(), v.end()));
```

#### Get next permutation
```cpp
string s = "abc";
next_permutation(s.begin(), s.end());
cout << s; // acb
```

## `Unique`
#### Get unique elements in a **`Sorted`** array in O(N)
```cpp
vector<int>v = { 4,2,4,1,2,3 };
int n = v.size();
sort(v.begin(), v.end());
n = unique(v.begin(), v.end()) - v.begin();
cout << n; // 4
```
#### Remove duplicates in a **`Sorted`** array in O(N)
```cpp
vector<int>v = { 4,2,4,1,2,3 };
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```

## `Compare Function`
```cpp
bool cmp(pair<int, int>p1, pair<int, int>p2){
    if (p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

sort(all(v), cmp);
```






















# Graph

### `Enter Graph`
```cpp
int main() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // for undirected graph
    }
}
```

### `dfs`
```cpp
void dfs(int node, vector<vector<int>>&graph, vector<int>&visited) {
    cout << node << "\n";
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
            dfs(child, graph, visited);
    }
}
```

### `bfs`
```cpp
void bfs(int node, vector<vector<int>>& graph, vector<bool>&visited, vector<int>&parent, vector<int>&level) {
    queue<int>nextToVisit;
    nextToVisit.push(node);

    level[node] = 0;
    parent[node] = -1;

    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
        nextToVisit.pop();

        visited[current] = 1;
        for (auto child : graph[current]) {
            if (!visited[child]) {
                visited[child] = 1;
                parent[child] = current;
                level[child] = level[current] + 1;

                nextToVisit.push(child);
            }
        }
    }
}
```

### `generate path of node`
```cpp
vector<int>getPath(int node, vector<int>&predecessor){
    stack<int>st;
    while(node != -1){
        st.push(node);
        node = predecessor[node];
    }
    vector<int>path;
    while(st.size()){
        path.push_back(st.top());
        st.pop();
    }
    return path;
}
```

#### `More Than 1 Entry Point`
**Visit those points` `before` `entering traversal algorithm**
```cpp
int numOfEntryPoints;
queue<pair<int, int>>q;
while (numOfEntryPoints--){
    int a, b;
    cin >> a >> b;
    q.push({a, b});
    visited[a][b] = 1; //  <-------------------
}
bfs(q, {n, m});
```

## `Traversing in a 2D Grid`
```cpp
bool inMap(pair<int,int>point, pair<int, int>grid, int mapBase) {
    int pf = point.first, ps = point.second;
    int gf = grid.first, gs = grid.second;
    if (mapBase)
        return (pf >= 1 and pf <= gf and ps >= 1 and ps <= gs);
    else
        return (pf >= 0 and pf < gf and ps >= 0 and ps < gs);
}
```
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
```
```cpp
char dir[] = {'U', 'D', 'L', 'R'};
```
```cpp
bool visited[1005][1005];
vector<char>path;
bool bfs(pair<int, int>source, pair<int, int> destination, vector<vector<char>>&graph,vector<vector<pair<int, int>>>&parent ,pair<int, int> gridSize) {
    queue<pair<int, int>> nextToVisit;
    nextToVisit.push(source);
    parent[source.first][source.second] = {-1, -1};
    pair<int, int> currentPoint;
    while (nextToVisit.size()) {
        currentPoint = nextToVisit.front();
        nextToVisit.pop();
        if (currentPoint == destination){
            path = getPath(destination, source, parent);
            return true;
        }
        visited[currentPoint.first][currentPoint.second] = true;
        for (int i = 0; i < 4; i++) {
            pair<int, int> child = {currentPoint.first + dx[i], currentPoint.second + dy[i]};
            if (inMap(child, gridSize, 0) and graph[child.first][child.second] != '#' and !visited[child.first][child.second]) {
                visited[child.first][child.second] = 1;
                parent[child.first][child.second] = currentPoint;
                nextToVisit.push(child);
            }
        }
    }
    return false;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>>grid(n, vector<char>(m));
    pair<int, int>source, destinations;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                source = {i, j};
            if (grid[i][j] == 'B')
                destinations = {i, j};
        }
    }
    vector<vector<pair<int, int>>>parent(n, vector<pair<int, int>>(m));
    bool reachable = bfs(source, destinations, grid, parent, {n, m});
    cout << (reachable ? "YES\n" : "NO\n");
    if (path.size()){
        cout << path.size() << "\n";
        for(auto it : path){
            cout << it;
        }
    }
}
```
**Get the path**
```cpp
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
char dir[] = {'U', 'D', 'L', 'R'}; // For backtracking the Path
vector<char> getPath(pair<int, int> destination ,pair<int, int>source ,vector<vector<pair<int, int>>>&parent) {
    vector<char> path;
    while(destination != source){
        char direction;
        pair<int, int>checkPoint;
        for(int i = 0; i < 4; i++){
            checkPoint = {destination.first + dx[i], destination.second + dy[i]};
            if (checkPoint == parent[destination.first][destination.second]){
                direction = dir[i];
                break;
            }
        }
        path.push_back(direction);
        destination = parent[destination.first][destination.second];
    }
    reverse(all(path));
    return path;
}
```
## `Graph Connectivity`
```cpp
int dfs(int node, vector<vector<int>>&graph, vector<int>&visited) {
    visited[node] = 1;
    int cnt = 1;
    for (auto child : graph[node]) {
        if (!visited[child]) {
            cnt += dfs(child, graph, visited);
        }
    }
    return cnt;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<int> visited(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout << (n == dfs(1, graph, visited) ? "YES" : "NO"); 
}
```

## `Edge Classification`
```cpp
int backword, forwardd, cross, Time;
vector<char> color(100, 'w');
vector<int> parent(100, -1), discovery(100), delivery(100);
//map<int, char>color;
//map<int, int>parent, discovery, delivery;
void dfs(int node, vector<vector<int>>& graph) {
    Time++;
    color[node] = 'g';
    discovery[node] = Time;
    for (auto child : graph[node]) {
        // node is the source and child is the destination 
        if (color[child] == 'w') {
            cout << "tree edge: " << node << " -> " << child << "\n";
            parent[child] = node;
            dfs(child, graph);
        }
        else if (color[child] == 'g' and child != parent[node]) {
            cout << "backword edge: " << node << " -> " << child << "\n";
            backword++;
        }
        else if (color[child] == 'b' and discovery[node] < discovery[child]) {
            cout << "forward edge: " << node << " -> " << child << "\n";
            forwardd++;
        }
        else if (color[child] == 'b' and discovery[node] > discovery[child]) {
            cout << "cross edge: " << node << " -> " << child << "\n";
            cross++;
        }
    }
    color[node] = 'b';
    delivery[node] = Time + 1;
}
```



## `Cycle Detection`
### `Directed`
```cpp
vector<int> getPath(int node, int endNode, vector<int>&parent) {
    vector<int> path;
    while (node != endNode) {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(endNode);
    path.push_back(path.front());
    reverse(all(path));
    return path;
}
vector<int>path;
bool dfs(int node, vector<vector<int>>&graph, vector<int>&parent, vector<char>&color) {
    color[node] = 'g';
    for (auto child: graph[node]) {
        if (color[child] == 'w') {
            parent[child] = node;
            if (dfs(child, graph, parent, color)) {
                return true;
            }
        }
        else if (color[child] == 'g') {
            path = getPath(node, child,parent);
            return true;
        }
    }
    color[node] = 'b';
    return false;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<char> color(n + 1, 'w');
    vector<int> parent(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    // scan for cycles
    bool cyclic = false;
    for (int node = 0; node < n; node++) {
        if (color[node] == 'w') {
            if (dfs(node, graph, parent, color)) {
                cyclic = true;
                break;
            }
        }
    }

    // answer
    if (cyclic) {
        cout << "Cyclic Graph\n";
        cout << path.size() << "\n";
        for(auto it : path)
            cout << it << " ";
        cout << "\n";
    }
    else {
        cout << "No Cycles\n";
    }
}
```

### `Undirected`
```cpp
vector<int> getPath(int node, int endNode, vector<int>&parent) {
    vector<int> path;
    while (node != endNode) {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(endNode);
    path.push_back(path.front());
    return path;
}
vector<int>path;
bool dfs(int node, vector<vector<int>>&graph, vector<int>&parent, vector<char>&color) {
    color[node] = 'g';
    for (auto child: graph[node]) {
        if (color[child] == 'w') {
            parent[child] = node;
            if (dfs(child, graph, parent, color)) {
                return true;
            }
        }
        else if (color[child] == 'g' and child != parent[node]) {
            path = getPath(node, child,parent);
            return true;
        }
    }
    color[node] = 'b';
    return false;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<char> color(n + 1, 'w');
    vector<int> parent(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // scan for cycles
    bool cyclic = false;
    for (int node = 0; node < n; node++) {
        if (color[node] == 'w') {
            if (dfs(node, graph, parent, color)) {
                cyclic = true;
                break;
            }
        }
    }

    // answer
    if (cyclic) {
        cout << "Cyclic Graph\n";
        cout << path.size() << "\n";
        for(auto it : path)
            cout << it << " ";
        cout << "\n";
    }
    else {
        cout << "No Cycles\n";
    }
}
```


## Shortest path
```cpp
void dijkstra(int node, vector<vector<pair<int, ll>>>&graph, vector<bool>&visited, vector<ll>&cost, vector<int>&predecessor){
    int n = graph.size();

    // cost of source node
    cost[node] = 0;

    // priority_queue hold node and its best cost [cost, node]. it should sort [ascendingly] from min to max
    priority_queue<pair<ll, int>>pq;
    pq.push({cost[node], node});

    while(pq.size()){
        int source = pq.top().second;
        ll sourceCost = -pq.top().first;
        pq.pop();
        if (visited[source])
            continue;

        visited[source] = 1;
        for(auto it : graph[source]){
            int target = it.first;
            ll edgeCost = it.second;
            if (sourceCost + edgeCost < cost[target]){
                // it is min cost than old cost
                cost[target] = sourceCost + edgeCost;
                predecessor[target] = source;
                pq.push({-cost[target], target});
            }
        }
    }
}
```

## `Minimum spanning tree`
```cpp
ll MST(int node, vector<vector<pair<int, ll>>>& graph, vector<bool>& visited, vector<ll>& cost, vector<int>& predecessor) {
    ll MSTCost = 0;
    int n = graph.size();
    
    cost[node] = 0;
    
    priority_queue<pair<ll, int>>pq; 
    pq.push({ cost[node], node });

    while (pq.size()) {
        int source = pq.top().second;
        ll sourceCost = -pq.top().first;
        pq.pop();
        if (visited[source])
            continue;

        visited[source] = 1;
        MSTCost += sourceCost;
        for (auto it : graph[source]) {
            int target = it.first;
            ll edgeCost = it.second;

            if (edgeCost < cost[target]) {
                cost[target] = edgeCost;
                predecessor[target] = source;
                pq.push({ -cost[target], target });
            }

        }
    }
    return MSTCost;
}
void doIt() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>>graph(n + 1); // endNode, cost
    vector<bool>visited(n + 1, false);
    vector<ll>cost(n + 1, LLONG_MAX);
    vector<int>predecessor(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int startNode, endNode, pathCost;
        cin >> startNode >> endNode >> pathCost;
        graph[startNode].push_back({ endNode, pathCost });
        graph[endNode].push_back({ startNode, pathCost });
    }

    ll MSTCost = MST(0, graph, visited, cost, predecessor);

    for (int i = 0; i < n; i++) {
        cout << "node " << i << " ,cost: " << cost[i] << ", predecessor: " << predecessor[i] << "\n";
    }
    cout << "MST Cost: " << MSTCost << "\n";
}
```








