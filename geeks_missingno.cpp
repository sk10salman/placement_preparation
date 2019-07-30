#include <iostream>
using namespace std;
int main() {
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N,add=0,m;
	    cin>>N;
	    m = (N*(N+1))/2;
	    int ar[N];
	    for(int j=0;j<N-1;j++)
	    {
	        cin>>ar[j];
	        add += ar[j];
	    }
	    cout<<m-add<<"\n";
	}
	return 0;
}
