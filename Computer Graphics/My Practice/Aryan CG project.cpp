#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int aryan;
    cout<<"\t\t\t\tAnnual Graphics Project\n\n";

    cout<<"1.Animated Ball.\n\n";
    cout<<"2.Static Bus.\n\n";
    cout<<"3.Statue Of Human.\n\n";
    cout<<"4.Rainbow Star.\n\n";
    cout<<"5.Animated Traffic Light.\n\n";
    cout<<"6.Flag Of Country.\n\n";
    cout<<"Please Enter The Number Between 1-6:\n\n";
    cin>>aryan;


    switch(aryan)
    {
    case 1:
    {
        int gd=DETECT,gm,i,x,y;
        initgraph(&gd,&gm,"");

        setcolor(YELLOW);
        circle(20,30,40);
        setfillstyle(1,BLUE);
        floodfill(15,25,YELLOW);

        setcolor(YELLOW);
        circle(20,40,40);
        setfillstyle(1,BLUE);
        floodfill(20,30,YELLOW);
        for(i=0; i<50; i++)
        {

            cleardevice();
            setcolor(YELLOW);
            circle(20*i,30,40);



            setcolor(YELLOW);
            circle(20,40*i,40);


            delay(10);




        }
        line(10,40,10,20);
        line(10,20,25,30);
        line(25,30,40,20);
        line(40,20,40,40);

        line(60,20,60,40);
        ellipse(62,30,270,90,10,10);

        line(80,20,100,30);
        line(100,30,120,20);
        line(100,30,100,40);

        line(130,40,130,20);
        line(130,20,150,20);
        line(130,30,150,30);
        line(130,40,150,40);

        line(160,40,180,20);
        line(180,20,190,40);
        line(170,30,185,30);

        line(200,40,220,40);
        line(220,40,220,30);
        line(220,30,200,30);
        line(200,30,200,20);
        line(200,20,220,20);

        line(230,40,240,40);
        line(230,20,240,20);
        line(235,20,235,40);

        line(250,40,250,20);
        line(250,20,270,40);
        line(270,40,270,20);

        rectangle(275,32,280,36);//
        line(280,36,280,40);
        line(278,40,280,40);


        line(285,20,295,20);
        line(285,20,285,40);
        line(285,40,295,40);

        line(300,20,310,20);
        line(300,20,300,30);
        line(300,30,310,30);
        line(310,30,310,40);
        line(300,40,310,40);


        line(320,20,320,40);
        line(320,20,330,20);
        line(320,30,325,30);
        line(320,40,330,40);

        line(340,20,340,40);
        line(337,25,340,20);


        circle(350,22,5);
        line(353,20,353,40);

        circle(368,30,10);

        line(380,20,390,20);
        line(390,20,390,30);
        line(380,30,390,30);
        line(380,30,380,40);
        line(380,40,390,40);

        circle(405,30,10);

        line(420,20,420,40);
        line(416,24,420,20);


        line(430,20,440,20);
        line(440,20,430,40);

        circle(455,30,10);

        line(470,20,480,20);
        line(470,20,470,30);
        ellipse(470,38,270,90,8,8);

        circle(490,25,8);
        circle(490,35,8);

        getch();
        closegraph();

        return 0;

    }
    break;
    case 2:
    {
        int gd=DETECT,gm,i,x,y;
        initgraph(&gd,&gm,"");


        setcolor(YELLOW);

        line(20,330,250,330);
        circle(80,350,20);
        circle(180,350,20);
        line(20,330,20,220);
        line(20,220,250,220);
        line(250,220,250,330);

        setfillstyle(SOLID_FILL,BLUE);
        floodfill(30,250,YELLOW);
        floodfill(80,350,YELLOW);
        floodfill(180,350,YELLOW);

        line(10,40,10,20);
        line(10,20,25,30);
        line(25,30,40,20);
        line(40,20,40,40);

        line(60,20,60,40);
        ellipse(62,30,270,90,10,10);

        line(80,20,100,30);
        line(100,30,120,20);
        line(100,30,100,40);

        line(130,40,130,20);
        line(130,20,150,20);
        line(130,30,150,30);
        line(130,40,150,40);

        line(160,40,180,20);
        line(180,20,190,40);
        line(170,30,185,30);

        line(200,40,220,40);
        line(220,40,220,30);
        line(220,30,200,30);
        line(200,30,200,20);
        line(200,20,220,20);

        line(230,40,240,40);
        line(230,20,240,20);
        line(235,20,235,40);

        line(250,40,250,20);
        line(250,20,270,40);
        line(270,40,270,20);

        rectangle(275,32,280,36);//
        line(280,36,280,40);
        line(278,40,280,40);


        line(285,20,295,20);
        line(285,20,285,40);
        line(285,40,295,40);

        line(300,20,310,20);
        line(300,20,300,30);
        line(300,30,310,30);
        line(310,30,310,40);
        line(300,40,310,40);


        line(320,20,320,40);
        line(320,20,330,20);
        line(320,30,325,30);
        line(320,40,330,40);

        line(340,20,340,40);
        line(337,25,340,20);


        circle(350,22,5);
        line(353,20,353,40);

        circle(368,30,10);

        line(380,20,390,20);
        line(390,20,390,30);
        line(380,30,390,30);
        line(380,30,380,40);
        line(380,40,390,40);

        circle(405,30,10);

        line(420,20,420,40);
        line(416,24,420,20);


        line(430,20,440,20);
        line(440,20,430,40);

        circle(455,30,10);

        line(470,20,480,20);
        line(470,20,470,30);
        ellipse(470,38,270,90,8,8);

        circle(490,25,8);
        circle(490,35,8);

        getch();
        closegraph();
        return 0;


    }
    break;
    case 3:
    {
        int gd=DETECT,gm,i,x,y;
        initgraph(&gd,&gm,"");
        setcolor(YELLOW);

        circle(100,100,20);
        line(70,120,130,120);
        line(70,120,70,200);
        line(130,120,130,200);
        line(70,200,130,200);
        line(30,130,70,130);
        line(30,140,70,140);
        line(30,130,30,140);
        line(130,130,170,130);
        line(130,140,170,140);
        line(170,130,170,140);
        line(80,200,80,240);
        line(90,200,90,240);
        line(80,240,90,240);
        line(120,200,120,240);
        line(110,200,110,240);
        line(110,240,120,240);

        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(110,110,YELLOW);
        floodfill(80,190,YELLOW);
        floodfill(35,135,YELLOW);
        floodfill(135,135,YELLOW);
        floodfill(85,205,YELLOW);
        floodfill(115,205,YELLOW);


        line(10,40,10,20);
        line(10,20,25,30);
        line(25,30,40,20);
        line(40,20,40,40);

        line(60,20,60,40);
        ellipse(62,30,270,90,10,10);

        line(80,20,100,30);
        line(100,30,120,20);
        line(100,30,100,40);

        line(130,40,130,20);
        line(130,20,150,20);
        line(130,30,150,30);
        line(130,40,150,40);

        line(160,40,180,20);
        line(180,20,190,40);
        line(170,30,185,30);

        line(200,40,220,40);
        line(220,40,220,30);
        line(220,30,200,30);
        line(200,30,200,20);
        line(200,20,220,20);

        line(230,40,240,40);
        line(230,20,240,20);
        line(235,20,235,40);

        line(250,40,250,20);
        line(250,20,270,40);
        line(270,40,270,20);

        rectangle(275,32,280,36);//
        line(280,36,280,40);
        line(278,40,280,40);


        line(285,20,295,20);
        line(285,20,285,40);
        line(285,40,295,40);

        line(300,20,310,20);
        line(300,20,300,30);
        line(300,30,310,30);
        line(310,30,310,40);
        line(300,40,310,40);


        line(320,20,320,40);
        line(320,20,330,20);
        line(320,30,325,30);
        line(320,40,330,40);

        line(340,20,340,40);
        line(337,25,340,20);


        circle(350,22,5);
        line(353,20,353,40);

        circle(368,30,10);

        line(380,20,390,20);
        line(390,20,390,30);
        line(380,30,390,30);
        line(380,30,380,40);
        line(380,40,390,40);

        circle(405,30,10);

        line(420,20,420,40);
        line(416,24,420,20);


        line(430,20,440,20);
        line(440,20,430,40);

        circle(455,30,10);

        line(470,20,480,20);
        line(470,20,470,30);
        ellipse(470,38,270,90,8,8);

        circle(490,25,8);
        circle(490,35,8);

        getch();
        closegraph();
        return 0;

    }
    break;
    case 4:
    {

        int gd=DETECT,gm,i,x,y;
        initgraph(&gd,&gm,"");

        setcolor(YELLOW);

        line(20,155,70,155);
        line(70,155,45,110);
        line(45,110,20,155);
        line(15,125,75,125);
        line(75,125,45,170);
        line(45,170,15,125);

        setfillstyle(SOLID_FILL,GREEN);
        floodfill(40,150,YELLOW);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(20,130,YELLOW);
        setfillstyle(SOLID_FILL,RED);

        floodfill(70,130,YELLOW);
        setfillstyle(SOLID_FILL,3);
        floodfill(25,150,YELLOW);
        setfillstyle(SOLID_FILL,6);
        floodfill(65,150,YELLOW);
        setfillstyle(SOLID_FILL,5);
        floodfill(45,115,YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(45,165,YELLOW);




        line(10,40,10,20);
        line(10,20,25,30);
        line(25,30,40,20);
        line(40,20,40,40);

        line(60,20,60,40);
        ellipse(62,30,270,90,10,10);

        line(80,20,100,30);
        line(100,30,120,20);
        line(100,30,100,40);

        line(130,40,130,20);
        line(130,20,150,20);
        line(130,30,150,30);
        line(130,40,150,40);

        line(160,40,180,20);
        line(180,20,190,40);
        line(170,30,185,30);

        line(200,40,220,40);
        line(220,40,220,30);
        line(220,30,200,30);
        line(200,30,200,20);
        line(200,20,220,20);

        line(230,40,240,40);
        line(230,20,240,20);
        line(235,20,235,40);

        line(250,40,250,20);
        line(250,20,270,40);
        line(270,40,270,20);

        rectangle(275,32,280,36);//
        line(280,36,280,40);
        line(278,40,280,40);


        line(285,20,295,20);
        line(285,20,285,40);
        line(285,40,295,40);

        line(300,20,310,20);
        line(300,20,300,30);
        line(300,30,310,30);
        line(310,30,310,40);
        line(300,40,310,40);


        line(320,20,320,40);
        line(320,20,330,20);
        line(320,30,325,30);
        line(320,40,330,40);

        line(340,20,340,40);
        line(337,25,340,20);


        circle(350,22,5);
        line(353,20,353,40);

        circle(368,30,10);

        line(380,20,390,20);
        line(390,20,390,30);
        line(380,30,390,30);
        line(380,30,380,40);
        line(380,40,390,40);

        circle(405,30,10);

        line(420,20,420,40);
        line(416,24,420,20);


        line(430,20,440,20);
        line(440,20,430,40);

        circle(455,30,10);

        line(470,20,480,20);
        line(470,20,470,30);
        ellipse(470,38,270,90,8,8);

        circle(490,25,8);
        circle(490,35,8);




        getch();
        closegraph();

    }
    break;
    case 5:
    {
        int gd=DETECT,gm,i,x,y;
        initgraph(&gd,&gm,"");

        rectangle(70,80,100,180);
        circle(85,95,12);

        circle(85,125,12);

        circle(85,155,12);



            while(1)//for(i=0;i<50;i++)
            {
                  setfillstyle(1,RED);
            floodfill(86,96,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(86,96,WHITE);
            setfillstyle(1,YELLOW);
            floodfill(86,126,WHITE);

            delay(1000);

            setcolor(WHITE);
            setfillstyle(1,BLACK);
            floodfill(86,126,WHITE);
            setfillstyle(1,GREEN);
            floodfill(86,156,WHITE);

            delay(1000);

            setfillstyle(1,BLACK);
            floodfill(86,156,WHITE);

            line(10,40,10,20);
            line(10,20,25,30);
            line(25,30,40,20);
            line(40,20,40,40);

            line(60,20,60,40);
            ellipse(62,30,270,90,10,10);

            line(80,20,100,30);
            line(100,30,120,20);
            line(100,30,100,40);

            line(130,40,130,20);
            line(130,20,150,20);
            line(130,30,150,30);
            line(130,40,150,40);

            line(160,40,180,20);
            line(180,20,190,40);
            line(170,30,185,30);

            line(200,40,220,40);
            line(220,40,220,30);
            line(220,30,200,30);
            line(200,30,200,20);
            line(200,20,220,20);

            line(230,40,240,40);
            line(230,20,240,20);
            line(235,20,235,40);

            line(250,40,250,20);
            line(250,20,270,40);
            line(270,40,270,20);

            rectangle(275,32,280,36);//
            line(280,36,280,40);
            line(278,40,280,40);


            line(285,20,295,20);
            line(285,20,285,40);
            line(285,40,295,40);

            line(300,20,310,20);
            line(300,20,300,30);
            line(300,30,310,30);
            line(310,30,310,40);
            line(300,40,310,40);


            line(320,20,320,40);
            line(320,20,330,20);
            line(320,30,325,30);
            line(320,40,330,40);

            line(340,20,340,40);
            line(337,25,340,20);


            circle(350,22,5);
            line(353,20,353,40);

            circle(368,30,10);

            line(380,20,390,20);
            line(390,20,390,30);
            line(380,30,390,30);
            line(380,30,380,40);
            line(380,40,390,40);

            circle(405,30,10);

            line(420,20,420,40);
            line(416,24,420,20);


            line(430,20,440,20);
            line(440,20,430,40);

            circle(455,30,10);

            line(470,20,480,20);
            line(470,20,470,30);
            ellipse(470,38,270,90,8,8);

            circle(490,25,8);
            circle(490,35,8);



            }









        getch();
        closegraph();
        return 0;

    }
    break;
    case 6:
    {

        int gd=DETECT,gm,i,x,y;
        initgraph(&gd,&gm,"");
        setcolor(YELLOW);
        rectangle(20,60,30,300);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(25,65,YELLOW);

        rectangle(30,80,150,150);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(35,85,YELLOW);

        circle(90,115,30);
        setfillstyle(SOLID_FILL,RED);
        floodfill(95,100,YELLOW);



        line(10,40,10,20);
        line(10,20,25,30);
        line(25,30,40,20);
        line(40,20,40,40);

        line(60,20,60,40);
        ellipse(62,30,270,90,10,10);

        line(80,20,100,30);
        line(100,30,120,20);
        line(100,30,100,40);

        line(130,40,130,20);
        line(130,20,150,20);
        line(130,30,150,30);
        line(130,40,150,40);

        line(160,40,180,20);
        line(180,20,190,40);
        line(170,30,185,30);

        line(200,40,220,40);
        line(220,40,220,30);
        line(220,30,200,30);
        line(200,30,200,20);
        line(200,20,220,20);

        line(230,40,240,40);
        line(230,20,240,20);
        line(235,20,235,40);

        line(250,40,250,20);
        line(250,20,270,40);
        line(270,40,270,20);

        rectangle(275,32,280,36);//
        line(280,36,280,40);
        line(278,40,280,40);


        line(285,20,295,20);
        line(285,20,285,40);
        line(285,40,295,40);

        line(300,20,310,20);
        line(300,20,300,30);
        line(300,30,310,30);
        line(310,30,310,40);
        line(300,40,310,40);


        line(320,20,320,40);
        line(320,20,330,20);
        line(320,30,325,30);
        line(320,40,330,40);

        line(340,20,340,40);
        line(337,25,340,20);


        circle(350,22,5);
        line(353,20,353,40);

        circle(368,30,10);

        line(380,20,390,20);
        line(390,20,390,30);
        line(380,30,390,30);
        line(380,30,380,40);
        line(380,40,390,40);

        circle(405,30,10);

        line(420,20,420,40);
        line(416,24,420,20);


        line(430,20,440,20);
        line(440,20,430,40);

        circle(455,30,10);

        line(470,20,480,20);
        line(470,20,470,30);
        ellipse(470,38,270,90,8,8);

        circle(490,25,8);
        circle(490,35,8);

        getch();
        closegraph();
        return 0;

    }
    break;



    }

    cout<<"\nThis Number is Invalid ,Please Press the Valid Number\n";


}
