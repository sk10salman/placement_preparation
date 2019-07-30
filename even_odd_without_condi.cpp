#include<iostream>
using namespace std;
int main()
{
     char arr[2][10] = {"even","odd"};
     int no;
     cout<<"enter the no";
     cin>>no;
     cout<<"\n"<<arr[no%2];
}
