#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char argc,char* argv[])
{
	char* a,*o="0",*C="C",*K="K",*F="F";
	a=argv[1];
	if ((argc==3) && (strcmp(argv[2],C)==0) && (atof(a)>=-275.15))
    {
        if ((strcmp(a,o)!=0) && (atof(a)==0))
        {
             printf("invalid parameter");
        }
        else
        {
            printf("%.2f F\n",atof(a)*9/5+32);
            printf("%.2f K",atof(a)+273.15);
        }
	}
	else if ((argc==3) && (strcmp(argv[2],F)==0) && (atof(a)>=-459.67))
	{
	    if ((strcmp(a,o)!=0) && (atof(a)==0))
        {
             printf("invalid parameter");
        }
        else
        {
            printf("%.2f C\n",(atof(a)-32)*5/9);
		printf("%.2f K",(atof(a)-32)*5/9+273.15);
        }
    }
	else if ((argc==3) && (strcmp(argv[2],K)==0) && (atof(a)>=0))
	{
	    	    if ((strcmp(a,o)!=0) && (atof(a)==0))
        {
             printf("invalid parameter");
        }
        else
        {
            printf("%.2f C\n",atof(a)-273.15);
            printf("%.2f F",(atof(a)-273.15)*9/5+32);
        }
	}
	else if (argc==2)
	{
        if ((strcmp(a,o)!=0) && (atof(a)==0))
        {
             printf("invalid parameter");
        }
        else
        {
            printf("%.2f C:\n",atof(a));
            if (atof(a)>=-275.15)
            {
                printf("%.2f F\n",atof(a)*9/5+32);
                printf("%.2f K\n\n",atof(a)+273.15);
            }
            else printf("not exist\n");
            printf("%.2f F:\n",atof(a));
            if (atof(a)>=-459.67)
            {
                printf("%.2f C\n",(atof(a)-32)*5/9);
                printf("%.2f K\n\n",(atof(a)-32)*5/9+273.15);
            }
            else printf("not exist\n");
            printf("%.2f K:\n",atof(a));
            if (atof(a)>=0)
            {
                printf("%.2f C\n",atof(a)-273.15);
                printf("%.2f F",(atof(a)-273.15)*9/5+32);
            }
            else printf("not exist\n");
        }
	}
    else if(argc>=1)
        printf("invalid parameter");
	return 0;
}
