#include <stdio.h>
#include <string.h>
#define MAX 1000
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MIN3(a,b,c) (MIN(a,MIN(b,c)))
int dp[MAX+1][MAX+1];
void printMatrix(int m,int n,char* s1,char* s2)
{
    printf("\n  ");
    for(int j=1;j<=n;j++)
    {
    	printf(" %c",s2[j-1]);
	}
    printf("\n");
    for(int i=1;i<= m;i++)
	{
        printf(" %c",s1[i-1]);
        for(int j=1;j<=n;j++)
		{
            printf(" %d",dp[i][j]);
        }
        printf("\n");
    }
}
int edit_dist(char* s1,char* s2)
{
    int m=strlen(s1);
	int n=strlen(s2);
    for(int i=0;i<=m;i++)
    {
    	dp[i][0]=i;
	}
    for(int j=0;j<=n;j++)
    {
    	dp[0][j]=j;
	}
    for(int i=1;i<=m;i++)
	{
        for(int j=1;j<=n;j++)
		{
            if(s1[i-1]==s2[j-1])
            {
            	dp[i][j]=dp[i-1][j-1];
			}
            else
            {
				dp[i][j]=1+MIN3(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
			}
        }
    }
    printf("\nEdit Distance Matrix for %s : %s ->\n",s1,s2);
    printMatrix(m,n,s1,s2);
    return dp[m][n];
}

int main()
{
    char str1[MAX],str2[MAX];
    printf("Enter 1st string: ");
    scanf("%s",str1);
    printf("Enter 2nd string: ");
    scanf("%s",str2);
    int dist=edit_dist(str1,str2);
    printf("\nEdit Distance: %d\n",dist);
    return 0;
}

