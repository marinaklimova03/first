#include <iostream>
using namespace std;
int main()
{
    int i,j=0,n,x,k=0,count=0,min=1000;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if ((a[i]%2==0)&&(a[j]%2==0))
            {
                x=(a[i]+a[j])/2;
                for (k=0;k<n;k++)
                {
                    if (a[k]==x) 
                    {
                        count++; 
                        if (x<min) min=x;
                    }
                }
                cout<<endl;
            }
        }
    }
    cout<<count<<" "<<min;
}
