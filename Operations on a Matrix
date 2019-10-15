#include <iostream>
using namespace std;
#define ll unsigned long long
int main() {
    ll int t;
    cin>>t;
    ll int n,m,q;
    ll int a,b,k=0;
    while(t--)
    {
        
        cin>>n>>m>>q;
        ll int row[n]={0};
        ll int col[m]={0};
        
        
        ll int re=0,ro=0,ce=0,co=0;
        
        for(ll int i=0;i<q;i++)
        {cin>>a>>b;
        if(a<=n && b<=m)
         {   row[a-1]++;
             col[b-1]++;
        }
        }
        
        for(ll int i=0;i<n;i++)
        if(row[i]&1)ro++;
        else re++;
        
        for(ll int j=0;j<m;j++)
        if(col[j]&1)co++;
        else ce++;
        
        k=re*co+ro*ce;
        cout<<k<<"\n";
        k=0;

    }
	return 0;
}
