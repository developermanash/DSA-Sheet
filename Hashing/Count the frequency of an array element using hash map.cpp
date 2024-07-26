//Q) find the frequency of a number in an array by using hash map.
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;         //Declaring array size.
    cin>>n; 
    int arr [n];   //Declaring array of size n.
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    //declaring map for hashing.
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }
    //taking query size.
    int q;
    cin>>q;
    while(q--){
        int num;   //taking  the queries one by one.
        cin>>num;
       cout<<mpp[num]<<endl;   //Fetching the data from hash  map.

    }
    
     return 0;
}
