#include <iostream>
#include <cmath>

using namespace std;
//i=y j=x
int main()
{
int xx=20,yy=20;
for(int y=yy;y>yy*-1;y--)
{
        for(int x=xx*(-1); x<xx;x++)
        {
                string b;
                if(y==pow(x,2)-abs(7*x-6))//add your equation here
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
