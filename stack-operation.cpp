#include<iostream>

#include<stdio.h>
usingnamespace std;
#define MAX 30

class conversion
{
char infix[MAX+1],stack[MAX],postfix[MAX+1],b,top;
public:
conversion()
{
top=-1;
}
void infix_to_postfix(conversion &);
void push(char[],char);
char pop (char[]);
int isop(char);
int priority (char);
void input();
void output();
};

void conversion::input() 
{
cout<<"\n enter the infix expression"<<endl;
cin>>infix;
}
void conversion::output()
{
cout<<"\n infix expression is ";
puts(infix);
}
void conversion::infix_to_postfix(conversion &c)
{
int i,j=0;
for(i=0;infix[i]!='\0';i++);
infix[i]=')';
infix[i+1]='\0';
c.push(stack,'(');

cout<<"\n postfix expression:";
for(i=0;i<j;i++)
cout<<postfix[i];
} 

char conversion ::pop(char s[])
{
char c;
c=s[top];
top--;
return (c);
}
int conversion::isop(char c)
{
if((c=='^')||(c=='*')||(c=='/')||(c=='+')||(c=='-'))
return(1);
else
return(0);
}

int main()
{ 
conversion c;
c.input();// read infix expression
c.output();// display infix expression
c.infix_to_postfix(c);//convert as well as display
}
