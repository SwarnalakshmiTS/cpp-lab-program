#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[50][50],temp[50];
    int i,size,j;
    cout<<"Enter number of names:";
    cin>>size;
    cout<<"Enter "<<size<<" names:";
    for(i=0;i<size;i++)
        cin>>str[i];
    char ch;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
       if(strcmp(str[i],str[j])>0)
       {
          strcpy(temp,str[i]);
          strcpy(str[i],str[j]);
          strcpy(str[j],temp);
       }}}

    cout<<"After sorting names are:\n";
    for(i=0;i<size;i++)
    {
        cout<<str[i]<<"\n";
    }
}
