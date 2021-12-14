
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{  //No order in output
   unordered_map<string, int> m;
   m["madhu"]=29;
   m["rahul"]=11;            //insertion or accessing can be done by this
   //m["rohit"]=45;
   m.insert({"rohit",45});
   for(auto x:m) 
      cout<<x.first<<" "<<x.second<<endl;
    return 0;
}

Output:
rohit 45
rahul 11
madhu 29
