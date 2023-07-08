# Rudolf and the Another Competition
## [Rudolf and the Another Competition | Codeforces](https://codeforces.com/contest/1846/problem/C)

## Solution
```cpp
struct Student{
    int score;
    ll penalty;
    bool flag;
};
bool cmp (Student student1, Student student2){
    if (student1.score != student2.score){
        return student1.score > student2.score;
    }
    else{
        if (student1.penalty != student2.penalty){
            return student1.penalty < student2.penalty;
        }
        else{
            return student1.flag > student2.flag;
        }
    }
}
void doIt() {
    int n, m, h;
    cin >> n >> m >> h;
    vector<Student>v;
    for(int i = 0; i < n; i++){
        multiset<int>st;
        for(int j = 0; j < m; j++){
            int in;
            cin >> in;
            st.insert(in);
        }
        ll time = 0, penalty = 0;
        int score = 0;
        for(auto it:st) {
            if (it + time <= h) {
                score++;
                penalty += time + it;
                time += it;
            }
        }
        Student student = {score, penalty, 0};
        if (i == 0){
            student.flag = 1;
        }
        v.push_back(student);
    }
    sort(all(v), cmp);
    for (int i = 0; i < v.size(); i++){
        if (v[i].flag){
            cout << i + 1 << "\n";
            return;
        }
    }
}
```
