void do_it() {
    string data;
    getline(cin, data);
    int blocks;
    cin >> blocks; cin.ignore();
    int cnt = 0;
    for (int i = 0; i < blocks; i++) {
        int position;
        int length;
        cin >> position >> length; cin.ignore();
        position += cnt;
        cnt += length;
        data.insert(position, length, '.');
    }
    cout << data << "\n";
}