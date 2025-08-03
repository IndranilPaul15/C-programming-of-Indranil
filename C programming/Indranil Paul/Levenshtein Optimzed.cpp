#include <stdio.h>
#include <string.h>
#define MAX 1000
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MIN3(a,b,c) (MIN(a,MIN(b,c)))
int edit_dist(char* s1,char* s2)
{
    int m=strlen(s1);
	int n=strlen(s2);
    int prev[MAX+1],curr[MAX+1];
    for(int j=0;j<=n;j++)
    {
    	prev[j]=j;
	}
    for(int i=1;i<=m;i++)
	{
        curr[0]=i;
        for (int j=1;j<=n;j++)
		{
            if(s1[i-1]==s2[j-1])
            {
            	curr[j]=prev[j-1];
			}
            else
            {
            	curr[j]=1+MIN3(prev[j],curr[j-1],prev[j-1]);
			}
        }
        for(int j=0;j<=n;j++)
        {
        	prev[j]=curr[j];
		}
    }
    return prev[n];
}
int main() 
{
    char s1[MAX],s2[MAX];
    printf("Enter the 1st string: ");
    scanf("%s",s1);
    printf("Enter the 2nd string: ");
    scanf("%s",s2);
    int dist=edit_dist(s1,s2);
    printf("Minimum Edit Distance: %d\n",dist);
    return 0;
}

