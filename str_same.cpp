#include <bits/stdc++.h> 
using namespace std; 

bool chek(string str,string a,string b)
{
         if(str.length() != a.length()+b.length())
             {
                  return false;
              }
            if(startwith(str,a)
                     {
                        endwith(str,b)
                           return true;
                      }

             if(startwith(str,b)
                     {
                        endwith(str,a)
                           return true;
                      }
         return false;
}

int main()
{
        string str ="geeksforgeeks";
        string a = "geeks",b="forgeeks";
        
        cout<<c<<endl;
       return 0;
}
