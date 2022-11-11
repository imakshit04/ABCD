%{
  int lines=0,words=0,l=0,s_l=0,num=0,spl_chr=0,total=0,sp=0,tab=0;
%}
 
%%
\n {lines++,words++;}
[' ']  {sp++; words++;}
\t  {tab++; words++;}
[a-zA-Z] { l++; }
[0-9]+ num++;
. spl_chr++;
%%

int main()
{
 yyin=fopen("abcforlexcount.txt","r");
 yylex();
 
 printf("\n THE FILE COUNTING ...");
 printf("\n lines  :%d",lines);
 printf("\n words  :%d",words);
 printf("\n num  :%d",num);
 printf("\n  letter  :%d",l);
 printf("\n tabs  :%d",tab);
 printf("\n special character  :%d",spl_chr);
 printf("\n spaces :%d \n",sp);
/*	flex Exp1.a.l
	Gcc lex.yy.c
	./a.out
*/
}
int yywrap()
{
 return 1;
}  
 
 /*	flex Lextocountnoof.l
	Gcc lex.yy.c
	./a.out
*/
   