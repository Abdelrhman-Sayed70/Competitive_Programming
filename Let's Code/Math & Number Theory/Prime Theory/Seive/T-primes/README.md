# T-primes
## [T-primes | Codeforces](https://codeforces.com/contest/230/problem/B)

## Approach
- First, check if the number of divisors is odd -> `number is perfect square`
- Then check if the sqrt(n) is prime. if prime so the numbers have only 3 divisors `1 n sqrt(n)`

## Solution
```cpp
//*************
bool isPerfectSquare(ll n){
    ll sq = sqrt(n);
    return sq * sq == n;
}
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
        if (isPerfectSquare(it))
            cout << (isPrime[sqrt(it)] ? "YES\n" : "NO\n");
        else
            cout << "NO\n";
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
