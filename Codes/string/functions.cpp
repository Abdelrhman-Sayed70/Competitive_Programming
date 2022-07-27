#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void erase() {
    // 1- str.erase(int pos) remove from index pos to the end of the string
    string s = "abcdef";
    s.erase(1);
    cout << s << "\n"; // "a" 

    // 2- str.erase(int pos , int length ) remove from pos to lenght
    s = "abcdef";
    s.erase(0, 1);
    cout << s; // "bcdef"
}
void substr() {
    // substr (exactly like erase)

    string s = "abcdef";
    s = s.substr(3);
    cout << s << "\n"; // def 

    s = "abcdef";
    s = s.substr(1, 2);
    cout << s << "\n"; //bc
}
void insert() {
    string s = "abcdef";
    // 1- s.insert(int pos , string str)
    s.insert(0, "A");
    cout << s << "\n"; // Aabcdef

    // 2- s.insert(int pos , int size ,char ch)
    s = "abcdef";
    s.insert(2, 4, 'R');
    cout << s << "\n"; // abRRRRcdef

    s = "abcdef";
    s.insert(0, 1, 'R');
    cout << s << "\n"; // Rabcdef
}
void append() {
    // s.append(int freq, char) at the end of string 
    string s = "abcdef";
    s.append(3, 'F');
    cout << s;
}
void convertchartostring() {
    char ch = 'a';
    string s; s += ch; // s = "a" 
}
void tostring() {
    // convert number to string
    int num = 10;
    string str = to_string(num);
    cout << str;
}
void getline() {
    string s;
    getline(cin, s);
    cout << s;
}
void swap() {
    string a = "ab", b = "cd";
    a.swap(b);
    cout << a << " " << b;
}
void find_rfind() {
    // string.find(string2)

    // return the index of first occurence of string2 
    string s = "ababac";
    if (s.find("ab") == -1) { cout << "not found"; }
    else cout << s.find("ab") << "\n"; // 0 

    //return the index of last occurence of "ab"
    if (s.rfind("ab") == -1) { cout << "not found\n"; }
    else { cout << s.rfind("ab") << "\n"; } // 2
}
void stoi_stol() {
    // 1- stoi convert string to integer(be sure that size of string does not exeeded size of int ~(1e9))
    string s = "28";
    int i = stoi(s);
    cout << i + 2 << "\n";

    // 2- stol convert string to long long(be sure that size of string does not exeeded size of ll ~(1e18))
    ll it = stoi(s);
    cout << it + 2 << "\n";
}
void lower_upper() {
    // to lower & to upper 

    // for char 
    string s = "aB";
    s[0] = toupper(s[0]);
    s[1] = tolower(s[1]);
    cout << s << "\n";

    //for string
    // you can loop overall arrayand use tolower& toupper functions
    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    string str = "abd";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << "\n";

    // islower & isupper 
    char ch = 'A';
    cout << isupper(ch);
}
int main() {

}