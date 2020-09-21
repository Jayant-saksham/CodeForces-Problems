#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        long long sum=a+b+c+n;
        long long ans=sum%3;
        if(ans ==0)
        cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}