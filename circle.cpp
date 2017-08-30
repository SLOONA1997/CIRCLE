#include<iostream>
#include<graphics.h>

int main()
{

int x,y,r;
int d;
std::cout<<"ENTER VALUE OF RADIUS:  ";
std::cin>>r;

x=0;
y=r;
d=1-r;
//INITIALIZATION
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);

while(x<y)
{
putpixel(200+x,200+y,BLUE);
putpixel(200+x,200-y,BLUE);
putpixel(200-x,200+y,BLUE);
putpixel(200-x,200-y,BLUE);
putpixel(200+y,200+x,BLUE);
putpixel(200+y,200-x,BLUE);
putpixel(200-y,200+x,BLUE);
putpixel(200-y,200-x,BLUE);
 if(d<=0)
{
d=d+3+(2*x);
x=x+1;
}

else if(d>0)
{ d=d+5+(2*x-2*y);
   x=x+1;
   y=y-1;
    }


}
getch();
closegraph();
return 0;
}


