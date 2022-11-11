%{
  
%}
 
%%
[aeiouAEIOU].[A-Za-z]*  {printf("\n Accepted");}
.                         {printf("\n Rejected"); return 0;}
%%

int main()
{
 printf("\n Enter String");
 yylex();
 
 return 0;
/*	flex lexvowel.l
	Gcc lex.yy.c
	./a.out
*/
}
int yywrap()
{
 return 1;
}  