#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t--){
 long long r=0,c=10000000;
  long long n;cin>>n;
    long long x;cin>>x;
   // map<int ,int> m;
    // string s;cin>>s;
    int a[n];
vector<string> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    // for(auto i:v){
    //     string q=i;
    //     for(int j=0;j<q.size();j++ )
    //     r+=(int)q[j]-97;
    //     a[c++]=r;r=0;
    // }
    // sort(a,a+c);
    // vector<int>l;
    
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string s1=v[i],s2=v[j];
            for(int k=0;k<x;k++)
            r+=abs(s2[k]-s1[k]);
            c=min(c,r);r=0;
        }
    }

    std::cout << c << std::endl;
}
   
    
}
    
    
    
    
    
	
	

