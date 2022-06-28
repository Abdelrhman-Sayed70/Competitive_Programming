ll sumDigits(string s) {
    ll sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }
    return sum;
}