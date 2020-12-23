#include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<math.h>
 #include<dos.h>
 void circles();
  int main()
 {
     int xf,yf,x1,y1,x2,y2,k=0,x3,y3,x4,y4;
     float t,i=0.0,j=0.0;
     initwindow(1050, 1050, "First Sample");
        xf=249;
        yf=251;
        t=3.14/180;
        for(;;i=i+0.2,j=j+0.6,k=k+6)
         {
             setcolor(0);
             circles();
                  
                  
         x1=xf+(250-xf)*cos((i-0.2)*t)-(250-yf)*sin((i-0.2)*t);
         y1=yf+(250-xf)*sin((i-0.2)*t)+(250-yf)*cos((i-0.2)*t);
         x2=xf+(250-xf)*cos((i-0.2)*t)-(350-yf)*sin((i-0.2)*t);
         y2=yf+(250-xf)*sin((i-0.2)*t)+(350-yf)*cos((i-0.2)*t);
         
         line(x1,y1,x2,y2);
         
         x1=xf+(250-xf)*cos((j-0.6)*t)-(250-yf)*sin((j-0.6)*t);
         y1=yf+(250-xf)*sin((j-0.6)*t)+(250-yf)*cos((j-0.6)*t);
         x2=xf+(250-xf)*cos((j-0.6)*t)-(400-yf)*sin((j-0.6)*t);
         y2=yf+(250-xf)*sin((j-0.6)*t)+(400-yf)*cos((j-0.6)*t);
         
         line(x1,y1,x2,y2);
         
         
         x1=xf+(250-xf)*cos((k-6)*t)-(250-yf)*sin((k-6)*t);
         y1=yf+(250-xf)*sin((k-6)*t)+(250-yf)*cos((k-6)*t);
         x2=xf+(250-xf)*cos((k-6)*t)-(450-yf)*sin((k-6)*t);
         y2=yf+(250-xf)*sin((k-6)*t)+(450-yf)*cos((k-6)*t);
         
         line(x1,y1,x2,y2);
         
         setcolor(12);
         circles();
         
         x1=xf+(250-xf)*cos(i*t)-(250-yf)*sin(i*t);
         y1=yf+(250-xf)*sin(i*t)+(250-yf)*cos(i*t);
         x2=xf+(250-xf)*cos(i*t)-(350-yf)*sin(i*t);
         y2=yf+(250-xf)*sin(i*t)+(350-yf)*cos(i*t);
         
         line(x1,y1,x2,y2);
         
         x1=xf+(250-xf)*cos(j*t)-(250-yf)*sin(j*t);
         y1=yf+(250-xf)*sin(j*t)+(250-yf)*cos(j*t);
         x2=xf+(250-xf)*cos(j*t)-(400-yf)*sin(j*t);
         y2=yf+(250-xf)*sin(j*t)+(400-yf)*cos(j*t);
         
         line(x1,y1,x2,y2);
         
         x1=xf+(250-xf)*cos(k*t)-(250-yf)*sin(k*t);
         y1=yf+(250-xf)*sin(k*t)+(250-yf)*cos(k*t);
         x2=xf+(250-xf)*cos(k*t)-(450-yf)*sin(k*t);
         y2=yf+(250-xf)*sin(k*t)+(450-yf)*cos(k*t);
         
         line(x1,y1,x2,y2);
        delay(850);
         
         
         }
 getch();
 }
  void circles()
  {
                  circle(250,250,1.5);
                  circle(250,250,2);
                  circle(250,250,3);
                  circle(250,250,4);
                  circle(250,250,225);
                  circle(30,250,4);
                  circle(471,250,4);
                  circle(250,29,4);
                  circle(250,471,4);
  }    
