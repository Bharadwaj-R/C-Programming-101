//takes input as a command line argument and returns the value in a text file on desktop.
//enter the command line agruement like ./Function_name.out a b +
//this works only on linux machines as the command line arguments in windows is difficult.
#include<stdio.h>
void main(int argc, char *argv[])
{
    FILE *fp=fopen("C:\\Users\\routh\\Desktop\\output.txt",w+);
    int a,b,c=0;
    for(i=0;i<sizeof(argv[1]);i++)
    {
        a=a+((int)(argv[1][i]-48)*pow(10,i));
    }
        for(i=0;i<sizeof(argv[2]);i++)
    {
        b=b+((int)(argv[2][i]-48)*pow(10,i));
    }
    switch(argv[3][0])
    {
        case '+':
        c=a+b;
        fprintf(fp,"%d %c %d %c %d",a,'+',b,'=',c);
        fclose(fp);
        break;

        case '-':
        c=a-b;
        fprintf(fp,"%d %c %d %c %d",a,'-',b,'=',c);
        fclose(fp);
        break;

        case '*':
        c=a*b;
        fprintf(fp,"%d %c %d %c %d",a,'*',b,'=',c);
        fclose(fp);
        break;

        case '/':
        c=a/b;
        fprintf(fp,"%d %c %d %c %d",a,'/',b,'=',c);
        fclose(fp);
        break;

        default:
        printf("!!!invalid input!!!");
    }
}
