#include<iostream>
using namespace std;
int size=0;
int stack[12];
void push(int data)
{
      if(size==10)
           cout<<"\n over flow\n";
      else
        {  stack[size]=data;size++;
         }
}
void pop()
{
         if(size==-1)
             cout<<"\nunder flow\n";
         else
          { size--;}
}
void display()
{
       for(int i=0;i<size;i++)
           cout<<stack[i]<<"\t";
}
int main()
{
    push(10); 
    push(30); 
    push(20); 
    push(5); 
    push(1); 
     while(1)
        {
               int data;
                cout<<"\n1.push  2.pop 3.display 4.size 5.exit";
                cin>>data;
                switch(data)
                    { case 1 :
                         int d;cout<<"enter push data";cin>>d;push(d);
                         break;
                      case 2 :
                            pop();break;case 3 : display();break;case 4 :cout<<size;break;default :exit(0);}

         
            }
      return 0;
}
