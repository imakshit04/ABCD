%{
  
%}
 
%%
[a].[a|b]*.[b]  {printf("\n Accepted");}
[b].[a|b]*.[a]    {printf("\n Accepted");}
.                         {printf("\n Rejected"); return 0;}
%%

int main()
{
 printf("\n Enter String");
 yylex();
 
 return 0;
/*	flex Exp1.d.l
	Gcc lex.yy.c
	./a.out
*/
}
int yywrap()
{
 return 1;
}  