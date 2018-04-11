#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int binsearch(int x,int v[],int n);
int main()
{
    int y,z;
    scanf("%d",&y);
    z=21;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("%d",binsearch(y,arr,z));

}
int binsearch(int x,int v[],int n)
{
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high) //there are two decisions in the while loop, we have to simplify to have one decision in the while loop
    {
        mid=(low+high)/2;
        if(x<v[mid])
        high=mid-1;
       else if(x>v[mid])
        low=mid+1;
        else
        return mid;
    }
    return -1;
}*/


/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,nother=0,c,nwhite=0;
    int ndigit[10];
    for (i=0;i<10;i++)
    ndigit[i]=0;
    while((c=getchar())!=EOF)
    {
        switch(c)
        {
            case'0': case'1': case'2': case'3': case'4': case'5': case'6': case'7': case'8': case'9':

            ndigit[c]++;
            break;

           case' ':
           case'\n':
           case'\t':
           nwhite++;
           break;


            nwhite++;
            default:
            nother++;
            break;


        }
    }
    printf("digits=%d\n",ndigit[i]);
    printf("white spaces=%d,other items =%d",nwhite,nother);
    return 0;
}*/


//NEW
/* Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a Switch. Write a function for
the other direction as well,converting the escape sequences into the real characters */
/*#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 5
int mgetline(char s[],int lim);
void escape(char s[],char t[]);
int main()
{
    char s[MAXLINE],t[MAXLINE];
    mgetline(t,MAXLINE);
    escape(s,t);
    printf("%s",s);
    return 0;
}
void escape(char s[],char t[])
{
    int i,j;
    i=j=0;
    while(t[i]!='\0')
    {
        switch(t[i])
        {
            case '\t':
            s[j]='\\';
            ++j;
            s[j]='t';
            break;
            case '\n':
            s[j]='\\';
            ++j;
            s[j]='n';
            break;
            default:
            s[j]=t[i];
            break;
        }
        ++j;
        ++i;
    }
    s[j]='\0';
}
int mgetline(char s[],int lim)
{
    int i,c;
    for(i=0;i<lim-1&&(c=getchar())!=EOF;i++)
    s[i]=c;
    s[i]='\0';

}*/
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;

    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    return 0;
}*/

//alnum is alpha numeric ,returns non zero,if argument is an alphabet or number character
/*#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
int atoi(char s[]);
int main()
{
  char p[5]={'a','b','c',' ','-'};
  int ans;
  ans =atoi(p);
  printf("%d",p);
  return 0;
}
int atoi(char s[])
{
    int i,n,sign;
    for(i=0;isspace(s[i]);i++)
{


    sign=(s[i]=='-')?-1:1;
    if(s[i]=='+'||s[i]=='-')
    i++;
    for(n=0;isdigit(s[i]);i++)
    {


    n=10*n+(s[i]-'0');

}
}
    return sign*n;


}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLINE 5
int mgetline(char s[],int lim);
int strindex(char s[],char t[]);
char pattern[]="ould";


int main()
{


    char line[MAXLINE];
    int found=0;
    while(mgetline(line,MAXLINE)>0)
    if(strindex(line,pattern)>0)
    {
        printf("%s",line);
        found++;
    }
    return found;
    }

int mgetline(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)

    s[i]=c;
    if(c='\n')
    s[i++]=c;
    s[i]='\0';

}
int strindex(char s[],char t[])
{


int i;
int j;
int k;
for(i=0;s[i]!='\0';i++)
{
     for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
    {


    if(k>0&&t[k]=='\0')
    return i;
}

}
return -1;
}*/
/*#include <stdio.h>
#include<stdlib.h>
int main()
{
    int lower,upper;
    int range=20;
    float celc=0;
    printf("FAHR\t\tcelc\n");

    upper=300;
    for(lower=0;lower<=upper;lower+=range)
    {
        celc=(5.0/9.0)*(lower-32);
        printf("%d\t\t%f\n",lower,celc);
    }
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    c=getchar();
    while(c!=EOF)
    {
        putchar(c);
        c=getchar();
    }
}*/
//program counting characters

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    long nc;
    nc=0;
    while(getchar()!=EOF)
    {
        ++nc;
        printf("%ld\n",nc);
    }
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nl=0,nt=0,b=0,c;
    while((c=getchar())!=EOF)
    {
        if(c=='\t')
        {


        nt++;
        }
        else if(c='\n'){
        nl++;}
        else if(c=' '){
        b++;}
        else{
        return -1;}
        printf("%d tabs,%d spaces,%d lines\n",nt,b,nl);
    }

}*/
/*#include<stdio.h>

main()
{
   int i = 13, j = 60;


   i ^= j;
   j ^= i;
   i ^= j;

   printf("%d %d", i, j);
}
*/
#include<stdio.h>
#include<stdlib.h>
/*int main()
{
    int num1,num2,num3;
    printf("Enter the numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
}*/
/*int main()
{
    int a=5,b=6,c;
    c=a<<2;
    printf("%d",c);
}
*/
/*int main()
{
    int marks;
    printf("enter your CGPA\n");
    scanf("%d",&marks);
    marks=(marks<2.0)? "Failed":"Passed";
    printf("%s",marks);
}*/
/*int main()
{
    int marks;
    printf("enter your CGPA\n");
    scanf("%d",&marks);
    marks=(marks>2.0)?((marks>4.4)? "excellent":"normalprogress"):("failed");
    printf("%s",marks);
}*/
/*int main()
{
    int i=10,b=20,c=30;
    i=b,c;
    printf("%i\n",i);
    i=(b,c);
    printf("%i\n",i);
}*/
/*int main()
{
    int i=10;
    float f= 3.147;
    printf("The integer is: %d\n",i);
    printf("The float is: %f\n",f);
    //implicit conversion
    f=i;
    printf("implicit conversion int to float %f\n",f);
}*/
/*int main()
{
    printf("The size of int in byte is %d\n",sizeof(int));
    printf("the size of float in byte is %d\n",sizeof(float));
    printf("The size of char in byte is %d\n",sizeof(char));
}*/
/*int a=10;
int main()
{

    while(a<20)
    {
        if(a==15)
        {
            a=a+1;
            continue;
        }
        printf("value of a: %d\n",a);
        a++;

    }
}*/
/*int main()
{
    int a=10,b=12,c=a^b;
    printf("%d",c);
}*/

/*int main()
{
    int c;
    c=getchar();
    c=(c>2.8)? "passed":"failed";
    printf("%s",c);

}
*/
/*int main()
{
    int cgpa;
    scanf("%d",&cgpa);
    cgpa=(cgpa>2.8)?((cgpa>4.5)? "strong": "strong potential"): ("cant even stand for guild you little shit");
    printf("%s\n",cgpa);
    printf("%d",sizeof(int));

}
*/
/*int main()
{
    int input;
    printf("1. Play game\n");
    printf("2. Load game\n");
    printf("3. Play")
}*/
/*int main()
{
    int a=10;
    while(a<20)
    {
        if(a==15)
        {
            a=a+1;
            continue;
        }
        printf("value of a: %d\n",a);
        a++;

    }


    return 0;
}*/
/*void demo()
{
    printf("whats up");
}
int main()
{
    demo();
}*/
/*int average(int x,int y);
int main()
{
    int a[]={1,3,4,5};
    int total;
    int x;
    for()

}
int average(int x,int y)
{

    return  x/y;
}
*/
/*int main()
{
    int fahr;
    float celc;
    printf("fahr\t\tcelc\n");
    for(fahr=300;fahr>=0;fahr-=20)
    {
        celc=(5.0/9.0)*(fahr-32);
        printf("%d\t\t%f\n",fahr,celc);

    }
}*/
//PROGRAM THAT COPIES INPUT TO OUTPUT!!!!
/*int main()
{
    int c;

    while((c=getchar())!=EOF)
    {
        putchar(c);

    }
}*/
//PROGRAM THAT COUNTS CHARACTERS
/*int main()
{
    int nc=1;
    while(getchar()!=EOF)
    {
        if(getchar()==' '||'\t'||'\n'||'#')
        printf("%d characters\n",nc);
        ++nc;

    }
}*/
//PROGRAM THAT COUNTS BLANKS NEWLINES AND SPACES
/*int main()
{
    int nl=1,nt=1,ns=1;
    int c;
    while((c=getchar())!=EOF)
    {
        if(c==' ')
        {
            printf("%d spaces\n",ns);
            ns++;
        }
        if(c=='\n')
        {


        printf("%d lines\n",nl);
        nl++;
        }
        if(c=='\t')
        {
            printf("%d tabs\n",nt);
            nt++;
        }
    }
}*/
//PROGRAM THAT COUNTS WORDS
/*#define IN 1
#define OUT 0
int main()
{
    int c,nl,nw,nc,state;
    state=OUT;
    nl=nw=0;
    nc=-1;
    while((c=getchar())!=EOF)
    {
        ++nc;
        if(c=='\n')
        ++nl;
        if(c==' '||c=='\n'||c=='\t')
        state=OUT;
        else if(state==OUT)
        {
            state=IN;
            ++nw;
        }
        printf("%dlines %dwords %dcharacters\n",nl,nw,nc);
    }

}*/
 /* main()
   {
       int c, i, nwhite, nother;
     int ndigit[10];
       nwhite = nother = 0;
        for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
       while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
        ++ndigit[c-'0'];
  else if (c == ' ' || c == '\n' || c == '\t')
               ++nwhite;
                 else
              ++nother;
         printf("digits =");
    for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",           nwhite, nother);   }

*/
//POINTERS
/*int main()
{
    int x=1,y=2,z[10]={1,2,3,4,5,6,7,8,9,10};
    int *ip;

    ip=&x;
    *ip= 56;
    y=*ip;
    ip=&z[0];

    printf("%d %d  %d",x,y,*ip);
}*/
//POINTERS AND FUNCTION ARGUMENTS

//void swap(int *pa,int *pb); //*pa represents the actual value stored in the memory pa holds|| by saying pa=&a, we mean that pa holds the memory location of a.
/*int main()
{
    int a=2,b=100;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    swap(&pa,&pb); //swapping memory locations
    printf("%d and %d\n",*pa,*pb); //memory locations were swapped when you come to print respective components the swapped values are printed
    printf("a is %d, b is %d",a,b);//initial values of a and b however hold
}
void swap(int *pa,int *pb)
{
    int temp; //we declared a temporary value temp
    temp=*pa; //we took the contents in memory location pa and placed them in temporary value teemp
    *pa=*pb;// since pa was now empty, we put into it the value in memory location pb,*pb
    *pb=temp;// pb was now empty, so we put into it the temporary value,*pa. Thus swap completion.

}*/
/*int main()
{

    char s[]="hello";
    int counter=0;
    while(counter<4)
    {
        printf("%c\n",s[counter]);
        counter++;
    }
}*/
/*int strlen(char *s);
int main()
{
   char s[]="hello";
   printf("%d",strlen(s));
}
int strlen(char *s) //to determine the string length of a character
{
    int n;
    for(n=0;*s!='\0';s++) //we know that when a string is being printed it includes the \0 part,so we skip it by saying *s(contents of string s) shouldnt be equal to \0.
    {
        n++; //n is like a counter we created that adds itself up whenever condition is true. s++ means implementing the memory positon by one|| each memory position has a different value of *s
    }
    return n;

}*/
/*int main()
{
    int radius;
    float area;
    printf("Enter the radius: \n");
    scanf("%d",&radius);
    area=(3.14159)*(radius*radius);
    printf("Area =%f\n ",area);
    return 0;
}
*/
/*float product(float x,float y);
int main()
{
    int a=4,b=5;
    printf("%f\n",product(a,b));


}
float product(float x,float y)
{
    return(x*y);
}
*/
/*void display_line(void);
int main()
{
  display_line();
  printf("\n Teach Yourself C in 21 days!\n");
  display_line();
  return 0;
}
void display_line(void)
{
    int counter;
    for(counter=0;counter<30;counter++)
    printf("..");
}
*/

/*int main()

{
    char buffer[256];
    printf("Enter your name and press <Enter>:\n");
    gets(buffer);
    printf("\nYour name has %d characters and spaces!",strlen(buffer)-1);
    return 0;
}*/
/*int main()
{
    printf("%d\t\%d\t%d",sizeof(char),sizeof(int),sizeof(float));
}
*/
/*int main()
{
    int x=5;
    printf("%d\n",x++);
    printf("%d",x);
}*/
/*int x=1;
int main()
{
if(x==1)
printf(" x equals 1");
else
printf(" x does not equal 1");
return 0;
}*/
/*long  cube(long x);
int main()
{
    int w;
    scanf("%d",&w);

    printf("%ld",cube(w));
}
long cube(long x)
{
    return x*x*x;
}
*/
/*int x=1,y=2;
void demo(void);
int main()
{
    printf("\nBefore calling demo(),x=%d and y=%d",x,y);
    demo();
    printf("\nAfter calling demo(),x=%d and y=%d\n",x,y);
    return 0;
}
void demo(void)
{
    int x=88,y=99;
    printf("\nWithin demo(),x=%d and y=%d",x,y);
}
*/
//CALCULATING FACTORIALS
/*#include<stdio.h>
unsigned int f,x;
unsigned int factorial(unsigned int a);
int main(void)
{
   puts("Enter an integer value between 1 and 8:");
   scanf("%d",&x);
   if(x>8||x<1)
   {
       printf("Only values from 1 to 8 are acceptable!");

   }
   else
   {
       f=factorial(x);
       printf("%u factorial equals %u\n",x,f);

   }
}
unsigned int factorial(unsigned int a)
{
    if(a==1)
    return 1;
    else
    {

        return a*factorial(a-1);

    }
}
*/
/*int product(int x,int y);
int a,b;
int main()
{
    printf("Enter two numbers:  \n");
    scanf("%d%d",&a,&b);
    printf("The product is %d",product(a,b));
}
int product(int x,int y)
{
    return x*y;
}
*/
/*float divide(float x,float y);
float a,b;
int main()
{
    printf("Enter two numbers:  \n");
    scanf("%f%f",&a,&b);
    if(b==0)
    printf("Syntax Error");
    else
    printf("The answer is %f",divide(a,b));
    return 0;
}
float divide(float x,float y)
{


        return x/y;

}
*/
/*float average(float a,float b,float c,float d,float e);
int main()
{

}
float average(float a,float b,float c,float d,float e)
{
    i
}*/
/*float expenses[13];
int count;
int main()
{
    for(count=1;count<13;count++)
    {
        printf("Enter expenses for month %d:",count);
        scanf("%f",&expenses[count]);

    }
    for(count=1;count<13;count++)
    {
        printf("Month %d = $%.2f\n",count,expenses[count]);

    }
    return 0;
}*/
/*#define MAX_GRADE 100
#define STUDENTS 10
int grades[STUDENTS];
int idx;
int total=0;
int main()
{
    for(idx=0;idx<STUDENTS;idx++)
    {
        printf("Enter Person %d's grade: ",idx+1);
        scanf("%d",&grades[idx]);
        while(grades[idx]>MAX_GRADE)
        {
            printf("\nThe highest grade possible is %d",MAX_GRADE);
            printf("\nEnter correct grade: ");
            scanf("%d",&grades[idx]);
        }
        total+=grades[idx];
        }
        printf("\n\nThe average score is %d\n",(total/STUDENTS));
        return 0;

    }*/
    int grades[10];
    int count;
    int total;
    int main()
    {
        for(count=0;count<10;count++)
        {
            printf("Enter Person's %d grade:  ",count+1);
            scanf("%d",&grades[count]);
            while(grades[count]>100)
            {
                printf("Maximum mark is 100\nEnter Correct Grade:  \n");
                scanf("%d",&grades[count]);


            }
            total+=grades[count];
        }
        printf("\n\nThe average score is %d\n",(total/10));
    }

