#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s = "abcdef";

  /*   1- erase
          - str.erase(int pos) remove from index pos to the end of the string
                str.erase(1)
                s = a  
     
          - str.erase(int pos , int length ) remove from pos to lenght 
                 s.erase(1, 1);
                 s = acdef  
  */

  /*
       2- substr (exactly like erase)
            - s.substr(1) 
              s = bcdef

            - s.substr(1,2)
              s = bc 
  */

  /*
       3- insert 
            -s.insert(int pos , string str)
                  s.insert(0,"A")
                  s = Aabcdef

            -s.insert(int pos , int size ,char ch) 
                  s.insert(2,4,'R')
                  s = abRRRRcdef

                  s.inset(0,1'R')
                  s=Rabcdef
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
                s = abcdefFFF  
  */

  /*
        7- getline
            string s; 
            getline(s,cin) ;
  */
}