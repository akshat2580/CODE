#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t--){
 long long r=0,c=0;
  long long n;cin>>n;
    // long long x;cin>>x;
   // map<int ,int> m;
    // string s;cin>>s;
    
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];r+=a[i];}
    sort(a,a+n);
    if(r-a[0]*n>=0)
    std::cout <<r-a[0]*n<< std::endl;
    else
    std::cout << 0 << std::endl;
}
   
    
}
    
    
    
    
    
	
	

