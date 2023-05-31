#include<stdio.h>
int main()
{
		FILE *myFile=NULL;
		myFile=fopen("myFile.txt","w");

	char c=fgetc(myFile);
	printf("The character i read was: %c\n",c);
	c=fgetc(myFile);
	printf("The character i read was: %c\n",c);
    
	char str[20];
	fgets(str,5,myFile);
	printf("The string I read was: %s\n",str);	

	fputc('a',myFile);
	fputs("This is Guddu the legend",myFile);


	fclose(myFile);
	return 0;

}