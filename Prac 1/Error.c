#include <stdio.h>
#include<stdbool.h>
#include<malloc.h>
 
// Driver code
int main()
{
    char buf[24];
    printf("Please enter your name and press <Enter>\n");
    fgets(buf);
    printf("%s", buf);
    return 0;

    int N;
    scanf("%d", &N);
    int i_A;
    char **A=(char **)malloc(sizeof(char*)*(N));
    for(i_A = 0; i_A < N; i_A++)
    {
    	A[i_A]=(char *)malloc(51200 * sizeof(char));
    	scanf(" %s", A[i_A]);
    }

}