#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//i=y j=x
int main()
{
int xx=10,yy=xx;
bool who=false;
for(double y=yy;y>=yy*-1;y-=1)
{
        for(double x=xx*(-1); x<=xx;x+=1)
        {
                who=false;
                int b;
                if(y==pow(x,2))
                {
                b = 120;
                }
                else if(y==0)
                {
                who=true;
                b = x;
                }
                else if(x==0)
                {
                who=true;
                b=y;
                }
                else
                {
                b =32;
                }
                if(who)
                {
                cout<<b;
                }
                else
                {
                cout<<char(b)<<setw(2) ;;
                }
        }cout<<"\n";
}
return 0;
}
