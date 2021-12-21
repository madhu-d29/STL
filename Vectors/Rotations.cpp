#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    vector<int> vec{1,2,3,4};
    int rotL=3;
    int rotR=2;
    rotate(vec.begin(), vec.begin()+rotL, vec.end());
    rotate(vec.begin(), vec.begin()+vec.size()-rotR, vec.end());
    for(auto i:vec) cout<<i<<" ";
    return 0;
}

Output:
2 3 4 1 
