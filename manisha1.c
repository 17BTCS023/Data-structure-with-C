#include<stdio.h>
#define size 50
#include<ctype.h>

int s[size];
int top=-1;
void push(int elem)
{
s[++top]=elem;
}

int pop()
{
return(s[top--]);
}

void main()
{
char pofx[50], ch;
int i=0,op1,op2;
printf("\nEnetr the postfix expression");
scanf("%s",pofx);
while((ch = pofx[i++])!='\0')
{
if(isdigit(ch))
push(ch-'0');
else
{
op1=pop();
op2=pop();
switch(ch)
{
case '+' : push(op1+op2);
	break;
case '-' : push(op1-op2);
	break;

case '*' : push(op1*op2);
	break;
case '%' : push(op1%op2);
	break;
}
}
}
printf("\nGiven postfix expn:%s",pofx);
printf("\nResult after evaluation:%d",s[top]);
printf("\n");
}
