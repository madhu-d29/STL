#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{  
   unordered_map<string, int> m;
   m["madhu"]=29;
   m["rahul"]=11;           
   m["rohit"]=45;
   cout<<m.size()<<endl; // returns no. of key-value pairs
   m.erase("rahul");    // erase function uses key as parameter 
   m.erase(m.begin()); // erase function also accepts iterator as a parameter
   cout<<m.size()<<endl;
   m.erase(m.begin(),m.end()); 
   cout<<m.size();
}

output:
3
1
0
  
