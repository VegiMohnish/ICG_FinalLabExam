#include <graphics.h> 
  #include<stdio.h>

int main() 
{ 
int gd = DETECT, gm,i; 
initgraph(&gd, &gm, ""); 
//for(i=1;i<=50;i+=5)
//{
//ellipse(250, 200, 0, 360, 100+i, 50+i);
for(i=1;i<=50;i+=1)
{ 
ellipse(250, 200, 0, 360, 100-i, 50);
//delay(1);

//ellipse(250, 200, 0, 360, 50, 50);
//circle(250,200,50);

//closegraph(); 
delay(150);
cleardevice();
//circle(250,200,50);

}
getch(); 
return 0; 
} 


