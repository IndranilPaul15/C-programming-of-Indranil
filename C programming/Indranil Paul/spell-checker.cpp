#include <stdio.h>
#include <string.h>
#include <limits.h>
#define WORD 100
#define LEN 100
int edit_dist(char* s1, char* s2, int Ci, int Cd, int Cs)
{
    int m=strlen(s1);
    int n=strlen(s2);
    int dp[LEN+1][LEN+1];
    for(int i=0;i<=m;i++)
        dp[i][0]=i*Cd;
    for(int j=0;j<=n;j++)
        dp[0][j]=j*Ci;
    for(int i=1;i<=m;i++)
	{
        for(int j=1;j<=n;j++)
		{
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=dp[i-1][j-1]+Cs;
            int del=dp[i-1][j]+Cd;
            int insert=dp[i][j-1]+Ci;
            if(del<dp[i][j])
			{
				dp[i][j]=del;
			}
            if(insert<dp[i][j])
            {
            	dp[i][j]=insert;
			}
        }
    }
    return dp[m][n];
}
int main()
{
    char* dict[]={"cred","bet","shat","that","brad","cart","brat","card"};
    int size=8;
    char input[LEN];
    int Ci=1,Cd=1,Cs=1;
    printf("Enter word to check: ");
    scanf("%s",input);
    int minDist=INT_MAX;
    int dist[WORD];
    for(int i=0;i<size;i++)
	{
        dist[i]=edit_dist(input,dict[i],Ci,Cd,Cs);
        if (dist[i]<minDist)
        {
        	minDist=dist[i];
		}
    }
    printf("\nSuggestions for %s:\n",input);
    for(int i=0;i<size;i++) {
        if (dist[i]==minDist)
            printf(" - %s\n",dict[i]);
    }
    printf("\nMinimum edit distance: %d\n",minDist);
    return 0;
}

