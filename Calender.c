#include<stdio.h>
#include<string.h>
#include<conio.h>
   #include <windows.h>
int feb(int year)
{ int c=0;
    if(year%400==0)
        c++;
    if(year%4==0 && year%100!=0)
        c++;
    if(c>0)
        return 1;
    else
        return 0;
}



int main()
{

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = {0, 0, 120, 120};
    SetConsoleWindowInfo(console, TRUE, &rect);

    int year,i,j,k=0,m;
    char month[100][100]={"[ January ]","[ February ]","[ March ]","[ April ]","[ May ]","[ June ]","[ July ]","[ August ]","[ September ]","[ October ]","[ November]","[ December ]"};
    printf("Input Year :  ");
    scanf("%d",&year);
    l1:

    system("cls");
    printf("\n\t===================================================");

    printf("\n                       \t Calendar of %d",year);
        printf("\n\t===================================================");
        printf("\n\n");

int less=year;
int a=2023,y,d=0;


    while(a<year)
{ y=a;

   if(feb(y)==1)
    {d++;
    if(d==7)
    d=0;
    d++;
     if(d==7)
    d=0;}
   else if(feb(y)==0)
    {d++;
if(d==7)
    d=0;}
a++;
}

while(2023>year && less<2023)
{
    y=less;

   if(feb(y)==1)
    {d++;
    if(d==7)
        d=0;
        d++;
         if(d==7)
        d=0;

    }
   else if(feb(y)==0)
    {d++;
     if(d==7)
        d=0;}
less++;
}
if(year>=2023)
k=d;
if(year<2023 && d!=0)
    k=7-d;
    else
        k=d;



    for(j=0;j<12;j++)
    {


 printf("\t\t\t      %s\n\t\t\t\t\t\t\t\t\t\t\n",month[j]);
        printf("\tSUN\tMON\tTUE\tWED\tTHR\tFRI\tSAT\t\t\t\t\n\n");

if(k==0)
    printf("\t");

if(k==1)
    printf("\t\t");
if(k==2)
    printf("\t\t\t");
if(k==3)
    printf("\t\t\t\t");
if(k==4)
    printf("\t\t\t\t\t");
if(k==5)
    printf("\t\t\t\t\t\t");
if(k==6)
    printf("\t\t\t\t\t\t\t");

            for(i=1;i<=31;)
            {

                printf("%d\t",i++);
       k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                 if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                        if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;

                 printf("%d\t",i++);
                 k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                  if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                         if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;


                  printf("%d\t",i++);
                  k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                   if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                         if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;


                   printf("%d\t",i++);
                   k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                    if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                         if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;


                    printf("%d\t",i++);
                    k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                     if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                         if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;

                     printf("%d\t",i++);
                     k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                      if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                         if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;


                      printf("%d\t",i++);
k++;

if(k==7)
                      {printf("\n\n\t");k=0;}


                      if((j==0 || j==2 || j==4 || j==6||j==7||j==9||j==11)&& i>31)
                        break;
                      if((j==3||j==5||j==8||j==10)&&i>30)
                        break;
                         if(j==1 && feb(year)==1&&i>29)
                        break;
                        if(j==1 && feb(year)==0 && i>28)
                            break;



            }
 printf("\n\n\n");



    }
    printf("\n\tPress p to see calender of %d  or  n  to see calender of %d",year-1,year+1);

    while(1)
    {if(kbhit())
    {
        char c=getch();
        if(c=='p')
            {year=year-1;
        goto l1;}
        if(c=='n')
            {year=year+1;
        goto l1;}
    }}
getch();

}
