#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int xx=20,yy=xx;
for(double y=yy;y>yy*-1;y--)
{
        for(double x=xx*(-1); x<xx;x++)
        {
                int b=32;
                if(y==x*abs(x)-x-6*x)//equation here
                {
                b = 120;
                }
                else if(y==0 or x==0)
                {
                b = y+x;
                }
                cout<<char(b);
        }cout<<"\n";
}
return 0;
}
