#include <stdio.h>

int main()
{
int (n);
printf("Dla ktorego elementu ciagu podac wartosc? \n");
scanf("%d",&n);
if(n<=2) printf("Dla elementu %d wartosc ciagu wynosi 1\n", n);
else{
	int f1=1;
	int f2=1;
	int f0;
	for(int i=3;i<=n;i++){
		f0=f1+f2;
		f1=f2;
		f2=f0;
	}
	printf("Dla elementu %d wartosc ciagu wynosi %d\n",n,f2);
}
return 0;
}
