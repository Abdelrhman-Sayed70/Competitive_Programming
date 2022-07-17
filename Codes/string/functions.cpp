#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s = "abcdef";

  /*   1- erase
          - str.erase(int pos) remove from index pos to the end of the string
                str.erase(1)
                s = "a"  
     
          - str.erase(int pos , int length ) remove from pos to lenght 
                 s.erase(1, 1);
                 s = "acdef"  
  */

  /*
       2- substr (exactly like erase)
            - s.substr(1) 
              s = "bcdef"

            - s.substr(1,2)
              s = "bc" 
  */

  /*
       3- insert 
            -s.insert(int pos , string str)
                  s.insert(0,"A")
                  s = "Aabcdef"

            -s.insert(int pos , int size ,char ch) 
                  s.insert(2,4,'R')
                  s = "abRRRRcdef"

                  s.inset(0,1'R')
                  s = "Rabcdef"
  */

  /*   4- convert char to string 
          char ch = 'a' ;
          string tmp ;
          tmp+=ch ;
          tmp = "A" ;
  */

  /*
       5- to_string (convert number to string) 
          int num = 15  ; 
          string str = to_string(num) ;
  */

  /*
       6- append 
            s.append(int freq , char)
                s.append(3,F)
                s = "abcdefFFF"  
  */

  /*
        7- getline
            string s; 
            getline(cin,s) ;
  */
   
  /*
        8- assign
            - string.assign(string)
                string s , tmp="ab"
                s.assign(tmp)  ->  cleare s then make s = tmp { s = "ab" }
  */

  /*
        9- swap
            string a = "ab"  , b = "cd" 
            a.swap(b) ;
            a="cd" b ="ab"
  */

  /*
        10- find
            string s = "abac"
            s.find(string2)
            return the index of first occurence of "ab"
            if (s.find("ab")==-1) {cout << "not found" ;} 
            else cout << s.find("ab") output : 0 >> 

          - rfind
            string s= "ABAB"
            s.find("B") ; >> 3
            return the index of last occurence of "B"
  */


  /*    11- stoi & stol 
            
            - stoi convert string to integer (be sure that size of string does not exeeded size of int ~(1e9))                 
	            string s = "28";
	            int i = stoi(s);

            - stol convert string to long long  (be sure that size of string does not exeeded size of ll ~(1e18))
                string s = "28";
                ll i = stoi(s);
  */

  /*    12- tolower & toupper 
              string s; 
             
            - for string 
                * you can loop overall array and use tolower & toupper functions
                * transform(s.begin(), s.end(), s.begin(), ::toupper);

            - for char
                tolower(s[i]) // convert letter to lowercase
                toupper(s[i]) // convert letter to uppercase

  */

  /*
        13- islower & isupper for char 
            
            string s ;
            islower(s[i])
            isupper(s[i])
   
  */


}