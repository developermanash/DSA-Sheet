#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){

    
    for(int j=0;j<n;j++){
        cout<<"*";
    }
    cout<< endl; 
    } 
}
void print2(int n){
    for(int i=0;i<n;i++){

    
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<< endl; 
    } 
}
void print3(int n){
    for(int i=1;i<n;i++){

    
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<< endl; 
    } 
}
void print4(int n){
    for(int i=1;i<n;i++){

    
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<< endl; 
    } 
}
void print5(int n){
    for(int i=1;i<=n;i++){

    
    for(int j=0;j<=n-i;j++){
        cout<<"*";
    }
    cout<< endl; 
    } 
}
void print6(int n){
    for(int i=0;i<n;i++){

    
    for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }
    for(int k=0;k<2*i+1;k++){
        cout<<"*";
    }
    for(int l=0;l<=n-i-1;l++){
        cout<<" ";
    }
    cout<<endl;
    } 
}

void print7(int n){
    for(int i=0;i<n;i++){

    
    for(int j=0;j<=i;j++){
        cout<<" ";
    }
    for(int k=0;k<2*n-2*i-1;k++){
        cout<<"*";
    }
    for(int l=0;l<=i;l++){
        cout<<" ";
    }
    cout<<endl;
    } 
}
void print8(int n){
    for(int i=1;i<=2*n-1;i++){
        int star = i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void print9(int n){
    for(int i=0;i<n;i++){
        int start = 1;
        if(i % 2 ==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;

        }
        cout<<endl;
    }
}
void print10(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        
        
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
      

        
        for(int j=i;j>=1;j--){
            cout<<j;
            } 
        cout<<endl;
        space -=2;
    }
    
   

}
void print11(int n){
    int num =1 ;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num +=1;
        }
        cout<<endl;
    }
}
void print12(int n){
    for(int i=0;i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print13(int n){
    for(int i=0;i<n;i++){
        for(char ch ='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
} 
//very imp always remember this logic.
void print15(int n){
    for(int i=0;i<n;i++){

    //char ch= 'A';
    
    for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }
    char ch= 'A';
    int breakpoint = (2*i+1) / 2;
    for(int j=0;j<2*i+1;j++){
        cout<<ch;
       
        if(j<=breakpoint-1)ch++;
        else ch--;
        
    }
    for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
    } 
}  
void print16(int n){
    for(int i=0;i<n;i++){
        for(char ch= 'E'-i;ch<='E';ch++){
            cout<<ch<<"  ";
        }
        cout<<endl;
    }
}
void print17(int n){
    int spc = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        
        for(int k=0;k<=spc;k++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        spc+=2;
        cout<<endl;
    }
  
}
void print18(int n){
    int spc = (n*2)-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        
        for(int k=0;k<=spc;k++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        spc-=2;
        cout<<endl;
    }
  
}
void print19(int n){
    int inspc=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        //star
       
        int star = i;
        if(i>n) star = 2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";

       
        }
        //space
        
        for(int k=1;k<=inspc;k++){
            cout<<" ";

        }
         for(int j=1;j<=star;j++){
            cout<<"*";
       
        }
        cout<<endl;
        if(i<n)inspc -= 2;
        else inspc += 2;
         
    }
   
}
void print20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0|| i== n-1 || j==0 || j== n-1)cout<<"*";
            else cout<<" ";
            
        }
        cout<<endl;
    }
}

void print21(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top =i;
            int  left =j;
            int right = 2*n-2-i;
            int down = 2*n-2-j;
            cout<<n-min(min(top,down),min(right,left)); 
            
        }
        cout<<endl;
    }
}
    

int  main(){
int n;
cin>>n;

print21(n);
}