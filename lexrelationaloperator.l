%{
#include<stdio.h>
%}
 
%%
[+-/=*%]  {printf("\n Accepted");}
.                         {printf("\n Rejected"); return 0;}
%%

int main()
{
 printf("\n Enter RelationalOperator");
 yylex();
 
 return 0;
}
int yywrap()
{
 return 1;
}  
