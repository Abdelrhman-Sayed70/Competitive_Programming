void doIt() {
    int n, k, q; 
    cin >> n >> k >> q; 
    int sz = 200001;
    vector<ll>ranged(sz + 5, 0), prefix(sz + 5);
    for (int i = 0; i < n; i++) {
        int l, r; 
        cin >> l >> r;
        ranged[l] += 1  ; 
        ranged[r + 1] -= 1 ;
    }
    for (int i = 1; i <= sz; i++) {
        ranged[i] += ranged[i - 1];
    }

    for (int i = 1; i <= sz; i++) {
        if (ranged[i] >= k)
            prefix[i] = 1;
    }
    for (int i = 1; i <= sz; i++) {
        prefix[i] += prefix[i - 1];
    }
    while (q--) {
        int a, b;
        cin >> a >> b; 
        cout << prefix[b] - prefix[a - 1] << "\n";
    }
}