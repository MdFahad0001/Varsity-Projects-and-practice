#include<stdio.h>
#include<graphics.h>

using namespace std;

int main()
{
    int gd = DETECT,gm;
    //initgraph(&gd,&gm,"");
    initwindow(1000,800,"Farzana Shila");

    //SHILA

    //S

    line(70,30,120,30);
    line(70,100,120,100);
    line(70,30,70,65);
    line(70,65,120,65);
    line(120,65,120,100);

    //H

    line(150,30,150,100);
    line(200,30,200,100);
    line(150,65,200,65);

    //I

    line(230,30,230,100);
    line(220,30,240,30);
    line(220,100,240,100);

    //L

    line(270,30,270,100);
    line(270,100,320,100);


    //A

    line(370,30,340,100);
    line(370,30,400,100);
    line(355,65,385,65);


    //CSE2001019118


    //C

    arc(70,155,70,290,35);



    //S

    line(110,120,160,120);
    line(110,190,160,190);
    line(110,120,160,190);
    line(160,120,160,135);
    line(110,190,110,175);

    //E

    line(180,120,180,190);
    line(180,120,220,120);
    line(180,155,210,155);
    line(180,190,220,190);







    getch();
    closegraph();
}
