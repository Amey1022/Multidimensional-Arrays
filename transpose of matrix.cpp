#include <iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter number of rows and columns:";
    cin>> r;
    int arr[r][r];
    int i,j;
    int trans[r][r];
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            cout<<"enter elements:";
            cin>>arr[i][j];
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            trans[i][j]=arr[j][i];
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
           cout<<trans[i][j]<<" ";
        }
    cout<<endl;
    }
}