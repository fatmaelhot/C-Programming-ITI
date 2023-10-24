#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
void draw_box(void);
int main()
{
HANDLE consol = GetStdHandle(STD_OUTPUT_HANDLE);
int pos=1;
char ch;
draw_box();

/*char i=getch();
if (i==-32)ch=getch();
printf("%c %d",i,i);
}*/
do{
SetConsoleTextAttribute(consol,15);
gotoxy(40,11);printf("1]New");
gotoxy (40,12);printf("2]Display");
gotoxy (40,13);printf("3]Exit");


switch(pos){
case 1:
SetConsoleTextAttribute(consol,4);
gotoxy(40,11);printf("1]New");
if(ch==13){
    ch=getch();
    system("cls");
    gotoxy(40,11);printf("new");
}
break;
case 2:
SetConsoleTextAttribute(consol,4);
gotoxy (40,12);printf("2]Display\n");
if(ch==13){
    ch=getch();
    system("cls");
    gotoxy(40,11);printf("display");
}
break;

case 3:
SetConsoleTextAttribute(consol,4);
gotoxy (40,13);printf("3]Exit");
if(ch==13){
    ch=getch();
    system("cls");
    gotoxy(40,11);printf("exit");
}
break;

}
ch=getch();
if(ch==32){
    ch=getch();
}
if(ch==72){
    pos--;
    if(pos==0){
        pos=3;
    }
}
if(ch==80){
    pos++;
    if(pos==4){
        pos=1;
    }
}
} while(1);
    return 0;
}
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void draw_box(void){
    int i;
gotoxy(39,10),printf("%c",201);
for(i=1;i<33;i++){
printf("%c",205);}
printf("%c",187);

gotoxy(39,11);printf("%c",186);
for(i=1;i<33;i++){
printf("%c",32);}
printf("%c",186);

gotoxy(39,12);printf("%c",186);
for(i=1;i<33;i++){
printf("%c",32);}
printf("%c",186);

gotoxy(39,13);printf("%c",186);
for(i=1;i<33;i++){
printf("%c",32);}
printf("%c",186);


gotoxy(39,14),printf("%c",200);
for(i=1;i<33;i++){
printf("%c",205);}
printf("%c",188);
}
