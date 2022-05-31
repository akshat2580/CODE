#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;int i=1;
while(t--){
 long long r=0,num=0,cot=0,y=0;
  long long n;cin>>n;
    long long x;cin>>x;
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==0)
           r++; 
        else y++;
        
    }
    if(r==n)
     std::cout <<"Case #"<<i<<": "<< 0 << std::endl;
    else{
        int j=0,k=0;
       
             while(y>0) { 
                 y=0;
                 for(int i=0;i<n;i++){
            
            if(a[i]==1){j=i;break;}
            
        }
        for(int i=n-1;i>=0;i--){
            
            if(a[i]==1){k=i;break;}
            
        }
 
        for(int i=j;i<=k;i++){
            if(a[i]==1){a[i]--;}
            else {a[i]++;y++;}
         cot++;   
        }
       
        
         std::cout <<"Case #"<<i<<": "<< cot << std::endl;
    }
    
    
   i++; 
}}
   
    
}
    
    
    
    
    
	
	

