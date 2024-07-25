//Q) count character of a given string by hashing.

#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;     //string declaration.
   cin>>s;       //taking string input.

   //precompute
   int hash [256] = {0};          //declaring a zero size array for hashing this it is also known as hash array.
   for(int i = 0;i<s.size();i++){ 
    hash[s[i]]++ ;                /*it autocast the character to its AScII value.
                                  for eg : s[i]=a and the ASCII value of a is 97 so s[i] will be auto casted
                                  into 97  */
   }
   int q;                       
   cin>>q                                 //declaring query;
   while(q--){
    char c;
    cin>>c;                               //taking character as query
    //fetching
     cout<<hash[c] << endl;               
   }
   
  return 0;
            

}