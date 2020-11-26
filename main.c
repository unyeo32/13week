#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* fp;
	char filename[100];
	
	//file open
	printf("input the file now:");
	scanf("%s", filename);
	
	if ((fp= fopen(filename, "r")) == NULL)
	{
		printf("input filename is invalid(%s)\n", filename);
		return -1;
	}
	
	fclose(filename);
	return 0;	
}
