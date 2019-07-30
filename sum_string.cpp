#include <bits/stdc++.h> 
using namespace std; 

int chek(string str)
{
       int n = str.length();
       int sum=0,c=1;
       for(int i=n-1;i>=0;i--)
       {
                if(str[i]>='0' && str[i]<='9')
                       {sum += (str[i]-'0')*c;c=c*10;}
                else 
                       c=1;
        }
       return sum;
}

int main()
{
        string str ="1abc2x30yz67";
        int c= chek(str); 
        
        cout<<c<<endl;
       return 0;
}
