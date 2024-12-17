#include<stdio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,""),

    //F

    line(40,30,40,100);
    line(40,30,80,30);
    line(40,60,80,60);

    //A

    line(130,30,100,100);
    line(130,30,160,100);
    line(115,65,145,65);

    //R

    line(180,30,180,100);
    arc(180,50,270,90,20);
    line(180,70,210,100);

    //Z

    line(230,30,280,30);
    line(230,100,280,100);
    line(280,30,230,100);

    //A

    line(330,30,300,100);
    line(330,30,360,100);
    line(315,65,345,65);

    //N

    line(380,30,380,100);
    line(430,30,430,100);
    line(380,30,430,100);

    //A

    line(480,30,450,100);
    line(480,30,510,100);
    line(465,65,495,65);

    //AFRIN

    //A

    line(590,30,620,100);
    line(590,30,560,100);
    line(575,65,605,65);

    //F

    line(640,30,640,100);
    line(640,30,680,30);
    line(640,60,680,60);


    getch();
    closegraph();

}
