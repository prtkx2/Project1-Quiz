#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void math();
void hist();
void english();
int main()
{
    char opt;
    printf("Choose your option: \n a:maths\n b:history\n c:english\n");
    l1:
    scanf(" %c",&opt);
    l2:
    switch(opt)
    {
        case 'a':printf("---------MATHS QUIZ---------\n");
                  math();
                  break;

        case 'b':printf("---------HISTORY QUIZ---------\n");
                 hist();
                 break;

        case 'c':printf("---------ENGLISH QUIZ---------\n");
                 eng();
                 break;

        default: printf("Invalid choice, please choose again");
                goto l1;
    }

    printf("To play another quiz, select one option: a,b or c\n To exit the quiz, press 'e'\n ");
    scanf(" %c",&opt);
    if(opt=='a'||opt=='b'||opt=='c')
    {
        goto l2;
    }
    else if(opt=='e')
    {
        goto l3;
    }
    l3:
    return 0;
}
void math()
{  char opt;
    int mks=0;
    printf("Question 1. The average of first 50 natural numbers is ________\n a.25.30\n b.25.5\n c.25.00\n d.12.25\n");
    scanf(" %c",&opt);
    if(opt=='b')
    {
     mks+=2;
    }
    else mks--;

    printf("Question 2. A fraction which bears the same ratio to 1/27 as 3/11 bear to 5/9 is equal to ________\n a.1/55\n b.55\n c.3/11\n d.1/11\n");
    scanf(" %c",&opt);
    if(opt=='a')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 3. The number of 3-digit numbers divisible by 6, is ________\n a.149\n b.166\n c.150\n d.151\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 4. What is 1004 divided by 2?\n a.5002\n b.520\n c.502\n d.52\n");
    scanf(" %c",&opt);
    if(opt=='b')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 5. A clock strikes once at 1 o’clock, twice at 2 o’clock, thrice at 3 o’clock and so on. How many times will it strike in 24 hours?\n a.78\n b.136\n c.156\n d.196\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else {mks--;}

    printf("Your total score is:  %d/10\n",mks);
}

 void hist()
{  char opt;
    int mks=0;
    printf("Question 1. World War I began in which year? \n a.1923\n b.1938\n c.1917\n d.1914\n");
    scanf(" %c",&opt);
    if(opt=='d')
    {
     mks+=2;
    }
    else mks--;

    printf("Question 2. Adolf Hitler was born in which country? \n a.France\n b.Germany\n c.Austria\n d.Hungary\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 3. John F. Kennedy was assassinated in\n a.1973\n b.Dallas\n c.Austin\n d.1958\n");
    scanf(" %c",&opt);
    if(opt=='b')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 4. Who fought in the war of 1812? \n a.Andrew Jackson\n b.Arthur Wellsley\n c.Otto von Bismarck\n d.Napoleon\n");
    scanf(" %c",&opt);
    if(opt=='a')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 5. Which general famously stated 'I shall return'?\n a.Bull Halsey\n b.George Patton\n c.Douglas MacArthur\n d.Omar Bradley\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else {mks--;}
    printf("Your total score is:  %d/10\n",mks);
}


void eng()
{  char opt;
    int mks=0;
    printf("Question 1. 1. If she _________ about his financial situation, she would have helped him out.\n a. had known\n b.knew\n c.would have known\n d.will know\n");
    scanf(" %c",&opt);
    if(opt=='a')
    {
     mks+=2;
    }
    else mks--;

    printf("Question 2. I'll be _______________ their cat while they are away on holiday. \n a.looking into\n b.looking at\n c.looking after\n d.look at\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 3. He made his children _____ their homework every afternoon.\n a.to do\n b.doing\n c.do\n d.did\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 4. The test was _____ difficult she had problems finishing it on time.\n a.such\n b.so\n c.as\n d.that\n");
    scanf(" %c",&opt);
    if(opt=='b')
    {
     mks+=2;

    }
    else mks--;

    printf("Question 5. By the time she arrives, we _________________ our homework.\n a.finish\n b.will finish\n c.will have finished\n d.finished\n");
    scanf(" %c",&opt);
    if(opt=='c')
    {
     mks+=2;

    }
    else {mks--;}

    printf("Your total score is:  %d/10\n",mks);
}























