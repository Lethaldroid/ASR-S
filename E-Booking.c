#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<stdbool.h>                                                                 

char uname[100], str[100],seats[200];
char book[11][50] = { "Australia", "China", "Dubai", "England", "France", "Germany", "India", "Japan", "Russia", "Singapore", "USA" };
char country_name[11][50] = { "Australia", "China", "Dubai", "England", "France", "Germany", "India", "Japan", "Russia", "Singapore", "USA" };
int i=-1,choices[11][20],backup[11][20],count=1,s_counter=0,var1,var2,var3;
int *ptr=&i;
int a = 20,n;
char str1[100];     
int country,s1;
FILE *fpr;
int k,w;
int selection = 0;
HANDLE  hConsole;

void anim1(void);
void logo1anim(void);
void logo1(void);
void logo2(void);
void anim2(void);
void delay(unsigned int);
void loading (void);
int login(void);
int signup(void);
int mainmenu(void);
int booking(void);
int modifybooking(void);
void DisplaySeat(int);
bool exist(int, int choices[11][20],int n);
void Display(void);


int main()
{
    
for(int u=0;u<11;u++)
{
    for(int p=0;p<20;p++)
    {
        backup[u][p] = 0;
    }
}


  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

system("color 0E");
    anim1();
    logo1anim();
    logo1();
    logo2();
    anim2();
system("color 07");

    int selector=0,choice=0,holder=0,book,mod=-1;
    
      int Z;
            FILE *fp1;
                  fp1  = fopen("temp.txt", "r");

                 if(fp1!=NULL)
                 {
                     for(int x=0; x<11; x++)
                     {
                         for (int z=0; z<20; z++)
                         {

                             fscanf(fp1,"%d\n",&choices[x][z]);
                          if(z==19 && x == 10)
                             {
                               fscanf(fp1,"%d\n",&Z);
                             }
                         }
                     }
                 }
                 fclose(fp1);
                 if( (Z!=-1) && (Z!=0))
                 {
                  *ptr=Z;
                 }
                 
        start:
            system("cls");
        printf("\t--------------------------------------------------\n");
        printf("\t--------------LOGIN TO CONTINUE-------------------\n");
        printf("\t--------------------------------------------------\n");
        printf("\t---------------------OR---------------------------\n");
        printf("\t--------------------------------------------------\n");
        printf("\t--------------SIGNUP TO CONTINUE------------------\n");
        printf("\t--------------------------------------------------\n\n\n");

        printf("Press 1 to LOGIN\n");
        printf("Press 2 to SIGNUP\n");
        printf("Press 3 to EXIT\n");
        printf("\nYour selection: ");
        scanf("%d",&selector);



        if(selector==1)
        {
            holder = login();
        }
        else if(selector==2)
        {
            signup();
        }
        else if(selector==3)
        {
            return 0;
        }
        else
        {
            printf("\nPlease Choose a valid choice!\n");
            goto start;
        }


    m_menu:

        if(holder == 1) //if login is successfull
        {
            system("cls");

            choice = mainmenu();
        }
        else if(holder == 0)//if login is unsuccessfull
        {
            system("cls");
            goto start;
        }

        if(choice == 1)// if user selects to book a seat
        {
            book = booking();

        }
        else if(choice == 2) //if user selects to remove booking
        {
             mod = modifybooking();
        }
        else if (choice == 3)//if user selects to EXIT
        {

            ending:
                system("cls");
            printf("YOUR BORDING PASS IS CREATED SUCCESSFULLY\n\n");
             printf("IF YOU NEED AN SOFT COPY OF BORDING PASS JUST GO TO:\n");
             printf("C:/Users/Documents/programs/%s\n",uname);
             printf("THANK YOU OF CHOOSING NUST AIR\n");
               printf("\n******************************************************************");
               printf("\n*                 |                                              *");
               printf("\n*      \\____NUST_(_)_AIR______/          NUST  AIR               *");
               printf("\n*              o'   'o                                           *");
               printf("\n******************************************************************");
               printf("\n                                                                ");
               printf("\n   NAME: %s                                        ",uname);
               printf("\n                                                                ");
               printf("\n   FROM: PAKISTAN                                      	 ");            
               
               int c_count=0,var3=-1;
               fpr = fopen(uname,"r");
               fscanf(fpr,"%s",str1);
                while(fscanf(fpr, "%d",&s1)!=EOF)
                {
                    if(s1 == -5)
                    {
                        
                        fscanf(fpr, "%d",&country);
                        if(country != var3 )
                        {
                            c_count++;
                            printf("\n   TO  : %s",country_name[country]);
                        }
                        var3 = country;
                        
                         if(c_count>1)
                        {
                            k = 10;
                            SetConsoleTextAttribute(hConsole,k);
                            printf("\n\n        AND\n");
                            k=7;
                            SetConsoleTextAttribute(hConsole,k);
                            printf("\n   TO  : %s",country_name[country]);
                        }
                            
                       
                    }
                    
                    
                        
                }
            
                fclose(fpr);
               
               printf("\n");
               printf("\n   DEPARTURE TIME: 14:00                                        ");
               printf("\n                                                                ");
               printf("\n                                                                ");
               printf("\n   GATE : 08                   SEAT NOS :  ");
               fpr = fopen(uname,"r");
               fscanf(fpr,"%s",str1);
                while(fscanf(fpr, "%d",&s1)!=EOF)
                {
                    if(s1 == -5)
                    {
                        fscanf(fpr, "%d",&country);
                    }
                    else
                    {
                        printf("%d  ",s1);    
                    }
                    
                        
                }
            
          fclose(fpr);
               printf("\n                                                                ");
               printf("\n                                                                ");
               printf("\n******************************************************************");
               
               return 0;
               
        }
        if(mod == 0)    
        {
            printf("You have not reserved any seat!");
            return 0;
        }
        else if (mod==1)
        {
            FILE *file;
                        file  = fopen("temp.txt", "w");
                    for(int z=0;z<11;z++)
                    {
                        for(int x=0; x<20; x++)
                        {
                            fprintf(file,"%d\n",choices[z][x]);

                            if(z==10 && x==19)
                            {
                            fprintf(file,"%d\n",i);
                            }
                        }
                    }
                    delay(2000);
            return 0;
        }

        if (book == 0)
        {
            FILE *file;
                        file  = fopen("temp.txt", "w");
                    for(int z=0;z<11;z++)
                    {
                        for(int x=0; x<20; x++)
                        {
                            fprintf(file,"%d\n",choices[z][x]);

                            if(z==10 && x==19)
                            {
                            fprintf(file,"%d\n",i);
                            }
                        }
                    }

                        fclose(file);
                    if(s_counter>=4)
                    {
                        system("cls");
                        printf("You have booked 4 seats.\n");
                        printf("Your bookings have been saved successfully.\n");
                        printf("Exiting in 5 seconds\n");
                        delay(5000);
                        goto ending;
                    }
                    else
                    {
                        system("cls");
                        printf("\nYour bookings have been saved successfully.\n");
                        printf("Exiting in 5 seconds\n");
                        delay(5000);
                        goto ending;
                    }

        }


    return 0;


}
int modifybooking(void)
{
  
        system("cls");
        int seat_counter;

        if(i<0)
        {
            return 0;
        }
        else
        {
        printf("\n Clearing your bookings!");
        delay(500);
        FILE *fpr;
        fpr = fopen(seats,"r");
        fscanf(fpr,"%d",&seat_counter);
        fclose(fpr);
        fpr = fopen(uname,"r");
        fscanf(fpr,"%s",str1);
            while(fscanf(fpr, "%d ",&s1)!=EOF)
            {
                    if(s1 == -5)
                    {
                        fscanf(fpr, "%d",&country);
                    }
                for(int h=0;h<20;h++)
                {
             
                    if(choices[country][h]==s1)
                    {
                        choices[country][h] = 0;
                    }
                }
                
            }
            
          fclose(fpr);
         
        fpr = fopen(uname,"w");
        fprintf(fpr,"%s\n",str1);
        fclose(fpr);
        fpr = fopen(seats,"w");
        fprintf(fpr,"0");
        fclose(fpr);

        loading();
        system("cls");
        printf("Bookings Cleared Successfully!");
        delay(2000);
        return 1;
        }
}
int booking(void)
{
     int n;
     char opt;
if(s_counter>=4)
{
    return 0;
}
else
    k = 257;
    SetConsoleTextAttribute(hConsole,k);
    printf("\n\nYou cannot book more than 4 seats on 1 account!\n");
    k=7;
    SetConsoleTextAttribute(hConsole,k);
    printf("\n                                   ARRIVAL \n\n");
    printf(" No. Place                      \tAirport                                   \tCode\n\n\n");
    printf(" 1.  Australia..................\tBrisbane Airport...........................\tBNE\n");
    printf(" 2.  China......................\tBeijing Capital International Airport......\tBJS\n");
    printf(" 3.  Dubai......................\tDubai International Airport................\tDXB\n");
    printf(" 4.  England....................\tHeathrow Airport...........................\tLHR\n");
    printf(" 5.  France.....................\tCharles de Gaulle Airport..................\tCDG\n");
    printf(" 6.  Germany....................\tFrankfurt International Airport.............\tFRA\n");
    printf(" 7.  India......................\tChhatrapati Shivaji International Airport..\tBOM\n");
    printf(" 8.  Japan......................\tKansai International Airport...............\tKIX\n");
    printf(" 9.  Russia.....................\tMoscow Domodedovo Airport..................\tDME\n");
    printf(" 10. Singapore..................\tChangi Airport.............................\tSIN\n");
    printf(" 11. United States of America...\tJohn F Kennedy International Airport.......\tJFK\n");

    
    printf("\nYour selection: ");
    scanf("%d",&selection);

    selection = selection-1;

    printf("\n\nSelection successfull !\n");
    
    int Z;
            FILE *fp1;
                  fp1  = fopen("temp.txt", "r");

                 if(fp1!=NULL)
                 {
                     for(int x=0; x<11; x++)
                     {
                         for (int z=0; z<20; z++)
                         {

                             fscanf(fp1,"%d\n",&choices[x][z]);
                          if(z==19 && x == 10)
                             {
                               fscanf(fp1,"%d\n",&Z);
                             }
                         }
                     }
                 }
                 fclose(fp1);
                 if( (Z!=-1) && (Z!=0))
                 {
                  *ptr=Z;
                 }

    FILE *fp;
    fp  = fopen("data.txt", "w");

     for(int b=0; b<20; b++)
     {

         if(b<=9)
         {
             fprintf(fp,"%d%s\n",b+1,"\t1st-Class");
         }
         else
         {
             fprintf(fp,"%d%s\n",b+1,"\t2nd-Class");
         }
     }

     fclose(fp);

       do
       {
           k = 7;
    SetConsoleTextAttribute(hConsole, k);

if(s_counter>=4)
{
    //if(var1 != selection)
               FILE *file;
                file = fopen(uname,"a+");
                fprintf(file,"\n-5\t%d\n",selection);

                for(int j=0;j<20;j++)
                    {
                       if(backup[selection][j]<=10)
                        {
                            if(backup[selection][j]!=0)
                            {

                                 fprintf(file,"%d ",backup[selection][j]);
                                 printf("\nYou have Booked SeatNo = %d\nClass = 1st-Class\n",backup[selection][j]);
                            }

                        }
                        else
                        {
                              if(backup[selection][j]!=0)
                              {
                                     fprintf(file,"%d ",backup[selection][j]);
                                      printf("\nYou have Booked SeatNo = %d\nClass = 2nd-Class\n",backup[selection][j]);
                              }
                        }

                    }
                    fclose(file);
                    file = fopen(seats,"w");
                    fprintf(file,"%d\n",s_counter);                                       
                    fclose(file);                                                          
              
             
            printf("\nReturning to main menu\n");
    delay(10000);
    return 0;
}
else
   
    printf("\nEnter Your Choice :\n\n");
    printf("1 = Seats Information\n2 = BookSeat\n0 = Exit\n");
    printf("Choose:");

    opt = getch();

    switch(opt)
    {
        case '0':
        printf("\nSelected Country = ");
        
        for(int j=0; j<strlen(book[selection]);j++)
        {
            printf("%c",book[selection][j]);
        }
        
            strcpy(country_name,book[selection]);
            
        printf("\n");
        if(i<0)
        {
            printf("\n\nYou have not Booked Any Seat!! \n\n");
            delay(3000);
            break;
        }
        else
        {

            //if(var1 != selection)
               FILE *file;
                file = fopen(uname,"a+");
                fprintf(file,"\n-5\t%d\n",selection);

                for(int j=0;j<=20;j++)   
                    {                                          
                       if(backup[selection][j]<=10)
                        {
                            if(backup[selection][j]!=0)
                            {
                                 fprintf(file,"%d ",backup[selection][j]);
                                 printf("\nYou have Booked SeatNo = %d\nClass = 1st-Class\n",backup[selection][j]);
                            }

                        }
                        else
                        {
                              if(backup[selection][j]!=0)
                              {
                                     fprintf(file,"%d ",backup[selection][j]);
                                     printf("\nYou have Booked SeatNo = %d\nClass = 2nd-Class\n",backup[selection][j]);
                                   
                              }
                        }

                    
                    
            
                         }
                         
                    fclose(file);
                    file = fopen(seats,"w");
                    fprintf(file,"%d\n",s_counter); 
                    fclose(file);  
         printf("Returning to Main Menu in 5 seconds");
         delay(5000);
         return 0;
        }
        case '1':
        Display();
        break;
        case '2':
        jump:
        printf("\nEnter SeatNo : ");
        scanf("%d",&n);
        
        
        if((n>=1)&&(n<=20))
        {

        if(i<0)
        {
            i++;
        choices[selection][i]= n ;       //choices[8][0]=4
        backup[selection][i] = n;
        DisplaySeat(n);
        }
        else
        {

            if(exist(selection,choices,n))
                {   
                     k=12;
                     SetConsoleTextAttribute(hConsole, k);
                    printf("\nSorry Seat is Already Booked\nTry Another Seat\n");
                     k=7;
                     SetConsoleTextAttribute(hConsole, k);
                }
            else
                {
                    i++;
                 choices[selection][i] = n;
                 backup[selection][i] = n;
                    DisplaySeat(n);
                    
                }
        }
        }
        else
        {  
             k=12;
            SetConsoleTextAttribute(hConsole, k);
            printf("\nNot Valid SeatNo......!!\nTry Again .......!\n"); 
            k=7;
            SetConsoleTextAttribute(hConsole, k);
 
            goto jump;
        }

         break;
       }

       }while(opt!=0);


    return 0;

}
int mainmenu(void)
{
    system("cls");
    printf("Welcome to Main Menu!\n");
    printf("Please select a choice:\n\n");
    printf("Press 1 to book a seat on your account\n");
    printf("Press 2 to remove your booking\n");
    printf("Press 3 to exit\n");
    int select;
    scanf("%d",&select);
    if(select == 1)
    {
        return 1;
    }
    else if(select == 2)
    {
        return 2;
    }
    else if(select == 3)
    {
        return 3;
    }
    else
    {
        printf("You entered an incorrect choice!\n Please try Again!\n");
        printf("Returning to main menu in 5 seconds");
        delay(5000);
        mainmenu();

    }
}

int login(void)
{
        system("cls");
        FILE *file;
        file = NULL;
        char pwd[100];
        char comp[100];
        int lol;
        printf("Please enter your username:\n");
        scanf("%s",uname); //uname is a globAL variable

        strcpy(seats,uname);   //seats is also a global variable
        strcat(seats,"-seats");


            file = fopen(seats,"r");
            fscanf(file,"%d",&s_counter);
            fclose(file);
            file = fopen(uname,"r");
            fscanf(file,"%s",pwd);
        
        
        loading();
        
        if(file == NULL)
        {
            printf("\nYou are not registered at our Airline services.\nPlease make an account to use our services\n\n");
            printf("Returning to main menu in 5 secs\n");
            delay(5000);
            fclose(file);
            return 0;
        }
        else
        {
            again:
            printf("Enter password:\n");
            scanf("%s",comp);
            lol = strcmp(pwd,comp);
            if(lol == 0)
            {
                fclose(file);
                return 1;
            }
            else
            {
                printf("Try again\n");
                goto again;
            }
        }

}
int signup(void)
{
    char pass[100];

        system("cls");
        FILE *file;

            sup:
        printf("Please enter your username:\n");
        scanf("%s",uname);
        file = fopen(uname,"r");
        if(file == NULL)
        {
            file = fopen(uname,"w");
            printf("Please enter your password:\n");
            scanf("%s",pass);
            fprintf(file,"%s",pass);
            fclose(file);
            
        strcpy(seats,uname);
        strcat(seats,"-seats");

            file = fopen(seats,"w");
            fprintf(file,"0");
            fclose(file);
        

            printf("\nSignup Successfull!\n");
            printf("Returning to main menu in 5 secs.\n");
            delay(5000);
            return 0;
        }
        else
        {
            printf("A user with the same username already exists.\nPlease login or select another username\n");
            delay(3000);
            goto sup;
        }
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();                       //clock goal = current time     5000 ms         current time : 3:05:47 +5000ms = 3:05:52
                                                            
    while (goal > clock());
}

void anim1()
{                                 //START OF SMALL LOGO ANIMATION
 system("cls");
 printf("\n**       ");
 printf("\n* ****** ");
 printf("\n*       *");
 printf("\n******** ");
 printf("\n   * *   ");
 printf("\n   **    ");
 delay(250);
system("cls");
 printf("\n  **       ");
 printf("\n  * ****** ");
 printf("\n  *       *");
 printf("\n  ******** ");
 printf("\n     * *   ");
 printf("\n     **    ");
 delay(250);
system("cls");
 printf("\n    **       ");
 printf("\n    * ****** ");
 printf("\n    *       *");
 printf("\n    ******** ");
 printf("\n       * *   ");
 printf("\n       **    ");
 delay(250);
system("cls");
 printf("\n      **       ");
 printf("\n      * ****** ");
 printf("\n      *       *");
 printf("\n      ******** ");
 printf("\n         * *   ");
 printf("\n         **    ");
 delay(250);
system("cls");
 printf("\n        **       ");
 printf("\n        * ****** ");
 printf("\n        *       *");
 printf("\n        ******** ");
 printf("\n           * *   ");
 printf("\n           **    ");
 delay(250);
system("cls");
 printf("\n          **       ");
 printf("\n          * ****** ");
 printf("\n          *       *");
 printf("\n          ******** ");
 printf("\n             * *   ");
 printf("\n             **    ");
 delay(250);
system("cls");
 printf("\n            **       ");
 printf("\n            * ****** ");
 printf("\n            *       *");
 printf("\n            ******** ");
 printf("\n               * *   ");
 printf("\n               **    ");
 delay(250);
system("cls");
 printf("\n              **       ");
 printf("\n              * ****** ");
 printf("\n              *       *");
 printf("\n              ******** ");
 printf("\n                 * *   ");
 printf("\n                 **    ");
 delay(250);
system("cls");
 printf("\n                **       ");
 printf("\n                * ****** ");
 printf("\n                *       *");
 printf("\n                ******** ");
 printf("\n                   * *   ");
 printf("\n                   **    ");
 delay(250);
system("cls");
 printf("\n                  **       ");
 printf("\n                  * ****** ");
 printf("\n                  *       *");
 printf("\n                  ******** ");
 printf("\n                     * *   ");
 printf("\n                     **    ");
 delay(250);
system("cls");
 printf("\n                    **       ");
 printf("\n                    * ****** ");
 printf("\n                    *       *");
 printf("\n                    ******** ");
 printf("\n                       * *   ");
 printf("\n                       **    ");
 delay(250);
system("cls");
 printf("\n                      **       ");
 printf("\n                      * ****** ");
 printf("\n                      *       *");
 printf("\n                      ******** ");
 printf("\n                         * *   ");
 printf("\n                         **    ");
 delay(250);
system("cls");
 printf("\n                        **       ");
 printf("\n                        * ****** ");
 printf("\n                        *       *");
 printf("\n                        ******** ");
 printf("\n                           * *   ");
 printf("\n                           **    ");
 delay(250);
system("cls");
 printf("\n                          **       ");
 printf("\n                          * ****** ");
 printf("\n                          *       *");
 printf("\n                          ******** ");
 printf("\n                             * *   ");
 printf("\n                             **    ");
 delay(250);
system("cls");
 printf("\n                            **       ");
 printf("\n                            * ****** ");
 printf("\n                            *       *");
 printf("\n                            ******** ");
 printf("\n                               * *   ");
 printf("\n                               **    ");
 delay(250);
system("cls");
 printf("\n                              **       ");
 printf("\n                              * ****** ");
 printf("\n                              *       *");
 printf("\n                              ******** ");
 printf("\n                                 * *   ");
 printf("\n                                 **    ");
 delay(250);
system("cls");
 printf("\n                               **       ");
 printf("\n                               * ****** ");
 printf("\n                               *       *");
 printf("\n                               ******** ");
 printf("\n                                  * *   ");
 printf("\n                                  **    ");
 delay(250);
system("cls");
 printf("\n                                 **       ");
 printf("\n                                 * ****** ");
 printf("\n                                 *       *");
 printf("\n                                 ******** ");
 printf("\n                                    * *   ");
 printf("\n                                    **    ");
 delay(250);
system("cls");
 printf("\n                                   **       ");
 printf("\n                                   * ****** ");
 printf("\n                                   *       *");
 printf("\n                                   ******** ");
 printf("\n                                       * *   ");
 printf("\n                                       **    ");
 delay(250);
system("cls");
 printf("\n                                     **       ");
 printf("\n                                     * ****** ");
 printf("\n                                     *       *");
 printf("\n                                     ******** ");
 printf("\n                                         * *   ");
 printf("\n                                         **    ");
 delay(500);
system("cls");
}                                  //END OF SMALL LOGO ANIMATION

void logo1anim()
{                                  //START OF BIG LOGO ANIMATION (DELAY)
 printf("\n      *******                                                      ");delay(250);
 printf("\n       *      *                                                    ");delay(250);
 printf("\n        *       *                                                  ");delay(250);
 printf("\n      ***        ******************************************        ");delay(250);
 printf("\n       *       N   N  U   U  SSSS TTTTT     A    I RRRR   *****    ");delay(250);
 printf("\n        *      NN  N  U   U  S      T      A A   I R   R  ******   ");delay(250);
 printf("\n         *     N N N  U   U  SSSS   T     A   A  I RRRRR        *  ");delay(250);
 printf("\n          *    N  NN  U   U     S   T    AAAAAAA I R   R        *  ");delay(250);
 printf("\n           *   N  NN  UUUUU  SSSS   T   A      A I R   R       *  ");delay(250);
 printf("\n           *****      *************           *****************    ");delay(250);
 printf("\n              *      *           *          *                      ");delay(250);
 printf("\n             *     *            *         *                        ");delay(250);
 printf("\n            *******            *        *                          ");delay(250);
 printf("\n                              *       *                            ");delay(250);
 printf("\n                             *      *                              ");delay(250);
 printf("\n                            *******                                ");delay(250);
}                                  //END OF BIG LOGO ANIMATION (DELAY)

void logo1()
{                                   //START OF BIG LOGO
 system("cls");
 printf("\n      *******                                                      ");
 printf("\n       *      *                                                    ");
 printf("\n        *       *                                                  ");
 printf("\n      ***        ******************************************        ");
 printf("\n       *       N   N  U   U  SSSS TTTTT     A    I RRRR   *****    ");
 printf("\n        *      NN  N  U   U  S      T      A A   I R   R  ******   ");
 printf("\n         *     N N N  U   U  SSSS   T     A   A  I RRRRR        *  ");
 printf("\n          *    N  NN  U   U     S   T    AAAAAAA I R   R        *  ");
 printf("\n           *   N  NN  UUUUU  SSSS   T   A      A I R   R       *  ");
 printf("\n           *****      *************           *****************    ");
 printf("\n              *      *           *          *                      ");
 printf("\n             *     *            *         *                        ");
 printf("\n            *******            *        *                          ");
 printf("\n                              *       *                            ");
 printf("\n                             *      *                              ");
 printf("\n                            *******                                ");
 delay(3000);
 system("cls");
}

void logo2()
{		                            //START OF SECOND LOGO

 printf("\n                                    |              ");
 printf("\n                         \\____NUST_(_)_AIR______/ ");
 printf("\n                                  o'   'o           ");

}

void anim2()
{			                        //START OF ANIMATING SLOGAN

 printf("\n\n                                             << Taking You Higher >>");
 delay(125);system("cls");
 logo2();
 printf("\n\n                                           << Taking You Higher >>  ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                                         << Taking You Higher >>    ");
 delay(125);
system("cls");
 logo2();
 printf("\n\n                                       << Taking You Higher >>      ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                                     << Taking You Higher >>        ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                                   << Taking You Higher >>          ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                                 << Taking You Higher >>            ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                               << Taking You Higher >>              ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                             << Taking You Higher >>                ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                           << Taking You Higher >>                  ");
 delay(125);system("cls");
 logo2();
 printf("\n\n                         << Taking You Higher >>                    ");
 delay(1500);
 printf("\n\n                         Press ENTER to Continue                    ");
 getch();

 system("cls");
}                                 //END OF ANIMATING SLOGAN

void loading(void)
{                                   //START OF LOADING ANIMATION
system("cls");
k = 1;
    SetConsoleTextAttribute(hConsole,k);
printf("Loading\n");
printf("[-----] 1O%%");
delay(250);
k = 2;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[----------] 2O%%");
delay(250);
k = 3;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[---------------] 3O%%");
delay(250);
k = 4;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[--------------------] 4O%%");
delay(250);
k = 5;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[-------------------------] 5O%%");
delay(250);
k = 6;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[------------------------------] 6O%%");
delay(250);
k = 1;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[-----------------------------------] 7O%%");
delay(250);
k = 2;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[----------------------------------------] 8O%%");
delay(250);
k = 3;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[---------------------------------------------] 9O%%");
delay(250);
k = 4;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
printf("Loading\n");
printf("[--------------------------------------------------] 100%%");
delay(250);
k = 7;
    SetConsoleTextAttribute(hConsole,k);
system("cls");
}
bool exist(int selection ,int choices[11][20],int n)
{
    w = 0;
    w = selection;
 
    
      for(int a=0; a<20; a++)
        {

            if(n == choices[w][a])
            {
                return true;

            }

        }
                return false;

}

void Display(void)
{

   fpr = fopen("data.txt", "r");
   count=1;
   system("cls");

    if (fpr == NULL)
    {
       puts("Issue in opening the input file");
       return;
    }

     printf("SeatNo. Class\t\t\tStatus\n\n");

     char store[100],wbr[100];

   while(fscanf(fpr, "%s %s",store,wbr)!=EOF)
   {


    if(i<0)
    {
        k = 10;
        SetConsoleTextAttribute(hConsole, k);
        printf("%s\t%s\t",store,wbr);
        printf("\tAvailable\n");
        k = 7;
    }

    else
    {

        if(exist(selection,choices,count)) //selection = country num  //choices == user seats Information //count == seat.no
        {
            k = 12;
            SetConsoleTextAttribute(hConsole, k);
            printf("%s\t%s\t",store,wbr);
            printf("\tBooked\n");
            k = 7;

        }
        else
        {
            k = 10;
            SetConsoleTextAttribute(hConsole, k);
            printf("%s\t%s\t",store,wbr);
            printf("\tAvailable\n");
            k = 7;

        }

    }
        k = 7;
       count++;
   }
         fclose(fpr);
         printf("\n\n");
         k = 7;
        return;
}
void DisplaySeat(int n)
{
    count=1;
    fpr = fopen("data.txt", "r");
     printf("\nSeatNo.  Class\t\t\t  Status\n");
    while(fgets(str,sizeof(str),fpr)!=NULL)
    {

          if(count==n)

           {

                char* p = strchr(str,'\n');
    if (p)
      *p = '\0';
          printf("%s\t\t%5s", str,"Available\n");
          
         k=10;
        SetConsoleTextAttribute(hConsole, k);
        printf("\n\n\tSeat Booked SuccessFully\n\n\t");       
        k=7;
         SetConsoleTextAttribute(hConsole, k);
         printf("SeatNo = %d\n\n",count);
     
            s_counter++;
      if(count<=10)
      {
          printf("\t Class = 1st-Class\n\n");

      }
      else
      {
         printf("\t Class = 2nd-Class\n\n");
      }
           }
       count++;

    }
    fclose(fpr);
      return;

}

