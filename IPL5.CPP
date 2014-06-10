#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<Dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
class IPL
{public:
void mainpage();
void auction();
void title();
void form();
void conditions();
void sponsors();
void booking();
void history();
void ipl6();
void quiz();
}ob;
void IPL:: auction()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_MAGENTA);
char ch; int a;
setcolor(1);
outtextxy(180,80,"WELCOME TO THE AUCTION OF IPL SEASON-6!");
setcolor(10);
outtextxy(1,110,"This season,as we all know,the team of kochi has been resented and now the");
outtextxy(1,120,"season is going to function with only 8 teams! The auctions will soon be held");
outtextxy(1,130,"providing IPL-6 a boosting start!");
outtextxy(50,160,"Want to continue to know more about IPL? (y/n)");
gotoxy(8,13);
cin>>ch;
if(ch=='y')
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(10,60,"Auction Date: 8th Feb,2013");
outtextxy(10,70,"Auction Venue: Delhi");
setcolor(4);
outtextxy(0,100,"                  Million Dollar Probables       Minimum Price(in rs.)");
outtextxy(0,120,"                       Ravindra Jadeja            3.5 crores");
outtextxy(0,130,"                       Virat Kohli                5.6 crores");
outtextxy(0,140,"                       Chris Gayle                5 crores");
outtextxy(0,150,"                       Dale Steyn                 6.2 crores");
outtextxy(0,180,"The following players have been retained by their respective teams:");
outtextxy(0,190,"i. Shane Warne & Siddarth Trivedi by R.R.");
outtextxy(0,200,"ii. Sachin Tendulkar by Mumbai Indians");
outtextxy(0,210,"iii. Virender Sehwag & Kevin Pietersen by Delhi Daredevils");
outtextxy(0,220,"iv.  MS Dhoni by CSK & much more..");
outtextxy(10,240,"But since its IPL-6,it has a brought a twist along!");
outtextxy(10,260,"PRESS ENTER TO CONTINUE..!!!");
}
else if(ch=='n')
ob.mainpage();
getch();
clrscr();
gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(0,80,"This season, the ones who aint among the million dollar probables have");
outtextxy(0,90,"put on to the open list with minimum bidding price of 1 crore each!");
outtextxy(0,100,"Each team owner should contact auction conducting association for ");
outtextxy(0,110,"further process!");
outtextxy(0,130,"    But this offer is exclusively for our DLF Cricket Lovers!");
outtextxy(0,150,"    Want your favourite player to get a higher price & play for your favourite team?");
outtextxy(0,170,"    Want your favourite player to go higher?");
outtextxy(0,200,"  Then follow the details below by pressing ENTER!!");
getch();
clrscr();
gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(1,80,"The following players have been given codes and you have to add a vote for");
outtextxy(1,90,"them.If the votes gathered in 10 days are above the lower limit, the players");
outtextxy(1,100,"value will be raised!");
setcolor(4);
outtextxy(1,130,"1.Mitchell Johnson");
outtextxy(1,140,"2.RP Singh");
outtextxy(1,150,"3.Mike Hussey");
outtextxy(1,160,"4.Herchelle Gibbs");
outtextxy(1,170,"5.Steve Waugh");
outtextxy(1,180,"6.Yuvraj Singh");
outtextxy(1,190,"7.Suresh Raina");
outtextxy(1,200,"8.Manpreet Juneja");
outtextxy(1,210,"9.Brett Lee");
outtextxy(0,240,"          TO GOTO TO THE VOTING SECTION PRESS ENTER TO CONTINUE!");
getch();
clrscr();
gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_GREEN);
setcolor(5);
outtextxy(200,80,"VOTE FOR YOUR PLAYER");
setcolor(1);
outtextxy(0,115,"     Enter the number of ur player:");
gotoxy(37,9);
cin>>a;
int m;
if(a==1)
{ifstream f1("player1.txt",ios::in);
f1>>m;
m++;
f1.close();
ofstream f11("player1.txt",ios::out);
f11<<m;
f11.close();
}
if(a==2)
{ifstream f2("player2.txt",ios::in);
f2>>m;
m++;
f2.close();
ofstream f22("player2.txt",ios::out);
f22<<m;
f22.close();
}
if(a==3)
{ifstream f3("player3.txt",ios::in);
f3>>m;
m++;
f3.close();
ofstream f33("player3.txt",ios::out);
f33<<m;
f33.close();
}
if(a==4)
{ifstream f4("player4.txt",ios::in);
f4>>m;
m++;
f4.close();
ofstream f44("player4.txt",ios::out);
f44<<m;
f44.close();
}
if(a==5)
{ifstream f5("player5.txt",ios::in);
f5>>m;
m++;
f5.close();
ofstream f55("player5.txt",ios::out);
f55<<m;
f55.close();
}
if(a==6)
{ifstream f6("player6.txt",ios::in);
f6>>m;
m++;
f6.close();
ofstream f66("player6.txt",ios::out);
f66<<m;
f66.close();
}
if(a==7)
{ifstream f7("player7.txt",ios::in);
f7>>m;
m++;
f7.close();
ofstream f77("player7.txt",ios::out);
f77<<m;
f77.close();
}
if(a==8)
{ifstream f8("player8.txt",ios::in);
f8>>m;
m++;
f8.close();
ofstream f88("player8.txt",ios::out);
f88<<m;
f88.close();
}
if(a==9)
{ifstream f9("player9.txt",ios::in);
f9>>m;
m++;
f9.close();
ofstream f99("player9.txt",ios::out);
f99<<m;
f99.close();
}
setcolor(1);
outtextxy(0,145,"               Your chosen player has ");
gotoxy(39,11);
cout<<m;
outtextxy(0,145,"                                         votes in his bank!");
outtextxy(0,165,"            Keep voting to help your player win over the AUCTION!");
setcolor(5);
outtextxy(0,185,"                   THANKS FOR VISITING! KEEP IN TOUCH!");
outtextxy(0,220,"                                                                  DE GHUMA KE!:)");
outtextxy(0,240,"    PRESS ENTER TO GO TO MAINPAGE");
getch();
clrscr();
ob.mainpage();
getch();
}
void IPL::history()
{void season1();void season2();void season3();void season4();void trophy();
clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_MAGENTA);
int a;
setcolor(1);
outtextxy(270,80,"HISTORY");
setcolor(10);
outtextxy(1,120,"IPL is a professional league for T20 cricket competition held in India.");
outtextxy(1,130,"The inaugral season of the tournament started on 18 April,2008.Initiated by");
outtextxy(1,140,"BCCI headquartered in Mumbai and is supervised by BCCI vice president");
outtextxy(1,150,"Rajeev Shukla. In 2010, IPL became the first sporting event ever to be");
outtextxy(1,160,"broadcast live on Youtube. Its brand value is estimated to be around ");
outtextxy(1,170,"$3.67 billion in the fourth season. IPL is the second highest paid league ");
outtextxy(1,180,"based on first team salries on a pro rata basis");
outtextxy(1,200,"To know more about the previous seasons press the number as given belolw");
outtextxy(1,230,"1. FIRST SEASON");
outtextxy(1,240,"2. SECOND SEASON");
outtextxy(1,250,"3. THIRD SEASON");
outtextxy(1,260,"4. FOURTH SEASON");
outtextxy(1,270,"5. IPL TROPHY");
outtextxy(1,280,"6. MAINPAGE");
gotoxy(1,22);
cin>>a;
if(a==1)
season1();
if(a==2)
season2();
if(a==3)
season3();
if(a==4)
season4();
if(a==5)
trophy();
if(a==6)
ob.mainpage();
}
void season1()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(220,80,"WELCOME TO THE FIRST SEASON");
setcolor(14);
outtextxy(1,120,"It lasted for 46 days with 59 matches scheduled, out of which 58 took place");
outtextxy(1,130,"and 1 was washed due to rain. The final was played in DY Patil Stadium,");
outtextxy(1,140,"Navi Mumbai Every team played each other both at home and away in a");
outtextxy(1,150,"round robin system. The top four ranking sides progressed to the knock");
outtextxy(1,160,"out stage followed by the finals played between RAJASTHAN ROYALS and");
outtextxy(1,170,"CHENNAI SUPER KINGS with RAJASTHAN ROYALS bagging the 90 crores prize money!!!");
outtextxy(1,190,"PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void season2()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(220,80,"WELCOME TO THE SECOND SEASON");
setcolor(14);
outtextxy(1,120,"The 2009 season coincided with the General Elections in India.Owing to concerns");
outtextxy(1,130,"regarding players' security the venue was shifted to Soth Africa.The format was");
outtextxy(1,140,"the same as the previous  one HYDERABAD DECCAN CHARGERS who finished last in the");
outtextxy(1,150,"first season,were big underdogs, but came out as eventful winners defeating the");
outtextxy(1,160,"ROYAL CHALLENGERS BANGALORE in the final!!!");
outtextxy(1,180,"PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void season3()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode();
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(220,80,"WELCOME TO THE THIRD SEASON");
setcolor(14);
outtextxy(1,120,"The third season opened in January 2010 with the auction for players. 66");
outtextxy(1,130,"players were offered but only 11 players were sold. The new bases for the");
outtextxy(1,140,"champions were Nagpur, Navi mumbai and Cuttack. Four teams qualified for");
outtextxy(1,150,"the semifinals.The first semifinal was won by Mumbai Indians who defeats RCB.");
outtextxy(1,160,"CSK defeated DC in the second semi final.The final was played between CSK and");
outtextxy(1,170,"MUMBAI INDIANS with CHENNAI SUPER KINGS winning this season!!");
outtextxy(1,190,"PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void season4()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode();
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(220,80,"WELCOME TO THE FOURTH SEASON");
setcolor(14);
outtextxy(1,120,"On 21 March 2010, it was announced in Chennai that two new teams from Pune and");
outtextxy(1,130,"Kochi will be added to the IPL for the fourth season. However the bid around");
outtextxy(1,140,"the kochi franchisee turned controversial resulting in the resignation of");
outtextxy(1,150,"minister Shashi Tharoor.Later BCCI also removed Lalit modi from IPL chairmanship.");
outtextxy(1,160,"Instead of the round robin stage of the tournament there was to be a group stage");
outtextxy(1,170,"with two groups of five, limiting the number of matches to 74. CSK won their");
outtextxy(1,180,"second consecutive IPL title after defeating RCB by 58 runs in the finals.");
outtextxy(1,200,"PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void trophy()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(240,80,"IPL TROPHY");
setcolor(14);
outtextxy(1,120,"The diamond encrusted trophy of DLF IPL was designed by Orra Brand. It comprises");
outtextxy(1,130,"a player in a gold leafing. He is shown holding a bat in his hand, next to the");
outtextxy(
1,140,"map of India. On the map the names of all the IPL teams have been engraved by ");
outtextxy(1,150,"rubies. It took a team of as many 14 craftsmen to make the trophy. Every year ");
outtextxy(1,160,"the winner of the IPL T20 tournament are presented with the replica of the ");
outtextxy(1,170,"trophy along with the prize money.");
outtextxy(1,190,"PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void IPL::quiz()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_MAGENTA);
int p=0;
char a;
setcolor(1);
outtextxy(260,20,"IPL QUlIZ");
setcolor(11);
outtextxy(1,60,"Consider yourself as a cricket freak???");
outtextxy(1,80,"Let's see if you can crack these tricky questions..!!");
outtextxy(1,95,"1. The new team to be introduced this year is?");
outtextxy(1,105,"a)Kochi Tuskers Kerela   b)Gujarat Gaurav   c)Hydrabad Tigers   d)C.S.K.");
gotoxy(1,9.5);
cin>>a;
if(a=='b')
p+=10;
else
p-=3;
outtextxy(1,135,"2.Who is the IPL chairman?");
outtextxy(1,145,"a)Narendra Modi     b)Sharad Pawar     c)Rajeev Shukla     d)Lalit Modi");
gotoxy(1,12);
cin>>a;
if(a=='c')
p+=10;
else p-=3;
outtextxy(1,175,"3.Which Indian player is not playing in IPL 2013?");
outtextxy(1,185,"a)Sourav Ganguly    b)Sachin Tendulkar    c)Anil Kumble    d)Ajit Agarkar");
gotoxy(1,15);
cin>>a;
if(a=='a')
p+=10;
else p-=3;
outtextxy(1,215,"4.Which team has won IPL trophy twice?");
outtextxy(1,225,"a)KKR             b)RR             c)DC            d)CSK");
gotoxy(1,18);
cin>>a;
if(a=='d')
p+=10;
else p-=3;
outtextxy(1,255,"5.The only Pakistani player who is going to play in IPL 2013?");
outtextxy(1,265,"a)Azhar Mehmood    b)Younis Khan    c)Shoaib Mallik    d)Kamraan Akmal");
gotoxy(1,21);
cin>>a;
if(a=='a')
p+=10;
else
p-=3;
setcolor(14);
outtextxy(1,300,"                         Your total points are: ");
gotoxy(50,22);
cout<<p;
outtextxy(1,320,"                         THANKYOU FOR PLAYING!!");
outtextxy(1,340,"                      PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void IPL::booking()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_MAGENTA);
long m,n,p,c,m1,flag=0;
char d[10];
setcolor(1);
outtextxy(220,40,"WELCOME TO BOOKING PAGE");
setcolor(14);
outtextxy(1,80,"          LOCATION            SEATS AVAILABLE             COST");
outtextxy(1,90,"     1. Upper pavillion         1000                   Rs.2500");
outtextxy(1,100,"     2. Lower pavillion          500                   Rs.5000");
outtextxy(1,110,"     3. Stands                  7000                   Rs.1500");
outtextxy(1,130,"     Enter the date and match(match1 or match 2) ");
gotoxy(5,11);
cin>>d>>m1;
outtextxy(1,160,"     Enter the choice of your seats(1/2/3) and the no. of seats");
gotoxy(5,13);
cin>>p>>n;
if(p==1)
{ifstream b1("booking1.txt",ios::in);
b1>>m;
if((m+n)<1000)
{m+=n;
outtextxy(1,185,"     Sufficient seats available. Please enter the names");
}
else
{outtextxy(1,205,"     Sorry!! sufficient seats not available");
flag++;
getch();
}
b1.close();
ofstream b11("booking1.txt",ios::out);
b11<<m;
b11.close();
c=n*2500;
}
else if(p==2)
{ifstream b2("booking2.txt",ios::in);
b2>>m;
if((m+n)<500)
{m+=n;
outtextxy(1,185,"     Sufficient seats available. Please enter the names.");
}
else
{outtextxy(1,205,"     Sorry!! sufficient seats not available");
flag++;
getch();
}
b2.close();
ofstream b22("booking2.txt",ios::out);
b22<<m;
b22.close();
c=n*5000;
}
else if(p==3)
{ifstream b3("booking3.txt",ios::in);
b3>>m;
if((m+n)<7000)
{m+=n;
outtextxy(1,185,"     Sufficient seats available. Please enter the names.");
}
else
{outtextxy(1,205,"     Sorry!! sufficient seats not available");
flag++;
getch();
}
b3.close();
ofstream b33("booking3.txt",ios::out);
b33<<m;
b33.close();
c=n*1500;
}
char names[90][20];
if(flag==0)
{for(int i=0;i<n;i++)
{gotoxy(5,15+i);
gets(names[i]);
}
outtextxy(1,260,"     Your seat/s is/are getting reserved..");
outtextxy(1,280,"     LOADING");
gotoxy(5,22);
for(i=0;i<50;i++)
{cout<<"|";
delay(50);
}
outtextxy(1,310,"     The total ticket fare is Rs. ");
gotoxy(36,23);
cout<<c;
outtextxy(1,330,"     PRESS ENTER TO VIEW YOUR TICKET");
getch();
}
else
ob.mainpage();
getch();
clrscr();
gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_BLUE);
char stadium[5][40]={"WANKHEDE STADIUM,MUMBAI","SARDAR PATEL STADIUM,AHMEDABAD","EDEN GARDENS ,KOLKATA","FEROZ SHAH KOTLA STADIUM,DELHI","CHEPAUK STADIUMJ,CHENNAI"};
gotoxy(20,8);
cout<<"Kindly get the printout of your following ticket\n\n________________________________________________________________________________\n\n";
cout<<"\t\t\tDLF INDIAN PREMIER LEAGUE \n\n";
randomize();
int r=random(5)+0;
cout<<"\t\t  "<<stadium[r]<<"  WELCOMES YOU\n\n";
cout<<"DATE:"<<d<<"\t\t\t\t\t\t\tMATCH NO.:"<<m1<<"\n\n\n";
cout<<"\tSrNo.\t\tNAMES\t\tCHOICE OF SEATS\t\tSEAT NO\n\n";
randomize();
for(int i=1;i<=n;i++)
{
int g=random(90)+100;
cout<<"\t"<<i<<"\t\t"<<names[i-1]<<"\t\t    "<<p<<"\t\t\t "<<g<<"\n";
}
cout<<"\n\n\t\t  YOUR TOTAL TICKET FARE IS RS."<<c<<endl<<endl;
cout<<"______________________________________________________________________________\n\n";
cout<<"\nPRESS ENTER TO GO TO MAINPAGE";
getch();
ob.mainpage();
getch();

}
void IPL::sponsors()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_MAGENTA);
setcolor(1);
outtextxy(220,80,"SPONSORSHIP FOR IPL-6");
setcolor(10);
outtextxy(0,110,"Sponsorship  - The very important part of any event or to run an event.In fact");
outtextxy(0,120,"the whole event is organised by the sponsors. Similarly the world famous event");
outtextxy(0,130,"is sponsored by DLF and is supported by number of other sponsorers. each team is");
outtextxy(0,140,"sponsored by different sponsores like Nokia ,Idea ,Reebok ,kingfisher ,etc.");
outtextxy(0,160,"To see the list of sponsorers of individual teams");
outtextxy(0,180,"PRESS ENTER TO CONTINUE.");
getch();
clrscr();
gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
setcolor(1);
outtextxy(200,80,"SPONSORS OF DIFFERENT TEAMS");
setcolor(4);
outtextxy(100,110,"          Teams                   Sponsorers");
outtextxy(100,120,"  Chennai Super Kings               AIRCEL");
outtextxy(100,130,"  Rajasthan Royals                  ULTRATECH");
outtextxy(100,140,"  Mumbai Indians                    VIDEOCON");
outtextxy(100,150,"  Royal Challengers Bangalore       ROYAL CHALLENGE, KINGFISHER");
outtextxy(100,160,"  Kolkata Knight Riders             NOKIA");
outtextxy(100,170,"  Kings XI Punjab                   EMIRATES");
outtextxy(100,180,"  Deccan Chargers                   IDEA");
outtextxy(100,190,"  Delhi Daredevils                  HERO HONDA");
outtextxy(100,200,"  Pune Warriors India               SAHARA");
outtextxy(50,230,"PRESS ENTER TO CONTINUE");
getch();
ob.conditions();
}
void IPL::conditions()
{ clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_CYAN);
char ch;
setcolor(1);
outtextxy(230,80,"WANT TO  BE A SPONSORER?");
setcolor(4);
outtextxy(0,100,"          You want to be a sponsorer of the event (y/n)???");
gotoxy(5,9);
cin>>ch;
if(ch=='y')
{
outtextxy(0,130,"     The conditions to be the sponsorer of the event are:");
outtextxy(0,150,"     1. Minimun property owned should be Rs.150 Crore");
outtextxy(0,160,"     2. Good social Reputation");
outtextxy(0,170,"     3. Should satisfy the terms and conditions of DLF IPL");
outtextxy(0,200,"        If you fulfill the conditions then fill the following form:");
outtextxy(0,220,"        To fill the form Press ENTER");
getch();
ob.form();
}
else
ob.mainpage();
getch();
}
struct form
{ char name[15],name1[15],firm[25], team[100];
  int a,b;
}ob1;
void IPL:: form()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_GREEN);
char ch;
ofstream form("form.txt",ios::app);
setcolor(1);
outtextxy(240,80,"ENTRANCE FORM");
setcolor(5);
outtextxy(0,115,"     Enter your name:");
gotoxy(24,9);
gets (ob1.name);
outtextxy(0,145,"     Enter your firm's name:");
gotoxy(30,11);
gets(ob1.firm);
outtextxy(0,160,"     Are you sponsoring the team in partnership???(y/n)");
gotoxy(58,12);
cin>>ch;
if(ch=='y')
{outtextxy(0,175,"     Enter ur partner's name:");
gotoxy(32,13);
gets(ob1.name1);
}
else
cout<<endl;
outtextxy(0,195,"     Enter the amount of property owned by you (in crores): ");
gotoxy(61,15);
cin>>ob1.a;
outtextxy(0,210,"     Enter the no. of teams u want to sponsor:");
gotoxy(48,16);
cin>>ob1.b;
outtextxy(0,240,"     LOADING");
form.write((char*)&ob1,sizeof(ob1));
form.close();
gotoxy(5,19);
for(int i=0;i<50;i++)
{cout<<"*";
delay(50);
}
outtextxy(0,280,"                            CONGRATULATIONS!!!!!");
outtextxy(0,300,"                 YOU ARE ONE OF THE SPONSERER OF DLF IPL-6!!!!!");
outtextxy(0,320,"                               THANK YOU!!!!");
outtextxy(0,340,"                       PRESS ENTER TO GO TO MAINPAGE");
getch();
clrscr();
ob.mainpage();
getch();
}
void IPL::ipl6()
{clrscr();
int gdriver=EGA,gmode=EGAHI,errorcode;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_MAGENTA);
setcolor(1);
outtextxy(270,80,"IPL-6");
setcolor(10);
outtextxy(1,120,"The 2013 IPL season, abbreviated as IPL 6 or the IPL 2013, will be the ");
outtextxy(1,130,"6th season of the IPL, established by BCCI.");
outtextxy(1,140,"The tournament will begin on April 3 and end on May 26,2013.In this league a");
outtextxy(1,150,"new team is added thus in total 10 teams are participating in IPL-6");
outtextxy(1,170,"The teams participating in the IPL 5 are:");
outtextxy(1,180,"1.Chennai Super Kings");
outtextxy(1,190,"2.Deccan Chargers");
outtextxy(1,200,"3.Delhi Daredevils");
outtextxy(1,210,"4.Kings XI Punjab");
outtextxy(1,220,"5.Kolkata Knight Riders");
outtextxy(1,230,"6.Mumbai Indians");
outtextxy(1,240,"7.Rajasthan Royals");
outtextxy(1,250,"8.Royal Challengers Bangalore");
outtextxy(1,260,"9.Pune Warriors India.");
outtextxy(1,270,"10.Gujarat Gaurav.");
outtextxy(1,290,"PRESS ENTER TO GO TO MAINPAGE");
getch();
ob.mainpage();
getch();
}
void IPL:: mainpage()
{clrscr();
int gdriver=EGA,gmode=EGAHI;
initgraph(&gdriver,&gmode,"\\tc");
setbkcolor(EGA_RED);
setcolor(10);
int a;
outtextxy(189,80,"NAMASKAR! IPL-6 WELCOMES YOU!");
setcolor(11);
outtextxy(45,120,"After all successful seasons of IPL, we come ahead with our new season!");
outtextxy(9,140,"We hereby bring before you our new schedules and provide you with all the");
outtextxy(1,150," information to assist you for a better journey!");
outtextxy(1,160,"The option to know more on IPL 6 are:");
outtextxy(1,170,"1.HISTORY");
outtextxy(1,180,"2.IPL 6");
outtextxy(1,190,"3.SPONSORSHIP");
outtextxy(1,200,"4.AUCTION");
outtextxy(1,210,"5.TICKET BOOKING");
outtextxy(1,220,"6.QUIZ");
outtextxy(1,230,"7.QUIT");
outtextxy(10,250,"ENTER THE OPTION YOU WANT TO KNOW ABOUT.....");
gotoxy(1,20);
cin>>a;
switch(a)
{case 1:
ob.history(); break;
case 2:
ob.ipl6();break;
case 3:
ob.sponsors();break;
case 4:
ob.auction(); break;
case 5:
ob.booking();  break;
case 6:
ob.quiz(); break;
case 7:
exit(0);
}
getch();
}
void main()
{clrscr();
ob.mainpage();
getch();
}