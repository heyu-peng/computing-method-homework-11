#include<bits/stdc++.h>
using namespace std;
double y_p1(double x,double y,double h)
{
return y+h*(1-y);
}
int main(){
	double x=0,y=0,h=0.1;
	cout<<"x="<<x<<", y="<<y<<endl;
	for(;x<1.0-h;x+=h)
		y=y_p1(x,y,h),cout<<"x="<<x+h<<", y="<<y<<endl;
}
