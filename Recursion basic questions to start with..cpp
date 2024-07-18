//some basic recursion problems to start with.
// Print1) Print linearly from 1 to N. (By backtrack).
#include<bits/stdc++.h>
using namespace std;
void print1(int n ,int i)
{
    if(i<1)
    return;
print1(n,i-1);
cout<<i<<endl;
}
//print2) print linearly from N to 1. (By backtrack).
void print2(int n ,int i)
{
    if(i>n)
    return;
print2(n,i+1);
cout<<i<<endl;
    

}

int main(){
    int n;
    cin>>n;
    print2(n,1);
}