#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a;
	char t=' ';
	printf("tconvert ");
	scanf("%f",&a);
	getchar();
	t=getchar ();
	if (t=='C')
	{
		printf("%.2f F\n",a*9/5+32);
		printf("%.2f K",a+273.15);
	}
	else if (t=='F')
	{
		printf("%.2f C\n",(a-32)*5/9);
		printf("%.2f K",(a-32)*5/9+273.15);
	}
	else if (t=='K')
	{
		printf("%.2f C\n",a-273.15);
		printf("%.2f F",(a-273.15)*9/5+32);
	}
	else
	{
		printf("%.2f C:\n",a);
		printf("%.2f F\n",a*9/5+32);
		printf("%.2f K\n",a+273.15);
		printf("\n");
		printf("%.2f F:\n",a);
		printf("%.2f C\n",(a-32)*5/9);
		printf("%.2f K\n",(a-32)*5/9+273.15);
		printf("\n");
		printf("%.2f K:\n",a);
		printf("%.2f C\n",a-273.15);
		printf("%.2f F",(a-273.15)*9/5+32);
	}
	return 0;
}