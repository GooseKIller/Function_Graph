#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int xx=20,yy=xx;
bool who = false;
for(double y=yy;y>yy*-1;y--)
{
        for(double x=xx*(-1); x<xx;x++)
        {
		who = false;
                int b=32;
                if(y==x*abs(x)-x-6*x)
                {
                b = 120;
                }
                else if(y==0 or x==0)
                {
		who = true;
                b = abs(y+x)+50;
                }
        	cout<<char(b)<<setw(2);
        }cout<<"\n";
}
return 0;
}
