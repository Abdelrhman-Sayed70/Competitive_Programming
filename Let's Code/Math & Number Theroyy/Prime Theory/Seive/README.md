# Seive
**Pre-processing algorithm used in marking numbers in range as a prime or not prime**

## Complexity
**`O(n . log(log(n)))`**

## Implementation
```cpp
//*************
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
    for(int i = 0; i < 100; i++){
        cout << i << ": ";
        cout << (isPrime[i] ? "YES\n" : "NO\n");
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
