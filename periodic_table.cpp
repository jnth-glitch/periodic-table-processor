#include<iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<fstream.h>
class Representative
{ public:
void dispsblock()
{
setcolor(RED);
int g1[]={0,0,30,0,30,350,0,350};
setfillstyle(1,2);
fillpoly(4,g1);
int x=50,y=0;
for(int i=0;i<7;i++)
{
rectangle(0,x,30,y);
x+=50;y+=50;
}
setcolor(RED);
int g2[]={60,50,30,50,30,350,60,350};
setfillstyle(1,2);
fillpoly(4,g2);
int x1=100,y1=50;
for(i=0;i<6;i++)
{
rectangle(30,x1,60,y1);
x1+=50;y1+50;
}
outtextxy(10,25,"H");
outtextxy(10,75,"Li");
outtextxy(10,125,"Na");
outtextxy(10,175,"K");
outtextxy(10,225,"Rb");
outtextxy(10,275,"Cs");
outtextxy(10,325,"Fr");
outtextxy(40,75,"Be");
outtextxy(40,125,"Mg");
outtextxy(40,175,"Ca");
outtextxy(40,225,"Sr");
outtextxy(40,275,"Ba");
outtextxy(40,325,"Ra");
}
void disppblock()
{
setcolor(RED);

int g13[]={360,50,390,50,390,350,360,350};
setfillstyle(1,7);
fillpoly(4,g13);
int x12=100,y12=50;
for(int i=0;i<6;i++)
{ rectangle(360,x12,390,y12);
x12+=50;y12+=50;
}
setcolor(RED);
int g14[]={390,50,420,50,420,350,390,350};
setfillstyle(1,7);
fillpoly(4,g14);
int x13=100,y13=50;
for( i=0;i<6;i++)
{ rectangle(390,x13,420,y13);
x13+=50;y13+=50;
}
setcolor(RED);
int g15[]={420,50,450,50,450,350,420,350};
setfillstyle(1,7);
fillpoly(4,g15);
int x14=100,y14=50;
for( i=0;i<6;i++)
{ rectangle(420,x14,450,y14);
x14+=50;y14+=50;
}
setcolor(RED);
int g16[]={450,50,480,50,480,350,450,350};
setfillstyle(1,7);
fillpoly(4,g16);
int x15=100,y15=50;
for( i=0;i<6;i++)
{ rectangle(450,x15,480,y15);
x15+=50;y15+=50;
}
setcolor(RED);
int g17[]={480,50,510,50,510,350,480,350};
setfillstyle(1,7);
fillpoly(4,g17);
int x16=100,y16=50;
for( i=0;i<6;i++)
{ rectangle(480,x16,510,y16);
x16+=50;y16+=50;
}
setcolor(RED);
int g18[]={510,0,540,0,540,350,510,350};
setfillstyle(1,6 );
fillpoly(4,g18);
int x17=50,y17=0;
for(i=0;i<7;i++)
{ rectangle(510,x17,540,y17);
x17+=50;y17+=50;
}
outtextxy(375,75,"B");
outtextxy(370,125,"Al");
outtextxy(370,175,"Ga");
outtextxy(370,225,"In");
outtextxy(370,275,"Tl");
outtextxy(365,325,"Uut");
outtextxy(405,75,"C");
outtextxy(400,125,"Si");
outtextxy(400,175,"Ge");
outtextxy(400,225,"Sn");
outtextxy(400,275,"Pb");
outtextxy(400,325,"Fl");
outtextxy(435,75,"N");
outtextxy(435,125,"P");
outtextxy(430,175,"As");
outtextxy(430,225,"Sb");
outtextxy(430,275,"Bi");
outtextxy(425,325,"Uup");
outtextxy(465,75,"O");
outtextxy(465,125,"S");
outtextxy(460,175,"Se");
outtextxy(460,225,"Te");
outtextxy(460,275,"Po");
outtextxy(460,325,"Lv");
outtextxy(495,75,"F");
outtextxy(490,125,"Cl");
outtextxy(490,175,"Br");
outtextxy(495,225,"I");
outtextxy(490,275,"At");
outtextxy(485,325,"Uus");
outtextxy(520,25,"He");
outtextxy(520,75,"Ne");
outtextxy(520,125,"Ar");
outtextxy(520,175,"Kr");
outtextxy(520,225,"Xe");
outtextxy(520,275,"Rn");
outtextxy(515,325,"Uuo");
}
};
class Transition:public Representative
{ public:
void dispdblock()
{
setcolor(RED);
int g3[]={60,150,90,150,90,350,60,350};
setfillstyle(1,8);
fillpoly(4,g3);
int x2=200,y2=150;
for(int i=0;i<4;i++)
{ rectangle(60,x2,90,y2);
x2+=50;y2+=50;
}
setcolor(RED);
int g4[]={90,150,120,150,120,350,90,350};
setfillstyle(1,8);
fillpoly(4,g4);
int x3=200,y3=150;
for(int m=0;m<4;m++)
{ rectangle(90,x3,120,y3);
x3+=50;y3+=50;
}
setcolor(RED);
int g5[]={120,150,150,150,150,350,120,350};
setfillstyle(1,8);
fillpoly(4,g5);
int x4=200,y4=150;
for( i=0;i<4;i++)
{ rectangle(120,x4,150,y4);
x4+=50;y4+=50;
}
setcolor(RED);
int g6[]={150,150,180,150,180,350,150,350};
setfillstyle(1,8);
fillpoly(4,g6);
int x5=200,y5=150;
for( i=0;i<4;i++)
{ rectangle(150,x5,180,y5);
x5+=50;y5+=50;
}
setcolor(RED);
int g7[]={180,150,210,150,210,350,180,350};
setfillstyle(1,8);
fillpoly(4,g7);
int x6=200,y6=150;
for( i=0;i<4;i++)
{ rectangle(180,x6,210,y6);
x6+=50;y6+=50;
}
setcolor(RED);
int g8[]={210,150,240,150,240,350,210,350};
setfillstyle(1,8);
fillpoly(4,g8);
int x7=200,y7=150;
for( i=0;i<4;i++)
{ rectangle(210,x7,240,y7);
x7+=50;y7+=50;
}
setcolor(RED);
int g9[]={240,150,270,150,270,350,240,350};
setfillstyle(1,8);
fillpoly(4,g9);
int x8=200,y8=150;
for( i=0;i<4;i++)
{ rectangle(240,x8,270,y8);
x8+=50;y8+=50;
}
setcolor(RED);
int g10[]={270,150,300,150,300,350,270,350};
setfillstyle(1,8);
fillpoly(4,g10);
int x9=200,y9=150;
for( i=0;i<4;i++)
{ rectangle(270,x9,300,y9);
x9+=50;y9+=50;
}
setcolor(RED);
int g11[]={300,150,330,150,330,350,300,350};
setfillstyle(1,8);
fillpoly(4,g11);
int x10=200,y10=150;
for( i=0;i<4;i++)
{ rectangle(300,x10,330,y10);
x10+=50;y10+=50;
}
setcolor(RED);
int g12[]={330,150,360,150,360,350,330,350};
setfillstyle(1,8);
fillpoly(4,g12);
int x11=200,y11=150;
for( i=0;i<4;i++)
{ rectangle(330,x11,360,y11);
x11+=50;y11+=50;
}
outtextxy(70,175,"Sc");
outtextxy(70,225,"Y");
outtextxy(100,175,"Ti");
outtextxy(100,225,"Zr");
outtextxy(100,275,"Hf");
outtextxy(100,325,"Rf");
outtextxy(135,175,"V");
outtextxy(130,225,"Nb");
outtextxy(130,275,"Ta");
outtextxy(130,325,"Db");
outtextxy(160,175,"Cr");
outtextxy(160,225,"Mo");
outtextxy(165,275,"W");
outtextxy(160,325,"Sg");
outtextxy(190,175,"Mn");
outtextxy(190,225,"Tc");
outtextxy(190,275,"Re");
outtextxy(190,325,"Bh");
outtextxy(220,175,"Fe");
outtextxy(220,225,"Ru");
outtextxy(220,275,"Os");
outtextxy(220,325,"Hs");
outtextxy(250,175,"Co");
outtextxy(250,225,"Rh");
outtextxy(250,275,"Ir");
outtextxy(250,325,"Mt");
outtextxy(280,175,"Ni");
outtextxy(280,225,"Pd");
outtextxy(280,275,"Pt");
outtextxy(280,325,"Ds");
outtextxy(310,175,"Cu");
outtextxy(310,225,"Ag");
outtextxy(310,275,"Au");
outtextxy(310,325,"Rg");
outtextxy(340,175,"Zn");
outtextxy(340,225,"Cd");
outtextxy(340,275,"Hg");
outtextxy(340,325,"Cn");
}
void dispfblock()
{ setcolor(RED);
int g19[]={60,375,510,375,510,455,60,455};
setfillstyle(1,12);
fillpoly(4,g19);
line(60,375,510,375);
line(60,415,510,415);
line(60,455,510,455);
line(60,375,60,455);
line(510,375,510,455);
int xl=90;
for(int k=0;k<15;k++)
{
line(xl,375,xl,455);
xl+=30;
}
outtextxy(70,395,"La");
outtextxy(100,395,"Ce");
outtextxy(130,395,"Pr");
outtextxy(160,395,"Nd");
outtextxy(190,395,"Pm");
outtextxy(220,395,"Sm");
outtextxy(250,395,"Eu");
outtextxy(280,395,"Gd");
outtextxy(310,395,"Tb");
outtextxy(340,395,"Dy");
outtextxy(370,395,"Ho");
outtextxy(400,395,"Er");
outtextxy(430,395,"Tm");
outtextxy(460,395,"Yb");
outtextxy(490,395,"Lu");
outtextxy(70,435,"Ac");
outtextxy(100,435,"Th");
outtextxy(130,435,"Pa");
outtextxy(163,435,"U");
outtextxy(190,435,"Np");
outtextxy(220,435,"Pu");
outtextxy(250,435,"Am");
outtextxy(280,435,"Cm");
outtextxy(310,435,"Bk");
outtextxy(340,435,"Cf");
outtextxy(370,435,"Es");
outtextxy(400,435,"Fm");
outtextxy(430,435,"Md");
outtextxy(460,435,"No");
outtextxy(490,435,"Lr");
}
};
void welcomescreen()
{ setcolor(RED);
int g1[]={0,0,30,0,30,350,0,350};
setfillstyle(1,2);
fillpoly(4,g1);
int x=50,y=0;
for(int i=0;i<7;i++)
{
rectangle(0,x,30,y);
x+=50;y+=50;
}
setcolor(RED);
int g2[]={60,50,30,50,30,350,60,350};
setfillstyle(1,2);
fillpoly(4,g2);
int x1=100,y1=50;
for(i=0;i<6;i++)
{
rectangle(30,x1,60,y1);
x1+=50;y1+50;
}
setcolor(RED);
int g13[]={360,50,390,50,390,350,360,350};
setfillstyle(1,7);
fillpoly(4,g13);
int x12=100,y12=50;
for( i=0;i<6;i++)
{
rectangle(360,x12,390,y12);
x12+=50;y12+=50;
}
setcolor(RED);
int g14[]={390,50,420,50,420,350,390,350};
setfillstyle(1,7);
fillpoly(4,g14);
int x13=100,y13=50;
for( i=0;i<6;i++)
{
rectangle(390,x13,420,y13);
x13+=50;y13+=50;
}
setcolor(RED);
int g15[]={420,50,450,50,450,350,420,350};
setfillstyle(1,7);
fillpoly(4,g15);
int x14=100,y14=50;
for( i=0;i<6;i++)
{
rectangle(420,x14,450,y14);
x14+=50;y14+=50;
}
setcolor(RED);
int g16[]={450,50,480,50,480,350,450,350};
setfillstyle(1,7);
fillpoly(4,g16);
int x15=100,y15=50;
for( i=0;i<6;i++)
{
rectangle(450,x15,480,y15);
x15+=50;y15+=50;
}
setcolor(RED);
int g17[]={480,50,510,50,510,350,480,350};
setfillstyle(1,7);
fillpoly(4,g17);
int x16=100,y16=50;
for( i=0;i<6;i++)
{
rectangle(480,x16,510,y16);
x16+=50;y16+=50;
}
setcolor(RED);
int g18[]={510,0,540,0,540,350,510,350};
setfillstyle(1,7);
fillpoly(4,g18);
int x17=50,y17=0;
for(i=0;i<7;i++)
{
rectangle(510,x17,540,y17);
x17+=50;y17+=50;
}
setcolor(RED);
int g3[]={60,150,90,150,90,350,60,350};
setfillstyle(1,8);
fillpoly(4,g3);
int x2=200,y2=150;
for( i=0;i<4;i++)
{
rectangle(60,x2,90,y2);
x2+=50;y2+=50;
}
setcolor(RED);
int g4[]={90,150,120,150,120,350,90,350};
setfillstyle(1,8);
fillpoly(4,g4);
int x3=200,y3=150;
for(int m=0;m<4;m++)
{
rectangle(90,x3,120,y3);
x3+=50;y3+=50;
}
setcolor(RED);
int g5[]={120,150,150,150,150,350,120,350};
setfillstyle(1,8);
fillpoly(4,g5);
int x4=200,y4=150;
for( i=0;i<4;i++)
{
rectangle(120,x4,150,y4);
x4+=50;y4+=50;
}
setcolor(RED);
int g6[]={150,150,180,150,180,350,150,350};
setfillstyle(1,8);
fillpoly(4,g6);
int x5=200,y5=150;
for( i=0;i<4;i++)
{
rectangle(150,x5,180,y5);
x5+=50;y5+=50;
}
setcolor(RED);
int g7[]={180,150,210,150,210,350,180,350};
setfillstyle(1,8);
fillpoly(4,g7);
int x6=200,y6=150;
for( i=0;i<4;i++)
{
rectangle(180,x6,210,y6);
x6+=50;y6+=50;
}
setcolor(RED);
int g8[]={210,150,240,150,240,350,210,350};
setfillstyle(1,8);
fillpoly(4,g8);
int x7=200,y7=150;
for( i=0;i<4;i++)
{
rectangle(210,x7,240,y7);
x7+=50;y7+=50;
}
setcolor(RED);
int g9[]={240,150,270,150,270,350,240,350};
setfillstyle(1,8);
fillpoly(4,g9);
int x8=200,y8=150;
for( i=0;i<4;i++)
{
rectangle(240,x8,270,y8);
x8+=50;y8+=50;
}
setcolor(RED);
int g10[]={270,150,300,150,300,350,270,350};
setfillstyle(1,8);
fillpoly(4,g10);
int x9=200,y9=150;
for( i=0;i<4;i++)
{
rectangle(270,x9,300,y9);
x9+=50;y9+=50;
}
setcolor(RED);
int g11[]={300,150,330,150,330,350,300,350};
setfillstyle(1,8);
fillpoly(4,g11);
int x10=200,y10=150;
for( i=0;i<4;i++)
{
rectangle(300,x10,330,y10);
x10+=50;y10+=50;
}
setcolor(RED);
int g12[]={330,150,360,150,360,350,330,350};
setfillstyle(1,8);
fillpoly(4,g12);
int x11=200,y11=150;
for( i=0;i<4;i++)
{
rectangle(330,x11,360,y11);
x11+=50;y11+=50;
}
settextstyle(0, HORIZ_DIR,2);
outtextxy(90,15,"PERIODIC TABLE PROCESSING");
outtextxy(75,380,"Press any key to continue:");
char ch;
scanf("%s",&ch);
settextstyle(0,HORIZ_DIR,1);
}
void grpsearch()
{
cleardevice();
printf("\nEnter group number to display:");
int gno;
scanf("%d",&gno);
switch(gno)
{
case 1: cleardevice();
setcolor(RED);
int g1[]={0,0,30,0,30,350,0,350};
setfillstyle(1,2);
fillpoly(4,g1);
int x=50,y=0;
for(int i=0;i<7;i++)
{
rectangle(0,x,30,y);
x+=50;y+=50;
}
outtextxy(10,25,"H");
outtextxy(10,75,"Li");
outtextxy(10,125,"Na");
outtextxy(10,175,"K");
outtextxy(10,225,"Rb");
outtextxy(10,275,"Cs");
outtextxy(10,325,"Fr");
break;
case 2:
cleardevice();
setcolor(RED);
int g2[]={60,50,30,50,30,350,60,350};
setfillstyle(1,3);
fillpoly(4,g2);
int x1=100,y1=50;
for(i=0;i<6;i++)
{
rectangle(30,x1,60,y1);
x1+=50;y1+50;
}
outtextxy(40,75,"Be");
outtextxy(40,125,"Mg");
outtextxy(40,175,"Ca");
outtextxy(40,225,"Sr");
outtextxy(40,275,"Ba");
outtextxy(40,325,"Ra");
break;
case 3: cleardevice();
setcolor(RED);
int g3[]={60,150,90,150,90,350,60,350};
setfillstyle(1,9);
fillpoly(4,g3);
int x2=200,y2=150;
for(i=0;i<4;i++)
{
rectangle(60,x2,90,y2);
x2+=50;y2+=50;
}
outtextxy(70,175,"Sc");
outtextxy(70,225,"Y");
setcolor(RED);
int g19[]={60,375,510,375,510,455,60,455};
setfillstyle(1,12);
fillpoly(4,g19);
line(60,375,510,375);
line(60,415,510,415);
line(60,455,510,455);
line(60,375,60,455);
line(510,375,510,455);
int xl=90;
for(int k=0;k<15;k++)
{
line(xl,375,xl,455);
xl+=30;
}
outtextxy(70,395,"La");
outtextxy(100,395,"Ce");
outtextxy(130,395,"Pr");
outtextxy(160,395,"Nd");
outtextxy(190,395,"Pm");
outtextxy(220,395,"Sm");
outtextxy(250,395,"Eu");
outtextxy(280,395,"Gd");
outtextxy(310,395,"Tb");
outtextxy(340,395,"Dy");
outtextxy(370,395,"Ho");
outtextxy(400,395,"Er");
outtextxy(430,395,"Tm");
outtextxy(460,395,"Yb");
outtextxy(490,395,"Lu");
outtextxy(70,435,"Ac");
outtextxy(100,435,"Th");
outtextxy(130,435,"Pa");
outtextxy(163,435,"U");
outtextxy(190,435,"Np");
outtextxy(220,435,"Pu");
outtextxy(250,435,"Am");
outtextxy(280,435,"Cm");
outtextxy(310,435,"Bk");
outtextxy(340,435,"Cf");
outtextxy(370,435,"Es");
outtextxy(400,435,"Fm");
outtextxy(430,435,"Md");
outtextxy(460,435,"No");
outtextxy(490,435,"Lr");
break;
case 4: cleardevice();
setcolor(RED);
int g4[]={90,150,120,150,120,350,90,350};
setfillstyle(1,9);
fillpoly(4,g4);
int x3=200,y3=150;
for(int m=0;m<4;m++)
{
rectangle(90,x3,120,y3);
x3+=50;y3+=50;
}
outtextxy(100,175,"Ti");
outtextxy(100,225,"Zr");
outtextxy(100,275,"Hf");
outtextxy(100,325,"Rf");
break;
case 5: cleardevice();
setcolor(RED);
int g5[]={120,150,150,150,150,350,120,350};
setfillstyle(1,9);
fillpoly(4,g5);
int x4=200,y4=150;
for( i=0;i<4;i++)
{
rectangle(120,x4,150,y4);
x4+=50;y4+=50;
}
outtextxy(135,175,"V");
outtextxy(130,225,"Nb");
outtextxy(130,275,"Ta");
outtextxy(130,325,"Db");
break;
case 6: cleardevice();
setcolor(RED);
int g6[]={150,150,180,150,180,350,150,350};
setfillstyle(1,9);
fillpoly(4,g6);
int x5=200,y5=150;
for( i=0;i<4;i++)
{
rectangle(150,x5,180,y5);
x5+=50;y5+=50;
}
outtextxy(160,175,"Cr");
outtextxy(160,225,"Mo");
outtextxy(165,275,"W");
outtextxy(160,325,"Sg");
break;
case 7: cleardevice();
setcolor(RED);
int g7[]={180,150,210,150,210,350,180,350};
setfillstyle(1,9);
fillpoly(4,g7);
int x6=200,y6=150;
for( i=0;i<4;i++)
{
rectangle(180,x6,210,y6);
x6+=50;y6+=50;
}
outtextxy(190,175,"Mn");
outtextxy(190,225,"Tc");
outtextxy(190,275,"Re");
outtextxy(190,325,"Bh");
break;
case 8: cleardevice();
setcolor(RED);
int g8[]={210,150,240,150,240,350,210,350};
setfillstyle(1,9);
fillpoly(4,g8);
int x7=200,y7=150;
for( i=0;i<4;i++)
{
rectangle(210,x7,240,y7);
x7+=50;y7+=50;
}
outtextxy(220,175,"Fe");
outtextxy(220,225,"Ru");
outtextxy(220,275,"Os");
outtextxy(220,325,"Hs");
break;
case 9: cleardevice();
setcolor(RED);
int g9[]={240,150,270,150,270,350,240,350};
setfillstyle(1,9);
fillpoly(4,g9);
int x8=200,y8=150;
for( i=0;i<4;i++)
{
rectangle(240,x8,270,y8);
x8+=50;y8+=50;
}
outtextxy(250,175,"Co");
outtextxy(250,225,"Rh");
outtextxy(250,275,"Ir");
outtextxy(250,325,"Mt");
break;
case 10: cleardevice();
setcolor(RED);
int g10[]={270,150,300,150,300,350,270,350};
setfillstyle(1,9);
fillpoly(4,g10);
int x9=200,y9=150;
for( i=0;i<4;i++)
{
rectangle(270,x9,300,y9);
x9+=50;y9+=50;
}
outtextxy(280,175,"Ni");
outtextxy(280,225,"Pd");
outtextxy(280,275,"Pt");
outtextxy(280,325,"Ds");
break;
case 11: cleardevice();
setcolor(RED);
int g11[]={300,150,330,150,330,350,300,350};
setfillstyle(1,9);
fillpoly(4,g11);
int x10=200,y10=150;
for( i=0;i<4;i++)
{
rectangle(300,x10,330,y10);
x10+=50;y10+=50;
}
outtextxy(310,175,"Cu");
outtextxy(310,225,"Ag");
outtextxy(310,275,"Au");
outtextxy(310,325,"Rg");
break;
case 12: cleardevice();
setcolor(RED);
int g12[]={330,150,360,150,360,350,330,350};
setfillstyle(1,9);
fillpoly(4,g12);
int x11=200,y11=150;
for( i=0;i<4;i++)
{
rectangle(330,x11,360,y11);
x11+=50;y11+=50;
}
outtextxy(340,175,"Zn");
outtextxy(340,225,"Cd");
outtextxy(340,275,"Hg");
outtextxy(340,325,"Cn");
break;
case 13: cleardevice();
setcolor(RED);
int g13[]={360,50,390,50,390,350,360,350};
setfillstyle(1,7);
fillpoly(4,g13);
int x12=100,y12=50;
for(i=0;i<6;i++)
{
rectangle(360,x12,390,y12);
x12+=50;y12+=50;
}
outtextxy(375,75,"B");
outtextxy(370,125,"Al");
outtextxy(370,175,"Ga");
outtextxy(370,225,"In");
outtextxy(370,275,"Tl");
break;
case 14: cleardevice();
setcolor(RED);
int g14[]={390,50,420,50,420,350,390,350};
setfillstyle(1,13);
fillpoly(4,g14);
int x13=100,y13=50;
for( i=0;i<6;i++)
{
rectangle(390,x13,420,y13);
x13+=50;y13+=50;
}
outtextxy(405,75,"C");
outtextxy(400,125,"Si");
outtextxy(400,175,"Ge");
outtextxy(400,225,"Sn");
outtextxy(400,275,"Pb");
outtextxy(400,325,"Fl");
break;
case 15: cleardevice();
setcolor(RED);
int g15[]={420,50,450,50,450,350,420,350};
setfillstyle(1,6);
fillpoly(4,g15);
int x14=100,y14=50;
for( i=0;i<6;i++)
{
rectangle(420,x14,450,y14);
x14+=50;y14+=50;
}
outtextxy(435,75,"N");
outtextxy(435,125,"P");
outtextxy(430,175,"As");
outtextxy(430,225,"Sb");
outtextxy(430,275,"Bi");
outtextxy(425,325,"Uup");
break;
case 16: cleardevice();
setcolor(RED);
int g16[]={450,50,480,50,480,350,450,350};
setfillstyle(1,7);
fillpoly(4,g16);
int x15=100,y15=50;
for( i=0;i<6;i++)
{
rectangle(450,x15,480,y15);
x15+=50;y15+=50;
}
outtextxy(465,75,"O");
outtextxy(465,125,"S");
outtextxy(460,175,"Se");
outtextxy(460,225,"Te");
outtextxy(460,275,"Po");
outtextxy(460,325,"Lv");
break;
case 17: cleardevice();
setcolor(RED);
int g17[]={480,50,510,50,510,350,480,350};
setfillstyle(1,8);
fillpoly(4,g17);
int x16=100,y16=50;
for( i=0;i<6;i++)
{
rectangle(480,x16,510,y16);
x16+=50;y16+=50;
}
outtextxy(495,75,"F");
outtextxy(490,125,"Cl");
outtextxy(490,175,"Br");
outtextxy(495,225,"I");
outtextxy(490,275,"At");
outtextxy(485,325,"Uus");
break;
case 18: cleardevice();
setcolor(RED);
int g18[]={510,0,540,0,540,350,510,350};
setfillstyle(1,18);
fillpoly(4,g18);
int x17=50,y17=0;
for(i=0;i<7;i++)
{
rectangle(510,x17,540,y17);
x17+=50;y17+=50;
}
outtextxy(520,25,"He");
outtextxy(520,75,"Ne");
outtextxy(520,125,"Ar");
outtextxy(520,175,"Kr");
outtextxy(520,225,"Xe");
outtextxy(520,275,"Rn");
outtextxy(515,325,"Uuo");
break;
}
}
void blocksearch()
{
Transition T1;
cleardevice();
printf("\nEnter the block to be displayed:");
char ch2;
scanf("%s",&ch2);
if(ch2=='s'||ch2=='S')
{ cleardevice();
T1.dispsblock();
outtextxy (70,30,"Press Y to continue,N to go to the
main menu");
char S;
scanf("%s",&S);
if(S=='Y'||S=='y')
{
cleardevice();
ifstream fs("SBLOCK.txt");
char SB;
while(!fs.eof())
{
fs.get(SB);
cout<<SB;
}
}
}
else if(ch2=='p'||ch2=='P')
{
cleardevice();
T1.disppblock();
outtextxy(10,20,"Press Y to continue,N to go to the main
menu");
char P;
scanf("%s",&P);
if(P=='Y'||P=='y')
{ cleardevice();
ifstream fp("PBLOCK.txt");
char PB;
while(!fp.eof())
{
fp.get(PB);
cout<<PB;
}
}
}
else if(ch2=='d'||ch2=='D')
{
cleardevice();
T1.dispdblock();
outtextxy(135,360,"Press Y to continue,N to go to the
main menu");
char D;
scanf("%s",&D);
if(D=='Y'||D=='y')
{ cleardevice();
ifstream fd("d.txt");
char DB;
while(!fd.eof())
{
fd.get(DB);
cout<<DB;
}
}
}
else if(ch2='f'||ch2=='F')
{
cleardevice();
T1.dispfblock();
outtextxy(50,40,"Press Y to continue,N to go to the main
menu");
char F;
scanf("%s",&F);
if(F=='Y'||F=='y')
{ cleardevice();
ifstream ff("FBLOCK.txt");
char FB;
while(!ff.eof())
{
ff.get(FB);
cout<<FB;
}
}
}
}
void dispall()
{
cleardevice();
Transition T;
T.dispsblock();
T.dispfblock();
T.dispdblock();
T.disppblock();
}
void main()
{
int gdriver = DETECT, gmode, errorcode;
int left, top, right, bottom;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
if (errorcode != grOk)
{
printf("Graphics error: %s\n", grapherrormsg(errorcode));
printf("Press any key to halt:");
getch();
exit(0);
}
welcomescreen();
int ch1;
do
{
mainscreen:
cleardevice();
printf("\r\n PERIODIC TABLE PROCESSING");
printf("\r\n1.History of peridic table\r\n2.Display\r
\n3.Display blockwise\r\n4.Display groupwise\r\n5.Periodic trends
\n6.Exit");
printf("\r\nEnter your choice:");
scanf("%d",&ch1);
switch(ch1)
{
case 1: {
cleardevice();
ifstream fin("HOPTABLE.txt");
char ch;
while(!fin.eof())
{
fin.get(ch);
cout<<ch;
}
getch();
goto mainscreen;
}
break;
case 2:
dispall();
getch();
goto mainscreen;
break;
case 3: blocksearch();
getch();
goto mainscreen;
break;
case 4: grpsearch();
getch();
goto mainscreen;
break;
case 5: {
cleardevice();
ifstream f("TRENDS.txt");
char s;
while(!f.eof())
{
f.get(s);
cout<<s;
}
getch();
}
goto mainscreen;
break;
case 6: break;
default : printf("\r\nWrong option.....Please enter again!!!");
exit(0);
}
}while(ch1!=6);
getch();
closegraph();
}
