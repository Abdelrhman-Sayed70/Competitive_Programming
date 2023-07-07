# T-primes
## [T-primes | Codeforces](https://codeforces.com/contest/230/problem/B)

## Solution
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
void doIt() {
    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(auto it : v){

    }
}
//*************
int main() {
    Go();
    seive();
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        doIt();
    }
}
```
