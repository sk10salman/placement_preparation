#include<iostream>
using namespace std;
int i=1;
void print(int num)
{
      printf("%d",i);
      if(i<num)
         {i++;print(num--);}
      else 
         exit(0);
}       
int main()
{
         int num=100;
         print(num);
}
         
