#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define UP 72
#define DOWEN 80
#define HOME 71
#define END 79
#include "standerd_typed.h"
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
 struct student {
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};
void display(struct student students[], int count);
void insert(struct student students[], int count);
int main()
{
HANDLE consol = GetStdHandle(STD_OUTPUT_HANDLE);
int pos=0;
char ch;
int studentCount = 0;
struct student students[100];

do{
SetConsoleTextAttribute(consol,15);
menue();


switch(pos){
case 0:
SetConsoleTextAttribute(consol,4);
gotoxy(40,11);printf("1]New");
if(ch==13){

    ch=getch();
    system("cls");
    SetConsoleTextAttribute(consol,15);
    //gotoxy(40,11);//printf("new");
    //scan_struct_Students(students,2);
    insert(students, studentCount);
                studentCount++;

    system("cls");
    menue();

}
break;
case 1:
SetConsoleTextAttribute(consol,4);
gotoxy (40,13);printf("2]Display\n");
if(ch==13){
    ch=getch();
    system("cls");
    //gotoxy(40,13);//printf("display");
    SetConsoleTextAttribute(consol,15);
    ch=getch();
    display(students, studentCount);
    printf("Press Enter to continue...");
    ch=getch();
    system("cls");
    menue();

}
break;

case 2:
SetConsoleTextAttribute(consol,4);
gotoxy (40,15);printf("3]Exit");
if(ch==13){
    ch=getch();
    system("cls");
    SetConsoleTextAttribute(consol,15);
    printf("please pres 'Y' or'y'");

    //gotoxy(40,15);//printf("exit");


}
break;

}
ch=getch();
if(ch==32){
    ch=getch();
}
if(ch==UP){
    pos--;
    if(pos==-1){
        pos=2;
    }
}
if(ch==DOWEN){
    pos++;
    if(pos==3){
        pos=0;
    }
}
if(ch==HOME){
    pos=0;
}
if(ch==END){
    pos=2;
}
} while(ch!='Y'&&ch!='y');
    return 0;
}
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void menue(){
gotoxy(40,11);printf("1]New");
gotoxy (40,13);printf("2]Display");
gotoxy (40,15);printf("3]Exit");
 }


void insert(struct student students[], int count) {
    if (count < 100) {
        printf("Enter name: ");
        scanf(" %[^\n]s", students[count].name);
        printf("Enter age: ");
        scanf("%d", &students[count].age);
        printf("Enter ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Gender : ");
        scanf(" %c", &students[count].gender);

        printf("Student added.\n");
    } else {
        printf("You can't add more than 100 students.\n");
    }
}
void display(struct student students[], int count) {
    if (count > 0) {
        printf("Student Records:\n");
        for (int i = 0; i < count; i++) {
            printf("Name: %s, Age: %d, ID: %d, Gender: %c\n",
                students[i].name,
                students[i].age,
                students[i].id,
                students[i].gender
            );}}}
