#include<iostream>
using namespace std;
int main()
{
    int arr1[2][3],arr2[2][3];
    int i,j,sum[2][3];
    cout<<"enter elements for array 1"<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter element"<<j<<":";
            cin>>arr1[i][j];
        }
    }
    cout<<"enter elements for array 2"<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter element"<<j<<":";
            cin>>arr2[i][j];
        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<sum[i][j]<<" ";
    }
    cout<<endl;
    }     
}