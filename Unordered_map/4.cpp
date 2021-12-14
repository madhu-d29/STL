#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{  
   unordered_map<string, int> m;
   m["madhu"]=29;
   m["rahul"]=11;           
   m["rohit"]=45;
  if(m.count("madhu")>0) 
     cout<<"Found";
  else cout<<"Not Found";
   
}

//find() function returns an iterator
//count() function returns a value 0 if not found (or) 1 if found.

output:
Found
