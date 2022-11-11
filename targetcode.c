#include<stdio.h>
#include<string.h>
void main(){
char gram[10][30], str[20], opr[10];
int i=0;
int g=0;
printf("\nEnter the set of intermediate code:\n");
do{
scanf("%s", gram[i]);
}
while(strcmp(gram[i++],"exit")!=0);
printf("\nTarget code generation");
printf("\nType exit to terminate");
i=0;
do{
strcpy(str,gram[i]);
switch(str[3]){
case '+':
strcpy(opr,"ADD");
g++;
break;
case '-':
strcpy(opr,"SUB");
g++;
break;
case '*':
strcpy(opr,"MUL");
g++;
break;
case '/':
strcpy(opr,"DIV");
g++;
break;
}
printf("\n\tMOV R%d,%c", i,str[2]);
printf("\n\tMOV R%d,%c", g,str[4]);
printf("\n\t%s R%d,R%d R%d", opr,i,i,g);
printf("\n\tSTF %c,R%d", str[0],i);
}while(strcmp(gram[++i],"exit")!=0); }
/* a=b-c*/