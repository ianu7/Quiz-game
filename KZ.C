#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#define rw 80
#define cl 66

void level1que1();
char ans;
int a=0,b=0,c=0;

void otp();
void load();
void loadtej();
void mainscreen();

void loadtej()                               //Loading Function
{
	int i;
 	clrscr();
 	textcolor(11);
	gotoxy(20,10);
 	printf("Loading.....\n");
       	// cout<<"Loading\n";
 	for(i=1;i<=80;i++)
 	{
  	textcolor(RED);
  	cprintf("|");
 	}
 	for(i=1;i<=80;i++)
 	{
  	gotoxy(i,11);
  	textcolor(WHITE);
  	delay(50);
   	cprintf("|");
 	}
 	textcolor(10);
 	cprintf("Loading Completed....");
 	//delay(5);
 	textcolor(7);
 	getch();
}



void mainscreen()
{
	int i,j;
	clrscr();
	for(i=2,j=2;i<rw;j++)
	{
		if(j>15)
		j=2;
		textcolor(j);
		gotoxy(i,2);
		cprintf("%c",15);
		gotoxy(i,cl-1);
		cprintf("%c",15);
		i++;

	}
	for(i=2,j=2;i<cl;i++,j++)
	{
		if(j>15)
		j=2;
		textcolor(j);
		gotoxy(2,i);
		cprintf("%c",15);
		gotoxy(rw-1,i);
		cprintf("%c",15);

	}
  }

void otp()                                                                              //OTP Funtion
{
 	int size=5;
 	char code[5],ch,otp[5];
	 int n=0;
 	randomize();
   	clrscr();
 	while(n<size)
 	{ ch=(char)random(127);
 	if(ch>='a'&&ch<='z'||ch>'0'&&ch<='9'||ch>='A'&&ch<='Z')
 	{ code[n++]=ch;
 	}
 	} code[n]='\0';
 	mainscreen();
 	textcolor(10);
	 gotoxy(32,3);
 	cprintf("\n\nCAPTCHA CODE GENERATED....\n");
 	textcolor(9);
 	gotoxy(40,7);
 	cprintf(    code);
 	printf("\n");
 	textcolor(6);
 	//gotoxy(32,9);
 	gotoxy(32,7);
 	cprintf("\n\nEnter The OTP to Verify:");
 	textcolor(7);
 	scanf("%s",otp);
 	if(strcmp(code,otp)==0)
       	{
      	 textcolor(10);
   	gotoxy(37,9);
   	cprintf("\n\n          OTP Verified.......");
       	}
 	else
	{
	textcolor(RED);
	gotoxy(37,9);
	cprintf("\n\nOTP wrong...!!!!");
	getch();
	exit (0);
	 }
}


void level2que1();
void level3que1();
void main()
{
int choice, k,m,n;
clrscr();
mainscreen();
 textcolor(10);
 gotoxy(27,7);
cprintf("\n\nWelcome To Quizz On C Language\n\n");
textcolor(3);
cprintf("press any key");
getch();
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,4);
cprintf("Instructions on Quizz :");

textcolor(13);
gotoxy(27,6);
//printf("\n\n\n");
cprintf("1) In this quizz their are 3 levels");
printf("\n\n");
gotoxy(27,8);
cprintf("2) Each level is a elemination level");
printf("\n\n");
gotoxy(27,10);
cprintf("3) You have to enter the option no of answer\n\n ");
textcolor(3);
gotoxy(27,12);
cprintf("Press 1 To start The Quizz\n");
scanf("%d",&choice);
if(choice==1)
otp();
else
{exit(0);}
loadtej();
 textcolor(5);
level1que1();


}


void level1que2();
void level1que1()
{
 clrscr();

 fflush(stdin);
printf("\n\n1. What is the size of an int data type?\n");
printf("\nA) 4 Bytes\nB) 8 Bytes\nC) Depends on the system/compiler\nD) Cannot be determined\n\n");
printf("Enter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : Depends on the system");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que2();
break;
  case 'C':
  case 'c':
   printf("\n\nCORRECT ANSWER!!");

  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que1();
   }
 if(ans == 'C' || ans == 'c')
 {
   a++;
  level1que2();
 }


}


void level1que3();
void level1que2()
{
 clrscr();
 fflush(stdin);


printf("\n\n\n\n2. The C code \'for(;;)\' represents an infinite loop. It can be terminated by ___________\n");
printf("A) break\nB) exit(0)\nC) abort()\nD) terminate\n");
printf("\n");
printf("Enter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : break");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que3();

      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que2();
   }
if(ans == 'A' || ans == 'a')
 {
a++;
clrscr();
level1que3();
 }

}




void level1que4();
void level1que3()
{
 clrscr();

fflush(stdin);
printf("\n\n3.What will be the output of the following C code?\n\n #include <stdio.h>\nvoid main()\n{\nint k = 0;\nfor (k)\nprintf(\"Hello\");\n}");
printf("\n\nA) Compile time error\nB) hello\nC) Nothing\nD) Varies\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : Compile time error");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que4();
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
 break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que3();

   }

if(ans == 'A' || ans == 'a')
 {
a++;
  clrscr();
level1que4(); 
 }


}

void level1que5();
void level1que4()
{
 clrscr();
 fflush(stdin);

printf("\n4. Which of the following statement is false?\n");
printf("\nA) A variable defined once can be defined again with different scope\nB) A single variable cannot be defined with two different types in the \n\tsame scope\nC) A variable must be declared and defined at the same time\nD) A variable refers to a location in memory\n");
 printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : A variable must be declared and defined at the same time ");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que5();   
   break;
  case 'C':
  case 'c':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que4();
   }

if(ans == 'C' || ans == 'c')
 {
a++;  
clrscr();
level1que5();
 }
}


void level1que6();
void level1que5()
{
 clrscr();
 fflush(stdin);
 
printf("\n5. What will be the output of the following C code?\n\n#include <stdio.h>\nvoid main()\n{\nchar *s= \"hello\";\nchar *p = s;\nprintf(\"%%c\t%%c\", *(p + 3),  s[1]);\n}");
printf("\nA) h e\nB) l l\nC) l o\nD) l e\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : l e");
 printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que6();   
  
 break;
  case 'D':
  case 'd':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que5();
   }

if(ans == 'D' || ans == 'd')
 {
a++;
 clrscr();
level1que6();
 }
}


void level1que7();
void level1que6()
{
 clrscr();
 fflush(stdin);
printf("\n6. Which data type is most suitable for storing a number 65000 in a 32-bit \n\tsystem?\n");
printf("\nA) unsigned short\nB) signed short\nC) long\nD) int\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
     printf("\nAnswer is : unsigned short");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que7();   
 break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");

break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que6();
   }
if(ans == 'A' || ans == 'a')
 {
a++;
  clrscr();
level1que7();  
 }
}

void level1que8();
void level1que7()
{
 clrscr();
 fflush(stdin);

printf("\n7. Which of the following is a User-defined data type?\n");
printf("\nA) typedef int Boolean;\nB) typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\nC) struct {char name[10], int age};\nD) all of the mentioned");
printf("\n\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : All the mention above"); 
 printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que8();   

   break;
  case 'D':
  case 'd':
   printf("\n\nCORRECT ANSWER!!");

  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que7();
   }
if(ans == 'D' || ans == 'd')
 {
 a++;
  clrscr();
level1que8();
 }
}

void level1que9();
void level1que8()
{
 clrscr();
 fflush(stdin);

printf("\n8. The format identifier \'%%i\' is also used for _____ data type\n");
printf("\nA) char\nB) float\nC) int\nD) double\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : int");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que9();   

   break;
  case 'C':
  case 'c':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que8();
   }

if(ans == 'C' || ans == 'c')
 {
a++;
  clrscr();
level1que9();
 }

}
void level1que10();
void level1que9()
{
 clrscr();
 fflush(stdin);

printf("\n9. A user defined data type, which is used to assign names to integral constants is called ____________\n");
printf("\nA) Enum\nB) Array\nC) Structure\nD) Union\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
  printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : Enum");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level1que10();   

      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");

  break;
  default:
printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que9();
   }

if(ans == 'A' || ans == 'a')
 {
  a++;
  clrscr();
level1que10();
 }

}

void level1que10()
{
int cho,k,kk;
 clrscr();
 fflush(stdin);

printf("\n10. String handling functions such as strcmp(), strcpy() etc can be used with enumerated types");
printf("\n\nA) True\nB) False\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
   printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : False");
getch();
clrscr();
k=a*10;
clrscr();

mainscreen();
gotoxy(33,5);
cprintf("Your Score in Level 1 is %d",k);
if(k>=60)
{
gotoxy(33,7);
cprintf("You Successfully Clear Level one");
textcolor(3);
gotoxy(33,9);
cprintf("Press 1 To start level 2 :");
gotoxy(33,11);
cprintf("Press 2 For Exit");
scanf("%d",&cho);
if(cho==1)
{
loadtej();
textcolor(9);
level2que1();
}
else
{
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}
}

else
{
 gotoxy(33,7);
cprintf("Better Luck Next Time...");
getch();
clrscr();
mainscreen();
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
a=0;b=0;c=0;
exit(0);
}

  break;
  case 'B':
  case 'b':
   printf("\n\nCORRECT ANSWER!!");
a++;
k=a*10;
clrscr();
mainscreen();
gotoxy(32,4);
printf("Your Score in Level 1 is %d",k);
if(k>=60)
{
gotoxy(33,7);
cprintf("You Successfully Clear Level one");
textcolor(3);
gotoxy(33,9);
cprintf("Press 1 To start level 2 :");
gotoxy(33,11);
cprintf("Press 2 For Exit");
scanf("%d",&cho);
if(cho==1)
{
loadtej();
textcolor(9);
level2que1();
}
else
{
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
} }
else
{
gotoxy(33,6);
cprintf("Better Luck Next Time...");
getch();
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
a=0;b=0;c=0;
exit(0);
}


  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level1que10();
   }

 if(ans == 'B' || ans == 'b')
 {
 a++;
  clrscr();
 }
}



void level2que2();
void level2que1()
{
 clrscr();
 fflush(stdin);
printf("1. \n\n#include <stdio.h>\nint fun(int n)\n{ \nint i, j, sum = 0; \nfor(i = 1;i<=n;i++) \nfor(j=i;j<=i;j++) \nsum=sum+j;\nreturn(sum);\n}\n\nint main()\n{\nprintf(\"%%d\", fun(15));\ngetchar();\nreturn 0;\n}\n");
printf("\nA) 120\nB) 125\nC) 115\nD) 130\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
  printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : 120");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que2();   
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que1();
     }

 if(ans == 'A' || ans == 'a')
 {
b++;
  clrscr();
level2que2();
 }
}

void level2que3();
void level2que2()
{
 clrscr();
 fflush(stdin);
printf("\n2.What will be the final value of j in the following C code?\n\n#include <stdio.h>\nint main()\n{\nint i = 0, j = 0;\nif (i && (j = i + 10))//do something\n;\n}");
printf("\n\nA) Depends on the compiler\nB) 10\nC) 0\nD) Depends on language standard\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : 0");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que3();   
      break;
    case 'C':
    case 'c':
     printf("\n\nCORRECT ANSWER!!");
  break;
  default:
    printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que2();
  }

 if(ans == 'C' || ans == 'c')
 {
b++;
  clrscr();
level2que3();
 }
}

void level2que4();
void level2que3()
{
 clrscr();
 fflush(stdin);
printf("\n3.What will be the output of the following C code?\n\n#include <stdio.h>\nint main()\n{\nint i = 1;\nif (i++ && (i == 1))\nprintf(\"Yes\");\nelse\nprintf(\"No\");\n}");
printf("\n\nA) Yes\nB) No\nC) Depends on the compiler\nD) Depends on the standard\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'C':
    case 'c':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : No");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que4();   
      break;
    case 'B':
  case 'b':
     printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que3();
   
   }

 if(ans == 'B' || ans == 'b')
 {
  b++; 
 clrscr();
level2que4();
 }
}

void level2que5();
void level2que4()
{
 clrscr();
 fflush(stdin);
printf("\n4.The keyword ‘break’ cannot be simply used within _________\n");
printf("\nA) do-while\nB) while\nC) for\nD) if-else\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'C':
    case 'c':
    case 'B':
  case 'b':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : if-else");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que5();   
      break;
  case 'D':
  case 'd':
     printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que4();
   }

 if(ans == 'D' || ans == 'd')
 {
  b++;
  clrscr();
level2que5();
 }
}

void level2que6();
void level2que5()
{
 clrscr();
 fflush(stdin);
printf("\n5.Which keyword is used to come out of a loop only for that iteration?\n");
printf("\nA) break\nB) continue\nC) return\nD) none of the mentioned\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'C':
    case 'c':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : continue");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que6();   
      break;
    case 'B':
  case 'b':
     printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que5();
   
   }

 if(ans == 'B' || ans == 'b')
 {
 b++;
  clrscr();
level2que6();
 }
}


void level2que7();
void level2que6()
{
 clrscr();
 fflush(stdin);
printf("\n6. A macro can execute faster than a function\n");
printf("\nA)  True\nB)  False\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'B':
  case 'b':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : true");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que7();  
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que6();
   }

 if(ans == 'A' || ans == 'a')
 {
  b++;
  clrscr();
level2que7();
 }
}

void level2que8();
void level2que7()
{
 clrscr();
 fflush(stdin);
printf("\n7. Which of the following is a correct format for declaration of function?\n");
printf("\nA) return-type (argument type)function-name;\nB) return-type function-name(argument type){}\nC) return-type function-name(argument type);\nD) all of the mentioned");
printf("\n\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : return-type function-name(argument type);");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que8();  
      break;
    case 'C':
    case 'c':
     printf("\n\nCORRECT ANSWER!!");
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que7();
   }

 if(ans == 'C' || ans == 'c')
 {
  b++;
  clrscr();
level2que8();
 }
}

void level2que9();
void level2que8()
{
 clrscr();
 fflush(stdin);
printf("\n8. What will be the output of the following C code?\n\n#include <stdio.h>\nint main()\n{\nint a = 1, b = 1, c;\nc = a++ + b;\nprintf(\"%%d, %%d\", a, b);\n}");
printf("\nA) a = 1, b = 1\nB) a = 2, b = 2\nC) a = 1, b = 2\nD) a = 2, b = 1\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'C':
    case 'c':
    case 'B':
  case 'b':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : a = 2, b = 1");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que9();   
      break;
  case 'D':
  case 'd':
     printf("\n\nCORRECT ANSWER!!");
  break;
  default:
  printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que8();
   
   }

 if(ans == 'D' || ans == 'd')
 {
 b++;
  clrscr();
level2que9();
 }
}

void level2que10();
void level2que9()
{
 clrscr();
 fflush(stdin);
printf("\n9. Which among the following has the highest precedence?\n");
printf("\nA) sizeof()\nB) <<\nC) &\nD) &&\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : sizeof()");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level2que10();   
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que9();
   
   }

 if(ans == 'A' || ans == 'a')
 {
 b++;
  clrscr();
level2que10();
 }
}
void level2que10()
{
 int m,ice;
 clrscr();
 fflush(stdin);
printf("\n10. The size of a union is determined by the size of the __________\n");
printf("\nA) First member in the union\nB) Last member in the union\nC) Biggest member in the union\nD) Sum of the sizes of all members\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
   case 'A':
  case 'a':
    case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : Biggest member in the union");
getch();
clrscr();
m=b*10;
clrscr();
mainscreen();
gotoxy(33,4);
cprintf("Your Score in Level 2 is %d",m);
if(m>=70)
{
gotoxy(33,6);
cprintf("You Successfully Clear Level Two");
gotoxy(33,8);
cprintf("Press 1 To start level 3 :");
gotoxy(33,10);
cprintf("Press 2 For Exit :");
scanf("%d",&ice);
if(ice==1)
{
loadtej();
textcolor(14);
 level3que1();
}
else
{
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}
}
else
{
gotoxy(33,7);
cprintf("Better Luck Next Time...");
getch();
clrscr();
mainscreen();
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
a=0,b=0,c=0,m=0;
exit(0);
}
      break;
    case 'C':
    case 'c':
     printf("\n\nCORRECT ANSWER!!");
clrscr();
 b++;
m=b*10;
clrscr();
mainscreen();
gotoxy(33,4);
printf("Your Score in Level 2 is %d",m);
if(m>=70)
{
gotoxy(33,6);
cprintf("You Successfully Clear Level Two");
gotoxy(33,8);
cprintf("Press 1 To start level 3 :");
gotoxy(33,10);
cprintf("Press 2 For Exit :");
scanf("%d",&ice);
if(ice==1)
{
loadtej();
textcolor(14);
 level3que1();
}
else
{
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}
}
else
{
gotoxy(33,7);
cprintf("Better Luck Next Time...");
getch();
clrscr();
mainscreen();
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
a=0,b=0,c=0,m=0;
exit(0);
}

 break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level2que10();
     }

 if(ans == 'C' || ans == 'c')
 {
  clrscr();
 }
}





void level3que2();
void level3que1()
{
 clrscr();
 fflush(stdin);
printf("\n1. What will be the output of the following C code?\n\n#include <stdio.h>\nint main()\n{\nint ary[4] = {1, 2, 3, 4};\nint *p = ary + 3;\nprintf(\"%%d\", p[-2]);\n}");
printf("\nA) 1\nB) 2\nC) Compile time error\nD) Some garbage value\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'A':
  case 'a':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : 2");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que2();   
      break;
  case 'B':
  case 'b':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que1();
   }

 if(ans == 'B' || ans == 'b')
 {
  c++;
  clrscr();
level3que2();
 }
}




void level3que3();
void level3que2()
{
 clrscr();
 fflush(stdin);
printf("\n2. What is the output of this C code?\n#include <stdio.h>\nvoid main()\n{\nint x = 97;\nint y = sizeof(x++);\nprintf(\"x is %%d\"\, x);\n}");
printf("\nA) x is 97\nB) x is 98\nC) x is 99\nD) Run time error");
printf("\nEnter Your option Number :");
 
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
 printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : x is 97");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que3();   
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que2();
     }

 if(ans == 'A' || ans == 'a')
 {
 c++;
  clrscr();
level3que3();
 }
}


void level3que4();
void level3que3()
{
 clrscr();
 fflush(stdin);
 
printf("\n3. #include <stdio.h>\nvoid main()\n{\nint x = 0;\nif (x == 0)\nprintf(\"hi\");\nelse\nprintf(\"how are u\");\nprintf(\"hello\");\n}");
printf("\n\nA) hi\nB) how are you\nC) hello\nD) hihello");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
 printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : hihello");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que4();   
   break;
  case 'D':
  case 'd':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que3();
   }

 if(ans == 'D' || ans == 'd')
 {
 c++;
  clrscr();
level3que4();
 }
}

void level3que5();
void level3que4()
{
 clrscr();
 fflush(stdin);
printf("\n\n4. #include <stdio.h>\nint main()\n{\nchar *str = \"hello, world\";\nchar *str1 = \"hello, world\";\nif (strcmp(str, str1))\nprintf(\"equal\");\nelse\nprintf(\"unequal\");\n}\n");
printf("\n\nA) equal\nB) unequal\nC) Compilation error\nD) Depends on the compiler\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'A':
  case 'a':
  case 'D':
  case 'd':
 printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : unequal");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que5();   
      break;
  case 'B':
  case 'b':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
    printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que4();

   }

 if(ans == 'B' || ans == 'b')
 {
 c++;
  clrscr();
level3que5();
 }
}



void level3que6();
void level3que5()
{
 clrscr();
 fflush(stdin);
printf("\n\n5. #include <stdio.h>\nint main()\n{\nchar str[11] = \"hello\";\nchar *str1 = \"world\";\nstrcat(str, str1);\nprintf(\"%%s %%d\", str, str[10]);\n}");
printf("\n\nA) helloworld 0\nB) helloworld anyvalue\nC) worldhello 0\nD) Segmentation fault/code crash");
printf("\nEnter Your option Number :");
 
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
 printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : helloworld 0");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que6();   
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que5();
 }

 if(ans == 'A' || ans == 'a')
 {
c++;
  clrscr();
level3que6();
 }
}

void level3que7();
void level3que6()
{
 clrscr();
 fflush(stdin);
printf("\n6. What will be the output of the following C code?\n\n#include <stdio.h>\nint i;\nint main()\n{\nextern int i;\nif (i == 0)\nprintf(\"scope rules\");\n}\n");
printf("\nA) scope rules\nB) Compile time error due to multiple declaration\nC) Compile time error due to not defining type in statement extern i\nD) Nothing will be printed as value of i is not zero because i is an automatic \nvariable");
 printf("\nEnter Your option Number :");
 
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : scope rules");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que7();   
      break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que6();
   
   }

 if(ans == 'A' || ans == 'a')
 {
c++;
  clrscr();
level3que7();
 }
}



void level3que8();
void level3que7()
{
 clrscr();
 fflush(stdin);
printf("\n7. What is the scope of a function?\n");
printf("\nA) Whole source file in which it is defined\nB) From the point of declaration to the end of the file in which it is defined\nC) Any source file in a program\nD) From the point of declaration to the end of the file being compiled\n");
printf("\nEnter Your option Number :");
 
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'A':
  case 'a':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : From the point of declaration to the end of the file being compiled");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que8();
      break;
  case 'D':
  case 'd':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
    printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que7();
   
   }

 if(ans == 'D' || ans == 'd')
 {
 c++;
  clrscr();
level3que8();
 }
}

void level3que9();
void level3que8()
{
 clrscr();
 fflush(stdin);
 
printf("\n\n8. An array of similar data types which themselves are a collection of dissimilar data type are ___________\n");
printf("\nA) Linked Lists\nB) Trees\nC) Array of Structure\nD) All of the mentioned\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
  printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : Array of Structure");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que9();
   break;
  case 'C':
  case 'c':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que8();
   }

 if(ans == 'C' || ans == 'c')
 {
c++;
  clrscr();
level3que9();
 }
}


void level3que10();
void level3que9()
{
 clrscr();
 fflush(stdin);
gotoxy(27,6);
printf("\n9. Functions can return enumeration constants in C?\n");
printf("\nA) true\nB) false\nC) depends on the compiler\nD) depends on the standard\n");
printf("\nEnter Your option Number :");
scanf("%c",&ans);
 switch(ans)
 {
  case 'C':
  case 'c':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
  printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : true");
  printf("\n\nPress Enter For Next Question\n\n");
getch();
level3que10();
   break;
  case 'A':
  case 'a':
   printf("\n\nCORRECT ANSWER!!");
  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que9();
   }

 if(ans == 'A' || ans == 'a')
{
c++;
level3que10();
}
}
void level3que10()
{
 int n;
 clrscr();
 fflush(stdin);
printf("\n10. What will be the output of the following C code? \n\n#include <stdio.h>\nint main()\n{\nint a = 2;\nif (a >> 1)\nprintf(\"%%d\", a);\n}");
printf(" \nA) 0\nB) 1\nC) 2\nD) No Output\n");
printf("\nEnter Your option Number :");

scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
printf("\n\nWRONG ANSWER!!");
printf("\nAnswer is : 2");
getch();
clrscr();

clrscr();
n=c*10;
mainscreen();
textcolor(10);
gotoxy(33,4);
cprintf("Your Score in Level 3 is %d",n);
if(n>=80)
{
 textcolor(10);
gotoxy(33,6);
cprintf("You Successfully Clear Level Three");
getch();
mainscreen();
gotoxy(33,8);
cprintf("You Won\n");
getch();
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}
else
{
 textcolor(10);
gotoxy(33,6);
cprintf("Better Luck Next Time...");
getch();
clrscr();
mainscreen();
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}


      break;
  case 'C':
  case 'c':
   printf("\n\nCORRECT ANSWER!!");
clrscr();
c++;
clrscr();
n=c*10;
mainscreen();
gotoxy(33,4);
textcolor(10);
cprintf("Your Score in Level 3 is %d",n);
if(n>=80)
{
 textcolor(10);
gotoxy(33,6);
cprintf("You Successfully Clear Level Three");
getch();
clrscr();
mainscreen();
gotoxy(32,12);
cprintf("You Won\n");
getch();
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}
else
{
gotoxy(33,6);
cprintf("Better Luck Next Time...");
getch();
clrscr();
mainscreen();
textcolor(10);
gotoxy(32,12);
cprintf("Game End.........Thanks For Playing");
getch();
exit(0);
}

  break;
  default:
 printf("\n\nIMPROPER CHOICE!!");
 printf("\n\nPress Enter For same Question\n\n");
  getch();
level3que10();
   }

 if(ans == 'C' || ans == 'c')
 {
c++;
  clrscr();
 }
}

