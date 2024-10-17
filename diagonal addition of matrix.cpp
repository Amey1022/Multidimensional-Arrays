#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter number of rows for a matrix:";
    cin>> r;
    cout<<"enter number of columns of matrix:";
    cin>> c;
    if (r==c)
{
    int arr[3][3];
    int i,j,sum=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"enter elements:";
            cin>>arr[i][j];
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i+j==r-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"sum:"<<sum;
}
else
    {
        cout<< "This is not a square matrix!";
    }
}