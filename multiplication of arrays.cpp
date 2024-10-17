#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cout<<"enter number of rows for a matrix:";
    cin>> r1;
    cout<<"enter number of columns of matrix:";
    cin>> c1;
    cout<<"enter number of rows for a matrix:";
    cin>> r2;
    cout<<"enter number of columns of matrix:";
    cin>> c2;
    if (c1==r2)
    {
    int arr1[r1][c1], arr2[r2][c2],prod[r1][c2];
    int i,j,k;
    cout<<"enter elements for array 1"<<endl;
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"enter element"<<j<<":";
            cin>>arr1[i][j];
        }
    }cout<<"enter elements for array 2"<<endl;
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"enter element"<<j<<":";
            cin>>arr2[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            prod[i][j]=0;
            for (k=0;k<r2;k++)
            {
                prod[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for (i=0;i<r1;i++)
     {
            for(j=0;j<c2;j++)
            {
                cout<<prod[i][j]<<" ";
            }
        cout<<endl;
    }     
    
}
else 
{
    cout<<"please enter a valid matrix where c1=r2!";
}
}