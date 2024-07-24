#include<iostream> 
#include<graphics.h> 
#include<cmath> 
#include<ctime>


#define PI 3.1415 
using namespace std; 
int main(){
initwindow(1000,1000,"CLOCK PROJECT");

int page=0;

int x=500 ,y=500, i; 
while(1)
{ settextstyle(8,0,3);
 outtextxy(400,150,"ANALOG CLOCK");
setfillstyle(HATCH_FILL, BLUE); 
setactivepage(page); 
setvisualpage(1-page); 
setbkcolor(WHITE); 
cleardevice();
setcolor(BLACK); 
for(i=0;i<=20;i+=1)
{setcolor(CYAN); 
circle(500,500,280-i);
//readimagefile("pexels-deeana-arts-2565222_960x960.jpg",290,290,720,720);
 } 
circle(500,500,5);
outtextxy(500+200*sin(1*PI/6)-5 , 500-200*cos(1*PI/6) , "1"); 
setfillstyle(EMPTY_FILL,BLUE);
outtextxy(500+200*sin(2*PI/6)-5 , 500-200*cos(2*PI/6) , "2"); 
outtextxy(500+200*sin(3*PI/6)-5 , 500-200*cos(3*PI/6) , "3"); 
outtextxy(500+200*sin(4*PI/6)-5 , 500-200*cos(4*PI/6) , "4"); 
outtextxy(500+200*sin(5*PI/6)-5 , 500-200*cos(5*PI/6) , "5"); 
outtextxy(500+200*sin(6*PI/6)-5 , 500-200*cos(6*PI/6) , "6"); 
outtextxy(500+200*sin(7*PI/6)-5 , 500-200*cos(7*PI/6) , "7"); 
outtextxy(500+200*sin(8*PI/6)-5 , 500-200*cos(8*PI/6) , "8"); 
outtextxy(500+200*sin(9*PI/6)-10 , 500-200*cos(9*PI/6) , "9"); 
outtextxy(500+200*sin(10*PI/6)-10 , 500-200*cos(10*PI/6) , "10"); 
outtextxy(500+200*sin(11*PI/6)-10 , 500-200*cos(11*PI/6) , "11"); 
outtextxy(500+200*sin(12*PI/6)-5 , 500-200*cos(12*PI/6) , "12"); 
time_t now = time(0);
tm *ltm = localtime(&now); 
system("cls");
cout<<ltm->tm_hour<<" "<<ltm->tm_min;

setcolor(RED);
line(500,500,500+150*sin(ltm->tm_hour * PI/6),500-150*cos(ltm->tm_hour * PI/6));

setcolor(GREEN);

line(500,500,500+170*sin(ltm->tm_min * PI/30),500-170*cos(ltm->tm_min * PI/30));
 
setcolor(BLACK);

line(500,500,500+190*sin(ltm->tm_sec * PI/30),500-190*cos(ltm->tm_sec * PI/30));

if(GetAsyncKeyState(VK_RETURN)) break;
delay(10); page = 1-page;
}

closegraph(); return 0;
}


