// T_prime : number has 3 devisors only : (has sqrt root and this square root is prime)
bool isperfectsquare(ll n) {
    ll tmp = sqrt(n);
    return(tmp * tmp == n);
}  
bool isprime(ll n) {
    if (n == 2) { return true; }
    if (n == 0 or n == 1 or n % 2 == 0) { return false; }
    else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) { return false; }
        }
    }
    return true;
}
void do_it() {
    int n;
    cin >> n; 
    lp(i, n) {
        ll in;
        cin >> in;
        int chk = isperfectsquare(in);
        if (chk == 0) {
            cout << "NO\n";
        }
        else {
            ll sq = sqrt(in);
            // check for this sq if it is prime then it is T_prime 
            if (isprime(sq)) { cout << "YES\n"; }
            else { cout << "NO\n"; }
        }
    }
}