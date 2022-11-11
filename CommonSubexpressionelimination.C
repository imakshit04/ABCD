#include <stdio.h>
#include <conio.h>
#include <string.h >
struct op
{
	char l;
	char r[20];
}
	op[10];
void main()
{
int a, i, k, j, n, z = 0, m, q;
	char * p, * l;
	char temp, t;
	char * tem;
	clrscr();
	printf("enter no of values");
	scanf("%d", & n);
	//input loop
	for (i = 0; i < n; i++)
	{
		printf("\tleft\t");
		op[i].l = getche();   //reads one character and displays it immediately on output screen , conio.h file's function
		printf("\tright:\t");
		scanf("%s", op[i].r);
	}
	//print the input taken
	printf("intermediate Code\n");
	for (i = 0; i < n; i++)
	{
		printf("%c=", op[i].l);
		printf("%s\n", op[i].r);
	}

//sub expression elimination
	for (m = 0; m < n; m++)
	{
		tem = op[m].r;   //b=c+d   , temp =c+d
		for (j = m + 1; j < n; j++)      //e=c+d
		{
			p = strstr(tem, op[j].r);  // c+d ,  e=c+d
			if (p)
			{
				t = op[j].l; // t= e
				op[j].l = op[m].l; // e=b
				for (i = 0; i < z; i++)
				{
					l = strchr(op[i].r, t);
					if (l)
					{
						a = l - op[i].r;

					op[i].r[a] = op[m].l;
					}
				}
			}
		}
	}
	printf("eliminate common expression\n");
	for (i = 0; i < n; i++) {
	printf("%c\t=", op[i].l);
	printf("%s\n", op[i].r);
}

      getch();
}

/*
3
b        c+d
e	 c+d
r	f
*/