#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpnt;
    char mychar;
    fpnt=fopen("test","w");
    if(fpnt==NULL)
    {
        printf("Unable to open the file .....");
        exit(0);
    }
while((mychar=getchar())!=EOF)
{
    fputc(mychar,fpnt);
}
fclose(fpnt);

}
