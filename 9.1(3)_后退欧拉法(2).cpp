#include<bits/stdc++.h>
using namespace std;
double y_p1(double x,double y,double h)
{
return -(y-pow(8*h*h*x-8*h*x-8*h*h+8*h*h*h+y*y,0.5))/(2*(h-1));
}
int main(){
	double x=0,y=1,h=0.1;
	cout<<"x="<<x<<", y="<<y<<endl;
	for(;x<1.0-h;x+=h)
		y=y_p1(x,y,h),cout<<"x="<<x+h<<", y="<<y<<endl;
}
