bool isprime(int n) {
    if (n == 2) { return true; }
    if (n == 0 or n == 1 or n % 2 == 0) { return false; }
    else { 
        for (int i = 3; i*i <= n ; i+=2) {
            if (n % i ==0 ) { return false; }
        }
    }
    return true;
}