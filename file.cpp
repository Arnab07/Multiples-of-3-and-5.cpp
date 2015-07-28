#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int64_t n,sum,tmp;
    vector<int> no;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>tmp;
            no.push_back(tmp);
        }
    for(int i=0;i<n;i++)
        {
            sum=0;
            int64_t tp=no[i]-1;
          
            sum=(tp/3)*(2+(no[i]-(tp%3)))/2;
         
            sum+=(tp/5)*(4+(no[i]-(tp%5)))/2;
            sum-=(tp/15)*(14+(no[i]-(tp%15)))/2;
        cout<<sum<<endl;
        }
    return 0;
}
