#include<stdio.h>
int main()
{
	// This is the  file pointer 
	FILE *myFile=NULL;
	// opening a file
	myFile=fopen("myFile.txt","w");

	char c=fgetc(myFile);
	printf("The character i read was: %c\n",c);
	c=fgetc(myFile);
	printf("The character i read was: %c\n",c);
    /* 
    Here we use the fgets method to get string fromn the file



    
    */
	char str[20];
	fgets(str,5,myFile);
	printf("The string I read was: %s\n",str);	

	fputc('a',myFile);
	fputs("This is Guddu the legend",myFile);


	fclose(myFile);
	return 0;

}