#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
using namespace std;


int main()
{
    int f;
    cout<<"\t\t\t\tSessional Final\n\n";

    cout<<"1.Flag.\n\n";
    cout<<"2.Home.\n\n";
    cout<<"3.Emoji.\n\n";
    cout<<"4.Traffic light.\n\n";
    cout<<"5.Animated Traffic Light.\n\n";
    cout<<"6.Flag Of Country.\n\n";
    cout<<"Enter A Number between (1-6):\n\n";
    cin>>f;

    switch(f)
    {
    case 1:
        {

    int gd = DETECT, gm;
    initwindow(1000,1200,"Flag");
    setcolor(GREEN);
    rectangle(200,610,855,300);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(201,301,GREEN);


    setcolor(RED);
    circle(500,460,100);
    setfillstyle(SOLID_FILL, RED);
    floodfill(500,460,RED);

    setcolor(WHITE);
    rectangle(180,850,200,300);
    setfillstyle(2,3);
    floodfill(181,310,WHITE);



    getch();
    closegraph();

        }
    break;
    case 2:
            {

    int gd = DETECT,gm,i,j;

    initwindow(1000,1200,"House");

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
            }
    break;
    case 3:
            {
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(800,600,"Emoji");

    setcolor(BLUE);
    circle(400,350,150);
    setfillstyle(1,YELLOW);
    floodfill(410,360,BLUE);

    setcolor(RED);
    circle(350,300,30);
    setfillstyle(1,WHITE);
    floodfill(360,310,RED);

    setcolor(RED);
    circle(350,300,15);
    setfillstyle(1,BLACK);
    floodfill(360,310,RED);

    setcolor(RED);
    circle(450,300,30);
    setfillstyle(1,WHITE);
    floodfill(460,310,RED);

    setcolor(RED);
    circle(450,300,15);
    setfillstyle(1,BLACK);
    floodfill(460,310,RED);

    setcolor(RED);
    rectangle(390,330,410,370);
    setfillstyle(1,WHITE);
    floodfill(402,347,RED);

    setcolor(RED);
    arc(400,350,190,350,80);
    setfillstyle(1,BLACK);
    floodfill(402,347,RED);

    getch();
    closegraph();
            }
    break;
    case 4:
            {
    int gd=DETECT,gm;
    initwindow(1000,1200,"Traffic light");


    rectangle(500,400,700,800);



    circle(600,470,60);


    circle(600,600,60);


    circle(600,730,60);

    while(1){

            setfillstyle(1,RED);
            floodfill(601,471,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(601,471,WHITE);
            setfillstyle(1,YELLOW);
            floodfill(601,601,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(601,601,WHITE);
            setfillstyle(1,GREEN);
            floodfill(601,731,WHITE);

            delay(1000);

            setfillstyle(1,BLACK);
            floodfill(601,731,WHITE);
}



    getch();
    closegraph();
    return 0;
            }
            break;
    case 5:
        {

        }

    }
    cout<<"\nInvalid Number!!! Please enter the number between 1-6\n";


}

