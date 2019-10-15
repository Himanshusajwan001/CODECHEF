#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        int w;
        vector<int> a;
        for(int i=0;i<n;i++)
        {cin>>w;
        a.push_back(w);
        }
        long long int v,t,b,q;
        t=k%(3*n);
               for(int i=0;i<t;i++)
        {q=i%n;
            v=a[q];
        b=a[n-1-q];
        v=v^b;
        a[q]=v;
        }
        if(n%2!=0 && k>n)
        a[n/2]=0;
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
        
        
    }
	return 0;
}
