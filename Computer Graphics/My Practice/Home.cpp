#include<iostream>
#include<graphics.h>

int main()
{
    int gd = DETECT,gm,i,j;

    initwindow(1000,1200,"House");



    setcolor(GREEN);
    //M

    line(40,30,40,100);
    line(100,30,100,100);
    line(40,30,70,60);
    line(70,60,100,30);

    //D

    line(130,30,130,100);

    arc(130,65,270,90,35);

    //F

    line(230,30,230,100);
    line(230,30,270,30);
    line(230,60,270,60);

    //A

    line(320,30,290,100);
    line(320,30,350,100);
    line(305,65,335,65);

    //H

    line(370,30,370,100);
    line(420,30,420,100);
    line(370,65,420,65);

    //A

    line(470,30,440,100);
    line(470,30,500,100);
    line(455,65,485,65);

    //D

    line(520,30,520,100);

    arc(520,65,270,90,35);


    //C

    arc(80,165,70,290,40);

    //S

    line(130,130,180,130);
    line(130,200,180,200);
    line(130,130,130,165);
    line(130,165,180,165);
    line(180,165,180,200);

    //E

    line(220,130,220,200);
    line(220,130,260,130);
    line(220,165,245,165);
    line(220,200,260,200);





    //2

    line(280,130,330,130);
    line(280,200,330,200);
    line(330,130,280,200);

    //0

    circle(375,165,40);

    //0

    circle(465,165,40);

    //1

    line(520,130,520,200);
    line(510,200,530,200);
    line(520,130,510,140);

    //0

    circle(575,165,40);

    //1

    line(640,130,640,200);
    line(630,200,650,200);
    line(640,130,630,140);

    //9

    line(670,130,710,130);
    line(670,130,670,165);
    line(710,130,710,165);
    line(670,165,710,165);
    line(710,165,710,200);
    line(710,200,670,200);

    //1

    line(740,130,740,200);
    line(730,200,750,200);
    line(740,130,730,140);

    //4

    line(760,165,800,165);
    line(800,130,800,200);
    line(800,130,760,165);

    //4

    line(820,165,860,165);
    line(860,130,860,200);
    line(860,130,820,165);







    //Home



//top


    setcolor(WHITE);

    line(100,500,250,350);
    line(250,350,300,500);

    line(250,350,650,350);
    line(650,350,750,500);
//wall

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);

    rectangle(100,500,300,700);
    floodfill(120,650,WHITE);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(300,500,750,700);

   // floodfill(200,400,WHITE);

    floodfill(320,650,YELLOW);




//gate
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);


    rectangle(150,550,250,700);
    rectangle(480,540,570,700);
//window
    rectangle(350,540,420,600);
    rectangle(630,540,700,600);

    floodfill(200,560,RED);
    floodfill(500,560,RED);
    floodfill(370,560,RED);
    floodfill(650,560,RED);







    getch();
    closegraph();

    return 0;



}


