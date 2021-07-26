#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[100];
	int i;
	int j;
	
	printf("Please enter an integer: ");
    scanf("%s",&a);

    for(i=0;i<100;i++){
        if (a[i]=='\0') break;
        printf("%c: ",a[i]);
        for(j=0;j<a[i]-48;j++){
            printf("%c",a[i]);
        }
        printf("\n");
    }

    return 0;
}
