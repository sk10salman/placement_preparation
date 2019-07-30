#include<stdio.h>
#include <bits/stdc++.h> 
#include<string.h>
int m=0;
using namespace std;
int lenght(string str,int n)
{
      int i=n-1,v=0,c=1;
      for(i=n-1;i>=0;i--)
           {
                if(str[i]>='0' && str[i]<='9')
                    {
                           v= v+(str[i]-'0')*c;
                           c=c*10;
                         m++;  
                     }
                  else
                       break;
           }
           
       return v;
}
int main()
{
     string str ="salman6"; 
     int n= str.length();
     int t= lenght(str,n);
     cout<<t<<endl;
      if((n-m)==t)
            cout<<"yes";
      else 
            cout<<"NO:";
    return 0;
}
