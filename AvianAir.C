
//Version 5.2 ,Last updated by Harshit on 5/4.
//Mihir change nationality malaysia to russia in your login file.

#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
struct cdate
 {
	int day, mon, year;
 };
void thanks();
void bookflight();
void checkin();
void manage();
void status();
void account();
void other();
void about();
void date();
void box(int,int,int,int);
void box1(int,int,int,int);
int i=0,j=0,main_choice=0,dep_choice=0,arr_choice=0,manage_choice;
int about_choice=0,other_choice=0;
int speeda1=75;
int speeda2=85;
int speeda3=100;
char pnr[]="XXXXXXXXXX";
char buffer[3];
int random;
char seatno[2];
char flightcode[10];
char pnruser[10];
char pnrcheck[35];;
int login;
void signin();
void signup();
void change();
void chp(char [],char []);
void visa(char []);
//void applyvisa(char []);
void creditfun(char []);
void upifun(char []);
void debitfun(char []);
void chu(char []);
void chpp(char []);
void security(char []);
void box(int, int ,int,int );
void information(char[]);
void addition(char[]);
FILE *fp,*fi,*ch,*pr,*ur,*pp;
int strle;
char pa[10];
int visacon=1;
char visanumber[71];
char passnu[8],medical[50];
char gar1[20],upi[10];
int ans,ans2;
char data[20],question[10],ansquestion[10];
char passport1[8];
char passnu2[8];
char pass3[20];
char passnum[8];
char ui[20];
char user[20];
int a,an,ch2,ch1;
char temp[20],temp2;
int temp1;
char name[10];
char surname[10],mobile[10];
char passnumber[8],password[20],password1[20];
int ab,gender;
char genderc[7];
int nationchoice;
char passportnumber[8],aadharnumber[12];
char passport[8],aadhar[12];
char credit[19],debit[19],cardmon[2],cardyear[4],cvv[3];
int yes,nation;



/*Location

VARIABLES

i:- 423:13
j:- 423:14
main_choice:- 329:14
about_choice:- 406:13
dep_choice:-
arr_choice:-

FUNCTIONS:-

ANIM1():- 56:1
LOGO1ANIM:-
LOGO():-
LOGO2:-
ANIM2:-
MAINMENU():-
BOOKFLIGHT():-
CHECKIN():-
MANAGE():-
STATUS:-
ACCOUNT:-
OTHER:-
ABOUT():-
*/

void anim1()
{                                 //START OF SMALL LOGO ANIMATION
 _setcursortype (_NOCURSOR);
 clrscr();
 printf("\n**       ");
 printf("\n* ****** ");
 printf("\n*       *");
 printf("\n******** ");
 printf("\n   * *   ");
 printf("\n   **    ");
 delay(speeda1);
 clrscr();
 printf("\n  **       ");
 printf("\n  * ****** ");
 printf("\n  *       *");
 printf("\n  ******** ");
 printf("\n     * *   ");
 printf("\n     **    ");
 delay(speeda1);
 clrscr();
 printf("\n    **       ");
 printf("\n    * ****** ");
 printf("\n    *       *");
 printf("\n    ******** ");
 printf("\n       * *   ");
 printf("\n       **    ");
 delay(speeda1);
 clrscr();
 printf("\n      **       ");
 printf("\n      * ****** ");
 printf("\n      *       *");
 printf("\n      ******** ");
 printf("\n         * *   ");
 printf("\n         **    ");
 delay(speeda1);
 clrscr();
 printf("\n        **       ");
 printf("\n        * ****** ");
 printf("\n        *       *");
 printf("\n        ******** ");
 printf("\n           * *   ");
 printf("\n           **    ");
 delay(speeda1);
 clrscr();
 printf("\n          **       ");
 printf("\n          * ****** ");
 printf("\n          *       *");
 printf("\n          ******** ");
 printf("\n             * *   ");
 printf("\n             **    ");
 delay(speeda1);
 clrscr();
 printf("\n            **       ");
 printf("\n            * ****** ");
 printf("\n            *       *");
 printf("\n            ******** ");
 printf("\n               * *   ");
 printf("\n               **    ");
 delay(speeda1);
 clrscr();
 printf("\n              **       ");
 printf("\n              * ****** ");
 printf("\n              *       *");
 printf("\n              ******** ");
 printf("\n                 * *   ");
 printf("\n                 **    ");
 delay(speeda1);
 clrscr();
 printf("\n                **       ");
 printf("\n                * ****** ");
 printf("\n                *       *");
 printf("\n                ******** ");
 printf("\n                   * *   ");
 printf("\n                   **    ");
 delay(speeda1);
 clrscr();
 printf("\n                  **       ");
 printf("\n                  * ****** ");
 printf("\n                  *       *");
 printf("\n                  ******** ");
 printf("\n                     * *   ");
 printf("\n                     **    ");
 delay(speeda1);
 clrscr();
 printf("\n                    **       ");
 printf("\n                    * ****** ");
 printf("\n                    *       *");
 printf("\n                    ******** ");
 printf("\n                       * *   ");
 printf("\n                       **    ");
 delay(speeda1);
 clrscr();
 printf("\n                      **       ");
 printf("\n                      * ****** ");
 printf("\n                      *       *");
 printf("\n                      ******** ");
 printf("\n                         * *   ");
 printf("\n                         **    ");
 delay(speeda1);
 clrscr();
 printf("\n                        **       ");
 printf("\n                        * ****** ");
 printf("\n                        *       *");
 printf("\n                        ******** ");
 printf("\n                           * *   ");
 printf("\n                           **    ");
 delay(speeda1);
 clrscr();
 printf("\n                          **       ");
 printf("\n                          * ****** ");
 printf("\n                          *       *");
 printf("\n                          ******** ");
 printf("\n                             * *   ");
 printf("\n                             **    ");
 delay(speeda1);
 clrscr();
 printf("\n                            **       ");
 printf("\n                            * ****** ");
 printf("\n                            *       *");
 printf("\n                            ******** ");
 printf("\n                               * *   ");
 printf("\n                               **    ");
 delay(speeda1);
 clrscr();
 printf("\n                              **       ");
 printf("\n                              * ****** ");
 printf("\n                              *       *");
 printf("\n                              ******** ");
 printf("\n                                 * *   ");
 printf("\n                                 **    ");
 delay(speeda1);
 clrscr();
 printf("\n                               **       ");
 printf("\n                               * ****** ");
 printf("\n                               *       *");
 printf("\n                               ******** ");
 printf("\n                                  * *   ");
 printf("\n                                  **    ");
 delay(speeda1);
 clrscr();
 printf("\n                                 **       ");
 printf("\n                                 * ****** ");
 printf("\n                                 *       *");
 printf("\n                                 ******** ");
 printf("\n                                    * *   ");
 printf("\n                                    **    ");
 delay(speeda1);
 clrscr();
 printf("\n                                   **       ");
 printf("\n                                   * ****** ");
 printf("\n                                   *       *");
 printf("\n                                   ******** ");
 printf("\n                                      * *   ");
 printf("\n                                      **    ");
 delay(speeda1);
 clrscr();
 printf("\n                                     **       ");
 printf("\n                                     * ****** ");
 printf("\n                                     *       *");
 printf("\n                                     ******** ");
 printf("\n                                        * *   ");
 printf("\n                                        **    ");
 delay(speeda1);
 clrscr();
}                                  //END OF SMALL LOGO ANIMATION

void logo1anim()
{                                  //START OF BIG LOGO ANIMATION (DELAY)
 _setcursortype(_NOCURSOR);
 printf("\n      *******                                                      ");delay(speeda2);
 printf("\n       *      *                                                    ");delay(speeda2);
 printf("\n        *       *                                                  ");delay(speeda2);
 printf("\n      ***        ******************************************        ");delay(speeda2);
 printf("\n       *         A                          A    I RRRR   *****    ");delay(speeda2);
 printf("\n        *       A A  v   v i  aaa   n      A A   I R   R  ******   ");delay(speeda2);
 printf("\n         *     AAAAA  v v  i a   a  nnnn  AAAAA  I RRRR         *  ");delay(speeda2);
 printf("\n          *   A     A  v   i  aaaaa n  n A     A I R   R        *  ");delay(speeda2);
 printf("\n           *****      *************           *****************    ");delay(speeda2);
 printf("\n              *      *           *          *                      ");delay(speeda2);
 printf("\n             *     *            *         *                        ");delay(speeda2);
 printf("\n            *******            *        *                          ");delay(speeda2);
 printf("\n                              *       *                            ");delay(speeda2);
 printf("\n                             *      *                              ");delay(speeda2);
 printf("\n                            *******                                ");delay(speeda2);
}                                  //END OF BIG LOGO ANIMATION (DELAY)

void logo1()
{
 _setcursortype(_NOCURSOR);				 //PRINTING BIG LOGO AFTER ENDING ANIMATION
 printf("\n      *******                                                      ");
 printf("\n       *      *                                                    ");
 printf("\n        *       *                                                  ");
 printf("\n      ***        ******************************************        ");
 printf("\n       *         A                          A    I RRRR   *****    ");
 printf("\n        *       A A  v   v i  aaa   n      A A   I R   R  ******   ");
 printf("\n         *     AAAAA  v v  i a   a  nnnn  AAAAA  I RRRR         *  ");
 printf("\n          *   A     A  v   i  aaaaa n  n A     A I R   R        *  ");
 printf("\n           *****      *************           *****************    ");
 printf("\n              *      *           *          *                      ");
 printf("\n             *     *            *         *                        ");
 printf("\n            *******            *        *                          ");
 printf("\n                              *       *                            ");
 printf("\n                             *      *                              ");
 printf("\n                            *******                                ");
}                                  //END OF PRINTING BIG LOGO

void logo2()
{		 //START OF SECOND LOGO
 _setcursortype(_NOCURSOR);
 printf("\n                                       |              ");
 printf("\n                           \\____Avian_(_)_AIR______/ ");
 printf("\n                                    o'   'o           ");

}
				  //END OF SECOND LOGO
void anim2()
{				 //START OF ANIMATING SLOGAN
 _setcursortype(_NOCURSOR);
 printf("\n\n                                             << Taking You Higher >>");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                                           << Taking You Higher >>  ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                                         << Taking You Higher >>    ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                                       << Taking You Higher >>      ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                                     << Taking You Higher >>        ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                                   << Taking You Higher >>          ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                                 << Taking You Higher >>            ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                               << Taking You Higher >>              ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                             << Taking You Higher >>                ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                           << Taking You Higher >>                  ");
 delay(speeda2);clrscr();
 logo1();
 printf("\n\n                         << Taking You Higher >>                    ");
 delay(150);
 printf("\n\n                         Press ENTER to Continue                    ");
 getchar();

 clrscr();
}                                 //END OF ANIMATING SLOGAN

void mainmenu()
{                                 //START OF MAIN MENU
 _setcursortype(_NOCURSOR);
 clrscr();
 logo2();                         //CALLING SECOND LOGO FUNCTION
 printf("\n                                   MAIN MENU");
 box(1,6,80,21);                  //CALLING BOX FUNCTION
 delay(150);
 gotoxy(16,9);
 printf("1. Book a Flight");
 delay(150);
 gotoxy(48,9);
 printf("2. Check In");
 delay(150);
 gotoxy(16,12);
 printf("3. Manage Flight");
 delay(150);
 gotoxy(48,12);
 printf("4. Check Status");
 delay(150);
 gotoxy(16,15);
 printf("5. Account");
 delay(150);
 gotoxy(48,15);
 printf("6. About AvianAIR");
 delay(150);
 gotoxy(16,18);
 printf("7. Other");
 delay(150);
 gotoxy(48,18);
 printf("8. Exit");

 box(1,22,80,24);
 delay(150);
 gotoxy(10,23);
 _setcursortype(_NORMALCURSOR);
 printf("Enter Your Choice [1-8]: ");
 scanf("%d",&main_choice);
 if(main_choice==1)
 {
  bookflight();
 }
 else if(main_choice==2)
 {
  checkin();
 }
  else if(main_choice==3)
 {
  manage();
 }
 else if(main_choice==4)
 {
  status();
 }
 else if(main_choice==5)
 {
  account();
 }
 else if(main_choice==6)
 {
  about();
 }
 else if(main_choice==7)
 {
  other();
 }
 else if(main_choice==8)
 {
  exit(0);
 }
 else
 {
  clrscr();
  logo2();
  box(1,6,80,21);
  gotoxy(10,10);
  printf("INPUT ERROR. Re-running Main Menu.");
  delay(1000);
  mainmenu();
 }
}                                 //END OF MAIN MENU

void bookflight()
{
 if (login!=1)
 {
	clrscr();
	box(1,6,80,21);
	gotoxy(10,10);
	printf("PLEASE SIGH IN TO PROCEED");
	delay(3000);
	account();
 }

 if(login==1);
{                                //START OF BOOKFLIGHT FUNCTION
 _setcursortype(_NOCURSOR);
 departure:                       //DEPARTURE LABEL
 clrscr();
 logo2();
 fi=fopen(ui,"a");
 delay(50);printf("\n                                   DEPARTURE ");
 box(1,6,80,8);                   //PRINT BOX
 gotoxy(2,7);
 delay(50);printf(" No. Place                      Airport                                   Code");
 box(1,6,80,21);                  //PRINT BOX
 gotoxy(2,9);
 delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
 gotoxy(2,10);
 delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
 gotoxy(2,11);
 delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
 gotoxy(2,12);
 delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
 gotoxy(2,13);
 delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
 gotoxy(2,14);
 delay(50);printf(" 6.  Germany....................Frankfurt Interational Airport.............FRA");
 gotoxy(2,15);
 delay(50);printf(" 7.  India......................Chhatrapati Shivaji International Airport..BOM");
 gotoxy(2,16);
 delay(50);printf(" 8.  Japan......................Kansai International Airport...............KIX");
 gotoxy(2,17);
 delay(50);printf(" 9.  Russia.....................Moscow Domodedovo Airport..................DME");//Russia+21.+MoscowDomoAir+18.+DME
 gotoxy(2,18);
 delay(50);printf(" 10. Singapore..................Changi Airport.............................SIN");
 gotoxy(2,19);
 delay(50);printf(" 11. United States of America...John F Kennedy International Airport.......JFK");
 gotoxy(2,20);
 delay(50);printf(" 0.  To Go Back To Main Menu.");
 box(1,22,80,24);                 //CHOICE BOX
 gotoxy(5,23);
 _setcursortype(_NORMALCURSOR);
 printf(" Enter Your Choice [0-11]: ");
 scanf("%d",&dep_choice);
 arrival:                         //ARRIVAL LABEL
 if(dep_choice==1)                //IF WHEN CHOICE IS AUSTRALIA
 {                                //START OF 1ST ELSE-IF LADDER
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,10);
  delay(50);printf(" 2.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,11);
  delay(50);printf(" 3.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,12);
  delay(50);printf(" 4.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,13);
  delay(50);printf(" 5.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,14);
  delay(50);printf(" 6.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);

  if(arr_choice==1)
  {
   char pnr[]="BNEBJS";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);


   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="BNEDXB";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="BNELHR";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="BNECDG";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="BNEFRA";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="BNEBOM";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="BNEKIX";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="BNEDME";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="BNESIN";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="BNEJFK";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;                  //TO GO ONE STEP BACK
  }
 }                                //END OF 1ST ELSE-IF LADDER

 else if(dep_choice==2)           //ELSE-IF WHEN CHOICE IS CHINA
 {                                //START OF SECOND ELSE-IF LADDER
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,11);
  delay(50);printf(" 3.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,12);
  delay(50);printf(" 4.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,13);
  delay(50);printf(" 5.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,14);
  delay(50);printf(" 6.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="BJSBNE";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="BJSDXB";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="BJSLHR";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="BJSCDG";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="BJSFRA";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="BJSBOM";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="BJSKIX";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="BJSDME";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="BJSSIN";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="BJSJFK";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF SECOND ELSE IF LADDER

 else if(dep_choice==3)           //ELSE-IF WHEN CHOICE IS DUBAI
 {                                //START OF THIRD ELSE-IF LADDER
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,12);
  delay(50);printf(" 4.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,13);
  delay(50);printf(" 5.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,14);
  delay(50);printf(" 6.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Depature. ");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="DXBBNE";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="DXBBJS";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="DXBLHR";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="DXBCDG";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="DXBFRA";
   strcat(pnr,buffer);
   date();
   clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="DXBBOM";
   strcat(pnr,buffer);
   date();

     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

 //  printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="DXBKIX";
   strcat(pnr,buffer);
   date();
      clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="DXBDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="DXBSIN";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="DXBJFK";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF THIRD ELSE-IF LADDER

 else if(dep_choice==4)           //ELSE-IF WHEN CHOICE IS ENGLAND
 {                                //START OF FOURTH ELSE-IF LADDER
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,13);
  delay(50);printf(" 5.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,14);
  delay(50);printf(" 6.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="LHRBNE";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="LHRBJS";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="LHRDXB";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="LHRCDG";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="LHRFRA";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="LHRBOM";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="LHRKIX";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="LHRDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="LHRSIN";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="LHRJFK";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF FOURTH ELSE-IF

 else if(dep_choice==5)           //ELSE-IF WHEN CHOICE IS FRANCE
 {                                //START OF FIFTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,14);
  delay(50);printf(" 6.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="CDGBNE";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="CDGBJS";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="CDGDXB";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="CDGLHR";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="CDGFRA";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="CDGBOM";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="CDGKIX";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="CDGDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="CDGSIN";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="CDGJFK";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF FIFTH ELSE-IF

 else if(dep_choice==6)           //ELSE-IF WHEN CHOICE IS GERMANY
 {                                //START OF SIXTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,14);
  delay(50);printf(" 6.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="FRABNE";
   strcat(pnr,buffer);
   date();

     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);
//printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="FRABJS";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);
//printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="FRADXB";
   strcat(pnr,buffer);
   date();

     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="FRALHR";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="FRACDG";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="FRABOM";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="FRAKIX";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="FRADME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="FRASIN";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="FRAJFK";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
   goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF SIXTH ELSE-IF

 else if(dep_choice==7)           //ELSE-IF WHEN CHOICE IS INDIA
 {                                //START OF SEVENTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,14);
  delay(50);printf(" 6.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,15);
  delay(50);printf(" 7.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="BOMBNE";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="BOMBJS";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="BOMDXB";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="BOMLHR";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="BOMCDG";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="BOMFRA";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="BOMKIX";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="BOMDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="BOMSIN";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="BOMJFK";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF SEVENTH ELSE-IF

 else if(dep_choice==8)           //ELSE-IF WHEN CHOICE IS JAPAN
 {                                //START OF EIGHTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,14);
  delay(50);printf(" 6.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,15);
  delay(50);printf(" 7.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,16);
  delay(50);printf(" 8.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="KIXBNE";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="KIXBJS";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="KIXDXB";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="KIXLHR";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="KIXCDG";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="KIXFRA";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="KIXBOM";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="KIXDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="KIXSIN";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="KIXJFK";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF EIGHTH ELSE-IF

 else if(dep_choice==9)           //ELSE-IF WHEN CHOICE IS RUSSIA
 {                                //START OF NINTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,14);
  delay(50);printf(" 6.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,15);
  delay(50);printf(" 7.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,16);
  delay(50);printf(" 8.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,17);
  delay(50);printf(" 9.  Singapore..................Changi Airport.............................SIN");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="DMEBNE";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="DMEBJS";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="DMEDXB";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="DMELHR";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="DMECDG";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="DMEFRA";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="DMEBOM";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="DMEKIX";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="DMESIN";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="DMEJFK";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF NINTH ELSE-IF
 else if(dep_choice==10)          //ELSE-IF WHEN CHOICE IS SINAGAPORE
 {                                //START OF TENTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,14);
  delay(50);printf(" 6.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,15);
  delay(50);printf(" 7.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,16);
  delay(50);printf(" 8.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,17);
  delay(50);printf(" 9.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,18);
  delay(50);printf(" 10. United States of America...John F Kennedy International Airport.......JFK");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="SINBNE";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="SINBJS";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="SINDXB";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="SINLHR";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="SINCDG";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="SINFRA";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="SINBOM";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="SINKIX";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="SINDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="SINJFK";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF TENTH ELSE-IF

 else if(dep_choice==11)          //ELSE-IF WHEN CHOICE IS USA
 {                                //START OF ELEVENTH ELSE-IF
  _setcursortype(_NOCURSOR);
  clrscr();
  logo2();
  delay(50);printf("\n                                    ARRIVAL ");
  box(1,6,80,8);                  //PRINT BOX
  gotoxy(2,7);
  delay(50);printf(" No. Place                      Airport                                   Code");
  box(1,6,80,20);                 //PRINT BOX
  gotoxy(2,9);
  delay(50);printf(" 1.  Australia..................Brisbane Airport...........................BNE");
  gotoxy(2,10);
  delay(50);printf(" 2.  China......................Beijing Capital International Airport......BJS");
  gotoxy(2,11);
  delay(50);printf(" 3.  Dubai......................Dubai International Airport................DXB");
  gotoxy(2,12);
  delay(50);printf(" 4.  England....................Heathrow Airport...........................LHR");
  gotoxy(2,13);
  delay(50);printf(" 5.  France.....................Charles de Gaulle Airport..................CDG");
  gotoxy(2,14);
  delay(50);printf(" 6.  Germany....................Frankfurt Interational Airport.............FRA");
  gotoxy(2,15);
  delay(50);printf(" 7.  India......................Chhatrapati Shivaji International Airport..BOM");
  gotoxy(2,16);
  delay(50);printf(" 8.  Japan......................Kansai International Airport...............KIX");
  gotoxy(2,17);
  delay(50);printf(" 9.  Russia.....................Moscow Domodedovo Airport..................DME");
  gotoxy(2,18);
  delay(50);printf(" 10. Singapore..................Changi Airport.............................SIN");
  gotoxy(2,19);
  delay(50);printf(" 0.  To Go Back To Departure.");
  box(1,21,80,23);                //CHOICE BOX
  gotoxy(5,22);
  _setcursortype(_NORMALCURSOR);
  printf(" Enter Your Choice [0-10]: ");
  scanf("%d",&arr_choice);
  if(arr_choice==1)
  {
   char pnr[]="JFKBNE";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==2)
  {
   char pnr[]="JFKBJS";

   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);

	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==3)
  {
   char pnr[]="JFKDXB";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==4)
  {
   char pnr[]="JFKLHR";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==5)
  {
   char pnr[]="JFKCDG";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==6)
  {
   char pnr[]="JFKFRA";
   strcat(pnr,buffer);
   date();
    clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

  // printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==7)
  {
   char pnr[]="JFKBOM";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==8)
  {
   char pnr[]="JFKKIX";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==9)
  {
   char pnr[]="JFKDME";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==10)
  {
   char pnr[]="JFKSIN";
   strcat(pnr,buffer);
   date();
     clrscr();
   box(1,6,80,21);
	gotoxy(10,10);
	printf("YOUR FLIGHT CODE IS : %s",pnr);
	strcat(pnr,buffer);
	printf("YOUR PNR IS : %s",pnr);
	delay(2000);
	//gotoxy(10,10);
	fprintf(fi," %s",pnr);

   //printf("\nPNR: %s",pnr);
  }
  else if(arr_choice==0)
  {
  goto departure;
  }
  else
  {
   clrscr();
   logo2();
   box(1,6,80,21);
   gotoxy(10,10);
   printf("INPUT ERROR. Re-running Arrival Function.");
   delay(1000);
   goto arrival;
  }
 }                                //END OF ELEVENTH ELSE-IF

 else if(dep_choice==0)           //ELSE-IF WHEN CHOICE IS ZERO
 {                                //START OF TWELFTH ELSE-IF
  clrscr();
  mainmenu();
 }                                //END OF TWELFTH ELSE-IF

 else
 {
  clrscr();
  box(1,6,80,21);
  gotoxy(10,10);
  printf("INPUT ERROR. Re-running Bookflight Function.");
  delay(1000);
  bookflight();
 }
 }

}                                 //END OF BOOKFLIGHT

void date()
{                                 //START OF DATE
}                                 //END OF DATE

void checkin()
{                                 //START OF CHECK IN
 clrscr();
   _setcursortype(_NORMALCURSOR);
 logo2();
 box1(1,6,80,21);
  gotoxy(8,8);
 printf("ENTER YOUR FLIGHT CODE");
 gotoxy(10,9);
 printf("[flight code is first 6 digit of you PNR]");
 gotoxy(58,8);
 printf("=");

 gotoxy(60,8);
 scanf("%s",&flightcode);

 gotoxy(8,10);
 printf("ENTER YOUR USER ID");
 gotoxy(58,10);
 printf("=");
 gotoxy(60,10);
 scanf("%s",&ui);
  gotoxy(8,12);
 printf("ENTER YOUR PNR NUMBER");
 gotoxy(58,12);
 printf("=");
 gotoxy(60,12);
 scanf("%s",&pnruser);

 clrscr();
 logo2();
 box(2,4,78,21);

 //LETTER PLACING

 gotoxy(10,5);
 printf("A");

 gotoxy(18,5);
 printf("B");

 gotoxy(33,5);
 printf("C");

 gotoxy(41,5);
 printf("D");

 gotoxy(49,5);
 printf("E");

 gotoxy(65,5);
 printf("F");

 gotoxy(73,5);
 printf("G");

 //NUMBER PLACING

 gotoxy(5,7);
 printf("1");

 gotoxy(5,10);
 printf("2");

 gotoxy(5,13);
 printf("3");

 gotoxy(5,16);
 printf("4");

 gotoxy(5,19);
 printf("5");
 //SEAT PRINTING

 // A                    B

 box1(9,6,12,8);     box1(16,6,19,8);
 box1(9,9,12,11);    box1(16,9,19,11);
 box1(9,12,12,14);   box1(16,12,19,14);
 box1(9,15,12,17);   box1(16,15,19,17);
 box1(9,18,12,20);   box1(16,18,19,20);
     //C                 D                 E

 box1(32,6,35,8);   box1(40,6,43,8);   box1(48,6,51,8);
 box1(32,9,35,11);  box1(40,9,43,11);  box1(48,9,51,11);
 box1(32,12,35,14); box1(40,12,43,14); box1(48,12,51,14);
 box1(32,15,35,17); box1(40,15,43,17); box1(48,15,51,17);
 box1(32,18,35,20); box1(40,18,43,20); box1(48,18,51,20);

     //F                 G
 box1(64,6,67,8);   box1(72,6,75,8);
 box1(64,9,67,11);  box1(72,9,75,11);
 box1(64,12,67,14); box1(72,12,75,14);
 box1(64,15,67,17); box1(72,15,75,17);
 box1(64,18,67,20); box1(72,18,75,20);

 //CHOICE BOX


box1(2,22,78,24);

 gotoxy(3,23);


 printf("ENTER SEAT NUMBER (EX:A1:)     :");
 scanf("%s",seatno);
 ab=strlen(seatno);
 if(ab==2)
 {
	fp=fopen(ui,"r");
	fscanf(fp,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv,pnr);
	 clrscr();
 for(i=0;i<=4;i++)
 {
  _setcursortype(_NOCURSOR);
  gotoxy(1,10);
  printf("              _");
  gotoxy(27,12);
  printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
  delay(speeda3);
  clrscr();
  gotoxy(1,10);
  printf("               _");
  gotoxy(27,12);
  printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
//  printf("Checking Availability..");
  delay(speeda3);
  clrscr();
  gotoxy(1,10);
  printf("\n");
  printf("                 \\");
  gotoxy(27,12);
    printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
//  printf("Checking Availability...");
  delay(speeda3);
  clrscr();
  gotoxy(1,10);
  printf("\n\n");
  printf("                  |");
  gotoxy(27,12);
     printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
//  printf("Checking Availability.");
  delay(speeda3);
  clrscr();
  gotoxy(1,10);
  printf("\n\n\n");
  printf("                 /");
  gotoxy(27,12);
   printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
 // printf("Checking Availability..");
  delay(speeda3);
  clrscr();
  gotoxy(30,10);
  printf("\n\n\n");
  printf("                _");
  gotoxy(27,12);
    printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
 // printf("Checking Availability...");
  delay(speeda3);
  clrscr();
  gotoxy(30,10);
  printf("\n\n\n");
  printf("               _");
  gotoxy(27,12);
   printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
 // printf("Checking Availability.");
  delay(speeda3);
  clrscr();
  gotoxy(30,10);
  printf("\n\n\n");
  printf("             \\");
  gotoxy(27,12);
   printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
 // printf("Checking Availability..");
  delay(speeda3);
  clrscr();
  gotoxy(30,10);
  printf("\n\n");
  printf("            |");
  gotoxy(27,12);
    printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
 // printf("Checking Availability...");
  delay(speeda3);
  clrscr();
  gotoxy(30,10);
  printf("\n");
  printf("             /");
  gotoxy(27,12);
   printf("WE ARE PRINTING YOUR BORDING PASS PLEASE WAIT");
 // printf("Checking Availability.");
  delay(speeda3);
  }
  fi=fopen(pnr,"w");

   clrscr();
   _setcursortype(_NORMALCURSOR);
 logo2();

    clrscr();
   _setcursortype(_NORMALCURSOR);
 logo2();
 box(1,6,80,21);
 gotoxy(8,12);
 printf("YOUR BORDING PASS IS CREATED SUCCESSFULLY");
 gotoxy(8,13);
 printf("IF YOU NEED AN SOFT COPY OF BORDING PASS JUST GO TO:");
 gotoxy(10,15);
 printf("C://TC/BIN/%s",pnruser);
 gotoxy(10,17);
 printf("THANK YOU OF CHOOSING AVIAN AIR");
   fi=fopen(pnruser,"w");
   fp=fopen(ui,"r");
   fscanf(fp,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv,pnr);
   fprintf(fi,"\n******************************************************************");
   fprintf(fi,"\n*                 |                                              *");
   fprintf(fi,"\n*     \\____Avian_(_)_AIR______/          Avian AIR               *");
   fprintf(fi,"\n*              o'   'o                                           *");
   fprintf(fi,"\n******************************************************************");
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*   NAME: %s                                                  *",name);
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*   FROM:                           TO:                      	 *");
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*   FLIGHT CODE: %s                                        *",flightcode);
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*   DEPARTURE TIME:                                              *");
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*   CLASS: 0                                                     *");
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*   GATE : 08                       SEAT NO : %s                 *",seatno);
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n*                                                                *");
   fprintf(fi,"\n******************************************************************");
 }
 if(ab!=2)
 {
	checkin();
 }


}

void manage()                     //START OF MANAGE
{
 clrscr();
 logo2();
 printf("\n                                 MANAGE FLIGHT ");
 box(1,6,80,21);
 goto xy(10,10);
 printf("1. Facilities");
 gotoxy(10,15);
 printf("2. Cancel Booking");
 box(1,22,80,24);
 delay(150);gotoxy(10,23);
 _setcursortype(_NORMALCURSOR);
 printf("Choose from the above: ");
 scanf("%d",&manage_choice);
 if(about_choice==1)
 {
  clrscr();
  logo2();
  printf("\n                                 FACILITIES ");
  box(1,6,80,21);

 }
 if(about_choice==2)
 {

 }
}                                 //END OF MANAGE

void status()
{                                 //START OF STATUS
 clrscr();
 logo2();
 printf("\nYou chose to view status of your flight");
}                                 //END OF STATUS

void account()                    //START OF ACCOUNT
{
	clrscr();
	 _setcursortype(_NOCURSOR);
	box(7,2,73,22);

	delay(200);
	gotoxy(30,8);
	printf("1.  signin\n");

	delay(250);
	gotoxy(30,10);
	printf("2.  signup");
	delay(300);
	gotoxy(30,12);
	printf("3.  change user info");
	delay(300);
	gotoxy(30,14);
	printf("4.  exit");
	box(7,23,73,25);
	delay(300);
	gotoxy(10,24);
	delay(300);
	 _setcursortype(_NORMALCURSOR);
	printf("Enter Your Choice [1-7]         ");
	scanf("%d",&a);
	if(a==1)
	{       clrscr();
		signin();
	}
	if(a==2)
	{       clrscr();
		signup();
	}
	if(a==3)
	{       clrscr();
		change();
	}
	getch();
}
void box(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		gotoxy(i,b);printf("\xcd");
		gotoxy(i,d);printf("\xcd");
	}
	for(j=b;j<d;j++)
	{
		gotoxy(a,j);printf("\xba");
		gotoxy(c,j);printf("\xba");
	}
		gotoxy(a,b);printf("\xc9");
		gotoxy(c,b);printf("\xbb");
		gotoxy(a,d);printf("\xc8");
		gotoxy(c,d);printf("\xbc");
}
void box1(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		gotoxy(i,b);printf("%c",196);
		gotoxy(i,d);printf("%c",196);
	}
	for(j=b;j<d;j++)
	{
		gotoxy(a,j);printf("%c",179);
		gotoxy(c,j);printf("%c",179);
	}
		gotoxy(a,b);printf("%c",218);
		gotoxy(c,b);printf("%c",191);
		gotoxy(a,d);printf("%c",192);
		gotoxy(c,d);printf("%c",217);
}
void signin()
{
			clrscr();
			box(7,2,73,22);
			gotoxy(10,6);
			printf("ENTER YOUR USER ID:\n");
			gotoxy(59,6);
			box1(48,5,70,7);
			gotoxy(50,6);
		     scanf("%s",&ui);


			fi=fopen(ui,"r");
			if(fi==NULL)
			{
				gotoxy(10,10);
				printf("Enter right user id\n");
			}
			else
			{
				fscanf(fi,"%d %s %s %s %d %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
				gotoxy(10,9);                                                                                                                // \t1\t%s\t%s\t%s\t%s",credit,cardmon,cardyear,cvv)
				printf("ENTER YOUR PASSWORD: \n");
				box1(48,8,70,10);
				gotoxy(50,9);
   while(1)
   {
	temp2=getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		printf("*");
	}
   }
   ab=strcmp(password,password1);
			if(ab==0)
			{       login=1;
			       fscanf(fi,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
				gotoxy(10,12);
					printf("NAME               : %s",name);
				gotoxy(10,13);
					printf("PASSPORT NUMBER    : %s",passport);
					gotoxy(10,14);
					printf("MOBILE NUMBER      : %s ",mobile);
					gotoxy(10,15);
					printf("GENDER             : %s",genderc);
				if(nation==1)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Australia");
				}
				if(nation==2)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : China");
				}
				if(nation==3)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Dubai");
				}
				if(nation==4)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : England");
				}
				if(nation==5)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : France");
				}
				if(nation==6)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Germany");
				}
				if(nation==7)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : India");
				}
				if(nation==8)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Japan");
				}
				if(nation==9)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Malaysia");
				}
				if(nation==10)
				{
					gotoxy(10,16);
					printf("NATIONALITY        : Singapore");
				}
				if(nation==11)
					{
					gotoxy(10,16);
					printf("NATIONALITY        : United States of America");
				}
					gotoxy(10,17);
					printf("MEDICAL CONDITION  : %s ",medical);

				 if(ans==1)
				 {
					gotoxy(10,18);
					printf("CREDIT CARD NUMBER : %s",credit);
				 }
				 else if(ans==2)
				 {
					gotoxy(10,18);
					printf("DEBIT CARD NUMBER  : %s",credit);
				 }

				 else if(ans==3)
				 {
					gotoxy(10,18);
					printf("UPI                : %s",credit );

				 }

				 fscanf(fi,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
		  //		 printf("%d",visacon);
				if(visacon==1)
				{
					gotoxy(10,19);
					printf("VISA NUMBER        : AUS%s",visanumber);
					visacon=1;
				}
				if(visacon==2)
				{
					gotoxy(10,19);
					printf("VISA NUMBER        : CHI%s",visanumber);
					visacon=2;
				}
			if(visacon==3)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : DUB%s",visanumber);
				visacon=3;
			}
			if(visacon==4)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : ENG%s",visanumber);
				visacon=4;
			 }
			 if(visacon==5)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : FRA%s",visanumber);
				visacon=5;
			}
			if(visacon==6)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : GER%s",visanumber);
				visacon=6;
			}
			if(visacon==7)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : IND%s",visanumber);
				visacon=7;
			}
			if(visacon==8)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : JAP%s",visanumber);
				visacon=8;
			}
			if(visacon==9)
			{
			gotoxy(10,19);
				printf("VISA NUMBER        : MAL%s",visanumber);
				visacon=9;
			}
			if(visacon==10)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : SIN%s",visanumber);
				visacon=10;
			}
			if(visacon==11)
			{
				gotoxy(10,19);
				printf("VISA NUMBER        : USA%s",visanumber);
				visacon=11;
			}
			 delay(2000);
			 mainmenu();
		  }

				else
			{
			gotoxy(10,12);
			printf("enter correct userid or password");
			}
}
}
void signup()
{

	clrscr();
	box(7,6,73,22);
	gotoxy(9,3);
	fp= fopen("id.xlsx","a");
	gotoxy(10,12);
	printf("ENTER USER ID");
	gotoxy(58,12);
	printf("=");
	gotoxy(60,12);
    scanf("%s",ui);
	clrscr();
	box(7,6,73,22);
	ch=fopen(ui,"r");
	fscanf(ch,"%d",&ch2);
	if(ch2==1)
	{
		gotoxy(10,15);
		printf("user id already exist plz enter another user id\n");
		delay(2000);
		ch2=0;
		main();
	}
	else
	{
	gotoxy(8,3);
	printf("*--------------------0--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
		fi=fopen(ui,"a");
		gotoxy(10,18);
		printf("NOTE: you can't cahnge your name,last name, gender,");
		gotoxy(15,19);
		printf(" mobile number after signing up.so be careful while");
		gotoxy(15,20);
		printf(" entering your data:)");

		gotoxy(10,7);
		printf("ENTER YOUR FIRST NAME");
		gotoxy(58,7);
		printf("=");
		gotoxy(60,7);
		scanf("%s",name);
		gotoxy(10,9);
		printf("ENTER YOUR LAST NAME");
		gotoxy(58,9);
		printf("=");
		gotoxy(60,9);
		scanf("%s",surname[10]);
		gotoxy(10,11);
		printf("ENTER GENDER 1.MALE");
		gotoxy(24,12);
		printf("2.FEMALE");
		gotoxy(24,13);
		printf("3.OTHER");
		gotoxy(58,11);
		printf("=");
		gotoxy(60,11);
		scanf("%d",&gender);
		gotoxy(10,15);
  mobile:	printf("ENTER YOUR MOBILE NUMBER");
		gotoxy(58,15);
		printf("=");
		gotoxy(60,15);
		scanf("%s",mobile);
		ab=strlen(mobile);
		if(ab==10)
		{
			a=1;
			if(gender==1)
			{
				fprintf(fi,"%d %s %s MALE",a,name,mobile);
				fprintf(fp,"%s\t%s\t%s\tMALE",ui,name,mobile);

			}
			else if(gender==2)
			{
				fprintf(fi,"%d %s %s FEMALE",a,name,mobile);
				fprintf(fp,"%s\t%s\t%s\tFEMALE",ui,name,mobile);

			}
			else if(gender==3)
			{
				fprintf(fi,"%d %s %s OTHER ",a,name,mobile);
				fprintf(fp,"%s\t%s\t%s\tOTHER",ui,name,mobile);
			}

			information(ui);
		}
		else
		{
			gotoxy(10,17);
			printf("Enter correct mobile number:");
			goto mobile;
		}
	}
}

void change()
{
		clrscr();
		box(7,2,73,22);
		gotoxy(10,6);
		printf("enter your user id:\n");
box1(48,5,70,7);
		gotoxy(50,6);
		scanf("%s",user);
		fi=fopen(user,"r");
		if(fi==NULL)
		{               gotoxy(10,8);
				printf("Enter right user id\n");
		}
		else
		{
		     //	fscanf(fi,"%d %s %s %s %d %s %s",&yes,name,mobile,genderc,&nation,passport1,temp);
		     fscanf(fi,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
			gotoxy(10,9);
			printf("enter your password:\n");
		     // gotoxy(60,8);
			box1(48,8,70,10);
			   gotoxy(50,9);
while(1)
   {
	temp2= getch();
	if(temp2==ENTER)
	{
		password[i]='\0';
		break;
	}
	else if(temp2==BKSP)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(temp2==TAB||temp2==SPACE)
	{
		continue;
	}
	else
	{
		password[i]=temp2;
		i++;
		printf("*");
	}
   }
			ans=strcmp(password1,password);
			if(ans==0)
			{       gotoxy(30,12);
				delay(300);
				printf("What do you want to change");
				delay(300);
				gotoxy(30,13);
				delay(300);
				printf("1. change passowrd");
				gotoxy(30,14);
				delay(300);
				printf("2. change user id");
				box(7,23,73,25);
				delay(300);
				gotoxy(10,24);
				delay(300);
				printf("Enter Your Choice [1-3]         ");
				scanf("%d",&a);
				fclose(fi);
				if(a==1)
				{
				      clrscr();
				      chp(user,password);
				}
				if(a==2)
				{
				       clrscr();
				       chu(user);
				}
				getch();
		}
		else
		{
			gotoxy(10,18);
			printf("incorrect password\n");
		}
	}
}
void chp(char user[],char temp2[])
{		clrscr();
		fi=fopen(user,"a");
		box(7,2,73,22);
	       fscanf(fi,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
		gotoxy(10,6);
		printf("your current password is:%s",temp2);
		gotoxy(10,8);
		printf("set your new password\n");
		gotoxy(60,8);
		scanf("%s",&password);
		remove(user);
		pr=fopen(user,"a");
		fprintf(fi,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s",yes,name,mobile,genderc,nation,passport,visacon,visanumber,password,question,ansquestion,medical,ans,credit,cardmon,cardyear,cvv);
	      //	fprintf(pr,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",yes,name,mobile,genderc,nation,passport,password1,question,ansquestion,medical,ans,credit,cardmon,cardyear,cvv);
		gotoxy(10,12);
		thanks();
		fclose(pr);
}
void chu(char user[])
{
	clrscr();
	box(7,2,73,22);
	pr=fopen(user,"r");
	gotoxy(10,8);
	printf("your current user id is:%s",user);
	gotoxy(10,10);
	printf("set your new user id\n");
	gotoxy(60,10);
	scanf("%s",&pass3);
	ch=fopen(pass3,"r");
	fscanf(ch,"%d",&ch2);
	if(ch2==1)
	{
		gotoxy(10,15);
		printf("user id already exist plz enter another user id\n");
		delay(2000);
		ch2=0;
		chu(user);
	}
	else
	{
//		fscanf(pr,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
	 fscanf(pr,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,&visacon,visanumber,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
	remove(user);
	ur=fopen(pass3,"w");
   //	fprintf(ur,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",yes,name,mobile,genderc,nation,passport,password1,question,ansquestion,medical,ans,credit,cardmon,cardyear,cvv);
     fprintf(ur,"%d %s %s %s %d %s %d %s %s %s %s %s %s %d %s %s %s %s",yes,name,mobile,genderc,nation,passport,visacon,visanumber,password1,question,ansquestion,medical,ans,credit,cardmon,cardyear,cvv);
	gotoxy(10,12);
	thanks();
}
}
void information(char ui[])
{
	clrscr();
	gotoxy(8,3);
	printf("0--------------------*--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(1,6,80,8);
	gotoxy(2,7);
	delay(50);printf(" No. Place                                                                Code");
	box(1,6,80,21);//first box
	gotoxy(2,9);
	delay(50);printf(" 1.  Australia.............................................................BNE");//done
	gotoxy(2,10);
	delay(50);printf(" 2.  China.................................................................BJS");//done
	gotoxy(2,11);
	delay(50);printf(" 3.  Dubai.................................................................DXB");//done
	gotoxy(2,12);
	delay(50);printf(" 4.  England...............................................................LHR");//done
	gotoxy(2,13);
	delay(50);printf(" 5.  France................................................................CDG");//done
	gotoxy(2,14);
	delay(50);printf(" 6.  Germany...............................................................FRA");//done
	gotoxy(2,15);
	delay(50);printf(" 7.  India.................................................................BOM");//done
	gotoxy(2,16);
	delay(50);printf(" 8.  Japan.................................................................KIX");
	gotoxy(2,17);
	delay(50);printf(" 9.  Malaysia..............................................................KUL");
	gotoxy(2,18);
	delay(50);printf(" 10. Singapore.............................................................SIN");
	gotoxy(2,19);
	delay(50);printf(" 11. United States of America..............................................JFK");
	gotoxy(2,20);
	delay(50);
	box(1,22,80,24);//second box
	gotoxy(5,23);
	printf("ENTER YOUR NATIONALITY: [0-11]: ");
	scanf("%d",&nationchoice);
	ch=fopen(ui,"a");
	fp=fopen("id.xlsx","a");
	fprintf(ch," %d",nationchoice);
	fprintf(fp,"\t%d",nationchoice);
pass:	clrscr();
		gotoxy(10,18);
		printf("NOTE: you can't cahnge your passport number");
		gotoxy(15,19);
		printf(" after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------*--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	gotoxy(10,8);
	printf("ENTER YOUR PASSPORT NUMBER:[8 char]\n");
	gotoxy(58,8);
	printf("=");
	ab=nationchoice;
	gotoxy(60,8);
	scanf("%s",passportnumber);
	strle=strlen(passportnumber);
	if(strle==8)
	{
		fprintf(ch,"\t%s",passportnumber);
		fprintf(fp,"\t%s",passportnumber);
		gotoxy(10,10);
visa:		printf("DO YOU HAVE AN VISA OF ANY COUNTERY: 1.YES");
		gotoxy(10,11);
		printf("                                     2.NO");
		gotoxy(58,10);
		printf("=");
		gotoxy(60,10);
		scanf("%d",&ab);
		if(ab==1)
		{
			//visa
			visa(ui);
		}
		else if(ab==2)
		{
			 gotoxy(10,14);
			 printf("YOU NEED A VISA NUMBER TO PROCEED");
		}

		else
		{
			gotoxy(10,0);
			printf("ENTER CORRECT CHOISE");


	}
	}
	else
	{
		clrscr();
		box(7,6,73,22);
		gotoxy(10,15);
		printf("PLEASE ENTER VALID PASSPORT NUMBER");
		delay(2000);
		goto pass;
	}
	getch();
}

void security(char ui[])
{
	clrscr();
	gotoxy(8,3);
	printf("0--------------------0--------------------*--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	ch=fopen(ui,"a");
	gotoxy(10,8);
	printf("SET YOUR PASSWORD");
	gotoxy(58,8);
	printf("=");
	gotoxy(60,8);
	scanf("%s",password);
	gotoxy(10,10);
	printf("RE-TYPE YOUR PASSWORD");
	gotoxy(58,10);
	printf("=");
	gotoxy(60,10);
	scanf("%s",password1);
	ans=1;
	ans=strcmp(password,password1);
	if(ans==0)
	{
		fprintf(ch," %s",password);
		gotoxy(28,12);
		printf("SECURITY QUESTION:  MAKE YOUR QUESTION");
		gotoxy(10,14);
		printf("WHAT IS YOUR FAVORITE = ");
		gotoxy(35,14);
		printf("=");
		gotoxy(37,14);
		printf("___________");
		gotoxy(37,14);
		scanf("%s",question);
		fprintf(ch,"\t%s",question);
		gotoxy(10,16);
		printf("ANSWER OF YOUR QUESTION:");
		gotoxy(35,16);
		printf("=");
		gotoxy(37,16);
		printf("___________");
		gotoxy(37,16);
		scanf("%s",ansquestion);
		fprintf(ch,"\t%s",ansquestion);
		additional(ui);
	}
	else
	{
		gotoxy(10,12);
		printf("ENTER CORRECT PASSWORD:");
		delay(500);
		security(ui);
	}
}
additional(char ui[])
{
	clrscr();
			gotoxy(10,18);
		printf("NOTE: you can't cahnge your medical condition status");
		gotoxy(15,19);
		printf(" after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------0--------------------0--------------------*");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	ch=fopen(ui,"a");
	gotoxy(10,8);
	printf("DO YOU HAVE ANY MEDICAL CONDITION");
	gotoxy(45,8);
	printf("1.YES");
	gotoxy(45,9);
	printf("2.NO");
	gotoxy(58,8);
	printf("=");
	gotoxy(60,8);
	scanf("%d",&ab);
	if(ab==1)
	{
		gotoxy(10,12);
		printf("GIVE US SHORT DISCRIPTION ABOUT YOUR MEDICAL CONDITION OR NAME");
		gotoxy(10,13);
		scanf("%s",medical);
		gotoxy(39,18);
		fprintf(ch,"\t%s",medical);
		payment(ui);
	 }
	 if(ab==2)
	 {
		fprintf(ch,"\tNO");
		payment(ui);
	 }
	 return 0;
}
payment(char ui[])
{
	clrscr();
			gotoxy(10,18);
		printf("NOTE: you can't cahnge your credit card number,debit card number");
		gotoxy(15,19);
		printf("and upi after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------0--------------------0--------------------*");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	ch=fopen(ui,"a");
	gotoxy(10,8);
	printf("DO YOU WANT TO SAVE YOUR CREDIT CARD OR DEBIT CARD:");
	gotoxy(42,9);
	printf("1.YES");
	gotoxy(42,10);
	printf("2.NO");
	gotoxy(42,11);
	scanf("%d",&ans);
	if(ans==1)
	{
		clrscr();
		gotoxy(8,3);
		printf("0--------------------0--------------------0--------------------*");
		gotoxy(5,4);
		printf("personal detail    information           security         additional");
		box(7,6,73,22);
		gotoxy(10,8);
		printf("WHAT DO YOU WANT TO SAVE:");
		gotoxy(35,9);
		printf("1.CREDIT CARD");
		gotoxy(35,10);
		printf("2.DEBIT CARD");
		gotoxy(35,11);
		printf("3.UPI");
		gotoxy(35,12);
		scanf("%d",&ab);
		if(ab==1)
		{
			creditfun(ui);
		}
		else if(ab==2)
		{
			debitfun(ui);
		}
		else if(ab==3)
		{
			upifun(ui);
		}
		else
		{

		}

	 if(ans==2)
	{
		gotoxy(35,12);
		printf("OK NO PROBLEM:");
	}

	}
	return 0;
}
void creditfun(char ui[])
  {
			clrscr();
			gotoxy(10,18);
		printf("NOTE: you can't cahnge your credit card number ");
		gotoxy(15,19);
		printf("after signing up.so be careful while entering your data:)");

			gotoxy(8,3);
			printf("0--------------------0--------------------0--------------------*");
			gotoxy(5,4);
			printf("personal detail    information           security         additional");
			box(7,6,73,22);
			ch=fopen(ui,"a");
			gotoxy(10,8);
			printf("ENTER YOUR CREDIT CARD NUMBER");
			gotoxy(48,8);
			printf("=");
			gotoxy(50,8);
			scanf("%s",credit);
			ans=strlen(credit);
			if(ans==16)
			{
       creditmon:		gotoxy(10,10);
				printf("MONTH");
				gotoxy(58,10);
				printf("=");
				gotoxy(60,10);
				scanf("%s",cardmon);
				ans=strlen(cardmon);
				if(ans==2||ans==1)
				{
		  credityear:			gotoxy(10,12);
					printf("YEAR");
					gotoxy(58,12);
					printf("=");
					gotoxy(60,12);
					scanf("%s",cardyear);
					ans=strlen(cardyear);
					if(ans==4)
					{
		     cvv:				gotoxy(10,14);
						printf("ENTER YOUR CVV");
						gotoxy(58,14);
						printf("=");
						gotoxy(60,14);
						scanf("%s",cvv);
						ans=strlen(cvv);
						if(ans==3)
						{

							fprintf(ch," 1 %s %s %s %s",credit,cardmon,cardyear,cvv);
							thanks();

						}
						else
						{
							gotoxy(10,10);
						printf("please Enter correct cvv number");
						goto cvv;
						}
					}
					else
					{
						gotoxy(10,10);
						printf("please Enter correct credit card year");
						goto credityear;
					}
				}
				else
					{
					gotoxy(10,10);
					printf("please Enter correct credit card number");
					goto creditmon;

				}
			}
			else
			{
				gotoxy(10,10);
				printf("please Enter correct credit card number");
 //				goto credit;
			}
}
       void debitfun(char ui[])
       {
			//debit
     debit:			clrscr();
		gotoxy(10,18);
		printf("NOTE: you can't cahnge your debit card number");
		gotoxy(15,19);
		printf(" after signing up.so be careful while entering your data:)");

			gotoxy(8,3);
			printf("0--------------------0--------------------0--------------------*");
			gotoxy(5,4);
			printf("personal detail    information           security         additional");
			box(7,6,73,22);
			ch=fopen(ui,"a");
			gotoxy(10,8);
			printf("ENTER YOUR DEBIT CARD NUMBER");
			gotoxy(48,8);
			printf("=");
			gotoxy(50,8);
			scanf("%s",debit);
			ans=strlen(credit);
			if(ans==16)
			{
       debitmon:		gotoxy(10,10);
				printf("MONTH");
				gotoxy(58,10);
				printf("=");
				gotoxy(60,10);
				scanf("%s",cardmon);
				ans=strlen(cardmon);
				if(ans==2||ans==1)
				{
		  debityear:			gotoxy(10,12);
					printf("YEAR");
					gotoxy(58,12);
					printf("=");
					gotoxy(60,12);
					scanf("%s",cardyear);
					ans=strlen(cardyear);
					if(ans==4)
					{
		     cvvd:				gotoxy(10,14);
						printf("ENTER YOUR CVV");
						gotoxy(58,14);
						printf("=");
						gotoxy(60,14);
						scanf("%s",cvv);
						ans=strlen(cvv);
						if(ans==3)
						{

							fprintf(ch," 2 %s %s %s %s",credit,cardmon,cardyear,cvv);
							thanks();
						}
						else
						{
							gotoxy(10,10);
						printf("please Enter correct cvv number");
						goto cvvd;
						}
					}
					else
					{
						gotoxy(10,10);
						printf("please Enter correct credit card year");
						goto debityear;
					}
				}
				else
					{
					gotoxy(10,10);
					printf("please Enter correct credit card number");
					goto debitmon;

				}
			}
			else
			{
				gotoxy(10,10);
				printf("please Enter correct credit card number");
				goto debit;
			}
		}
		   void upifun(char ui[])
		{
			//upi
			clrscr();
			gotoxy(10,18);
			printf("NOTE: you can't cahnge your upi after signing up.");
			gotoxy(15,19);
			printf("so be careful while entering your data:)");
			      //	fi=fopen(ui,"a");
			fscanf(fi,"%d %s %s %s %d %s %s %s %s %s %d %s %s %s %s",&yes,name,mobile,genderc,&nation,passport,password1,question,ansquestion,medical,&ans,credit,cardmon,cardyear,cvv);
			gotoxy(8,3);
			printf("0--------------------0--------------------0--------------------*");
			gotoxy(5,4);
			printf("personal detail    information           security         additional");
			box(7,6,73,22);
		      ch=fopen(ui,"a");
			gotoxy(10,8);
			printf("YOUR UPI IS: %s@AVIAN",mobile);
			gotoxy(10,10);
			printf("DO YOU WANT TO ADD ANOTHER UPI:");
			gotoxy(42,10);
			printf("1. YES");
			gotoxy(42,11);
			printf("2. NO");
			gotoxy(42,12);
			scanf("%d",&a);
			if(a==1)
			{
	    upi:			gotoxy(10,14);
				printf("ENTER YOUR MOBILE NUMBER:");
				gotoxy(58,14);
				printf("=");
				gotoxy(70,14);
				printf("@AVIAN");
				gotoxy(60,14);
				scanf("%s",upi);
				ab=strlen(upi);
				if(ab==10)
				{
					fprintf(ch," 3 %s@AVIAN",upi);
					thanks();
				}
				else
				{
				 gotoxy(10,20);
				printf("ENTER VALID NUMBER:");
				goto upi;

				}
			}
		if(a==2)
		{

			fprintf(ch,"  3 %s@AVIAN",mobile);
			thanks();
		}
		else
		{
			gotoxy(20,13);
			printf("PLEASE ENTER CORRECT CHOICE");
			payment(ui);
		}
	getch();
}


void visa(char ui[])
{
	clrscr();
	gotoxy(8,3);
	printf("0--------------------*--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security        additional");
	box(1,6,80,8);
	gotoxy(2,7);
	delay(50);printf(" No. Place                                                                Code");
	box(1,6,80,21);//first box
	gotoxy(2,9);
	delay(50);printf(" 1.  Australia.............................................................BNE");//done
	gotoxy(2,10);
	delay(50);printf(" 2.  China.................................................................BJS");//done
	gotoxy(2,11);
	delay(50);printf(" 3.  Dubai.................................................................DXB");//done
	gotoxy(2,12);
	delay(50);printf(" 4.  England...............................................................LHR");//done
	gotoxy(2,13);
	delay(50);printf(" 5.  France................................................................CDG");//done
	gotoxy(2,14);
	delay(50);printf(" 6.  Germany...............................................................FRA");//done
	gotoxy(2,15);
	delay(50);printf(" 7.  India.................................................................BOM");//done
	gotoxy(2,16);
	delay(50);printf(" 8.  Japan.................................................................KIX");
	gotoxy(2,17);
	delay(50);printf(" 9.  Malaysia..............................................................KUL");
	gotoxy(2,18);
	delay(50);printf(" 10. Singapore.............................................................SIN");
	gotoxy(2,19);
	delay(50);printf(" 11. United States of America..............................................JFK");
	gotoxy(2,20);
	delay(50);
	box(1,22,80,24);//second box
	gotoxy(5,23);
	printf("ENTER YOUR VISA COUNTRY: [0-11]: ");
	scanf("%d",&visacon);
	ch=fopen(ui,"a");
	fp=fopen("userid1.xlsx","w");
	if(visacon>=1&&visacon<=11)
	{
	fprintf(ch," %d",visacon);
	fprintf(fp,"\t%d",visacon);
	if(nationchoice!=visacon)
	{
	clrscr();
	gotoxy(10,18);
	printf("NOTE: you can't cahnge your passport number");
	gotoxy(15,19);
	printf(" after signing up.so be careful while entering your data:)");

	gotoxy(8,3);
	printf("0--------------------*--------------------0--------------------0");
	gotoxy(5,4);
	printf("personal detail    information           security         additional");
	box(7,6,73,22);
	gotoxy(10,8);
	printf("ENTER YOUR VISA NUMBER [8 NUM]:\n");
	gotoxy(58,8);
	printf("=");
	if(visacon==1)
	{
		gotoxy(60,8);
		printf("AUS");
		visacon=1;
	}
	if(visacon==2)
	{		gotoxy(60,8);
		printf("CHI");
		visacon=2;
	}
	if(visacon==3)
	{      	gotoxy(60,8);
		printf("DUB");
		visacon=3;
	}
	if(visacon==4)
	{
		gotoxy(60,8);
		printf("ENG");
		visacon=4;
	}
	if(visacon==5)
	{
		gotoxy(60,8);
		printf("FRA");
		visacon=5;
	}
	if(visacon==6)
	{
		gotoxy(60,8);
		printf("GER");
		visacon=6;
	}
	if(visacon==7)
	{
		gotoxy(60,8);
		printf("IND");
		visacon=7;
	}
	if(visacon==8)
	{
		gotoxy(60,8);
		printf("JAP");
		visacon=8;
	}
	if(visacon==9)
	{
		gotoxy(60,8);
		printf("MAL");
		visacon=9;
	}
	if(visacon==10)
	{
		gotoxy(60,8);
		printf("SIN");
		visacon=10;
	}
	if(visacon==11)
	{
		gotoxy(60,8);
		printf("USA");
		visacon=11;
	}
	gotoxy(63,8);
	scanf("%s",visanumber);
      //	ans=visacon;
//	printf("%s %d",visanumber,visacon);
	strle=strlen(visanumber);
	if(strle==8)
	{
		fprintf(ch,"  %s",visanumber);
		fprintf(fp,"\t%s",visanumber);
		security(ui);
	}


}
else
{
	gotoxy(5,10);
	printf("ENTER RIGHT CHOICE:");
	visa(ui);
}
}
}
void thanks()
{
	clrscr();
		box(7,2,73,22);
	gotoxy(20,10);
	printf("THANK YOU FOR JOINING Avian AIR");

}

				 //END OF ACCOUNT

void about()
{                                 //START OF ABOUT
 clrscr();
 logo2();
 printf("\n                                     ABOUT ");
 box(1,6,80,21);
 delay(150);gotoxy(10,9);
 printf("1. About Us.");
 delay(150);gotoxy(10,12);
 printf("2. Services.");
 delay(150);gotoxy(10,15);
 printf("0. Go Back To The Main Menu.");
 //gotoxy(25,18);
 box(1,22,80,24);
 delay(150);gotoxy(10,23);
 _setcursortype(_NORMALCURSOR);
 printf("Choose from the above: ");
 scanf("%d",&about_choice);
 if(about_choice==1)
 {
  clrscr();
  logo2();
  delay(150);printf("\n                                   AvianAIR");
  box(1,6,80,21);
  delay(50);gotoxy(2,8);
  printf("         AvianAIR is an international aviation group founded in 1995,");
  delay(50);gotoxy(2,9);
  printf("          serving millions of passengers with global connections in  ");
  delay(50);gotoxy(2,10);
  printf("         over 11 countries.In 2017, it generated about 31.7 Million  ");
  delay(50);gotoxy(2,11);
  printf("           USD and had over 40000 hardworking staff members. This    ");
  delay(50);gotoxy(2,12);
  printf("          revolutionary idea was started by 4 individuals aspiring   ");
  delay(50);gotoxy(2,13);
  printf("          for an inexpensive and luxurious way to travel the world.  ");
  delay(50);gotoxy(2,14);
  printf("         When you fly with us, we guarantee that you will experience ");
  delay(50);gotoxy(2,15);
  printf("           something unlike ever before. Have a fantastic journey.   ");
  delay(50);gotoxy(2,17);
  printf("                             -The AvianAIR Team                      ");
  delay(50);gotoxy(2,19);
  printf("                           << Taking You Higher >>                   ");
  delay(7000);
  about();
 }
 else if(about_choice==2)
 {
  clrscr();
  logo2();
  delay(150);printf("\n                                    SERVICES");
  box(1,6,80,21);
  delay(150);gotoxy(10,9);
  printf("Handicap services like Wheelchairs,");
  delay(150);gotoxy(10,11);
  printf("Medical Services/Emergency landing,");
  delay(150);gotoxy(10,13);
  printf("High Security,");
  delay(150);gotoxy(10,15);
  printf("Personal Information Privacy,");
  delay(150);gotoxy(10,17);
  printf("In-flight Food & Entertainment.");
  delay(150);gotoxy(10,19);
  printf("and much more.");
  delay(7000);
  about();
 }
 else if(about_choice==0)
 {                               //START OF BACK
  clrscr();
  mainmenu();
 }                                //END OF BACK
 else
 {
  clrscr();
  logo2();
  box(1,6,80,21);
  gotoxy(10,10);
  printf("INPUT ERROR. Re-running About Function.");
  delay(1000);
  about();
 }
}                                 //END OF ABOUT

void other()
{                                 //START OF OTHER
 clrscr();
 logo2();
 delay(150);printf("\n                                     OTHER ");
 box(1,6,80,21);
 delay(150);gotoxy(10,9);
 printf("1. Rules/Disciplines.");
 delay(150);gotoxy(10,13);
 printf("2. Contact Us.");
 delay(150);gotoxy(10,17);
 printf("0. Go Back To The Main Menu.");
 //gotoxy(25,18);
 box(1,22,80,24);
 delay(150);
 gotoxy(10,23);
 _setcursortype(_NORMALCURSOR);
 printf("Choose from the above: ");
 scanf("%d",&other_choice);
 if(other_choice==1)
 {
  clrscr();
  logo2();
  delay(150);printf("\n                                     RULES ");
  box(1,6,80,21);
  delay(150);gotoxy(3,8);
  printf("As per Government Regulations, all passengers at airports will be frisked   ");
  delay(150);gotoxy(3,9);
  printf("and their hand baggage checked by the security staff before boarding the    ");
  delay(150);gotoxy(3,10);
  printf("flight.                                                                     ");
  delay(150);gotoxy(3,12);
  printf("In case of damaged or lost baggage, the passenger should immediately report ");
  delay(150);gotoxy(3,13);
  printf("it to our ground staff on arrival, before leaving the terminal building.    ");
  delay(150);gotoxy(3,15);
  printf("The boarding gate closes 25 minutes prior to departing time.Please check the");
  delay(150);gotoxy(3,16);
  printf("flight information screen to get the latest updates.                        ");
  delay(150);gotoxy(3,18);
  printf("Passengers are requested to co-operate with AvianAIR and the relevant       ");
  delay(150);gotoxy(3,19);
  printf("authorities. Have a pleasant flight.                                        ");
  delay(7000);
  other();
 }
 else if(other_choice==2)
 {
  clrscr();
  logo2();
  delay(150);printf("\n                                    CONTACT");
  box(1,6,80,21);
  delay(150);gotoxy(10,9);
  printf("WEBSITE: AvianAIR.com");
  delay(150);gotoxy(10,12);
  printf("EMAIL: avian.support@gmail.com , dakamihir@gmail.com");
  delay(150);gotoxy(10,15);
  printf("PHONE: 28894021");
  delay(5000);
  other();
 }
 else if(other_choice==0)
 {
  clrscr();
  mainmenu();
 }
 else
 {
  clrscr();
  logo2();
  box(1,6,80,21);
  gotoxy(10,10);
  printf("INPUT ERROR. Re-running Other Function.");
  delay(1000);
  other();
 }
}                                 //END OF OTHER

				  //TO PRINT BOX BASED ON COORDINATES
main()
{
 srand(time(NULL));
 random=rand()%1000;
 sprintf(buffer,"%d",random);
 textcolor(1);
 textbackground(7);
 anim1();
 logo1anim();
 anim2();
 logo2();
 mainmenu();
 getch();
}
