#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;
int main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
int x1=400,y1=300,x2=380,y2=450,x3=320,y3=350,x4=280,y4=450;
float angle;
line(x1,y1,x4,y4);
line(x4,y4,x2,y2);
line(x2,y2,x1,y1);
line(x4,y4,x1,y1);
cout<<"Enter the rotation angle : ";
cin>>angle;
angle=angle*3.1428/180;
x1=x1*cos(angle)-y1*sin(angle);
y1=(x1*sin(angle))+y1*cos(angle);
x2=x2*cos(angle)-y2*sin(angle);
y2=(x2*sin(angle))+y2*cos(angle);
x3=x3*cos(angle)-y3*sin(angle);
y3=(x3*sin(angle))+y3*cos(angle);
	system("CLS");
line(x1,y1,x4,y4);
line(x4,y4,x2,y2);
line(x2,y2,x1,y1);
line(x4,y4,x1,y1);
getch();
}
