#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(i==1)
            {if(a[i]<a[i-1])k++;}
        else if(i==2)
            {if(a[i]<a[i-1] && a[i]<a[i-2])k++;}
        else if(i==3)
            {if(a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3])k++;}
        else if(i==4)
            {if(a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3] && a[i]<a[i-4])k++;  }  
        else
            {if(a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3] && a[i]<a[i-4] && a[i]<a[i-5])k++;}
        }
        cout<<k<<endl;
        
    }
	return 0;
}
