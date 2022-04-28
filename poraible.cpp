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
                string b;
                if(y==x*abs(x)-x-6*x)//equation here
                {
                b = 'x';
                }
                else if(y==0 or x==0)
                {
                b = '#';
                }
                else
                {
                b =' ';
                }
                cout<<b;
        }cout<<"\n";
}
return 0;
}
