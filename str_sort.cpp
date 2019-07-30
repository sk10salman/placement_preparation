#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int max=26;
void sorting(string &s)
{
                int count[max]={0};
                for(int i=0;i<s.length();i++)
                       count[s[i]-'a']++;
                int i=0;
                for(i=0;i<max;i++)
                   for(int j=0;j<count[i];j++)
                         cout<<char('a'+i);
}
int main()
{
          string s= "salmankhan";
          sorting(s);
          return 0;
}
