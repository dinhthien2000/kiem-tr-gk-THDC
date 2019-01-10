#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float bandau;
	float lai;
	float kyvong;
	double a,b;
	int n;
	cout<<"nhap vao bandau,lai,kyvong: ";
	cin>>bandau>>lai>>kyvong;
    if(kyvong>bandau)
    {
    	lai=double(lai/100);
    	a=double(kyvong/bandau);
    	b=double(1+lai);
    	n=int(log(a)/log(b));
    	cout<<"so nam dat duoc tien ky vong: "<<n;
    }	
    else
    cout<<"ban da nhap sai: ";
    return 0 ;
 

}
