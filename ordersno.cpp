#include <iostream>
using namespace std;
int fun(int k)
{
    int i=1,c=0;
    while(i<=k)
      { 
          int j=2;
          while(i+j<=k)
            {
                c++;
                j++;
            }
            i++;
      }
      return c;
}
int main() {
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int K;
	    cin>>K;
	    cout<<fun(K)<<"\n";
	}
	return 0;
}
