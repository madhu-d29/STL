#include <iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_map < int, int >m;
int get (int id)
{
  return m[id];
}

void set_value (int id, int bal)
{
  m[id] = bal;
}

int main ()
{
  int id = 1, bal = 2000;
  set_value (id, bal);
  cout << get (1);
}

output: 2000
