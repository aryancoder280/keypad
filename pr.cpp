#include<iostream>
using namespace std;
void fun(char arr[],char key[],int j,int k,int num[],int n)
{
    //base case
    if(j==n)
    {
        cout<<key<<" ";
        return;
    }
    //recursive case
    int temp=num[j];
    if(temp!=7&&temp!=9)
    for(int i=3*(temp-1);i<=temp+3;i++)
    {
        key[k]=arr[i];
        fun(arr,key,j+1,k+1,num,n);
        key[j]='\0';
        return;
    }
}
int main()
{
   int t,n;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n;
    char key[4]={'\0'};
       int k=0;
       int num[n];
       for(int j=0;j<n;j++)
        cin>>num[j];
     char arr[]="abcdefghijklmnopqrstuvwxyz";
     int n=sizeof(arr)/sizeof(char);
       fun(arr,key,0,0,num,n);
   }
}
