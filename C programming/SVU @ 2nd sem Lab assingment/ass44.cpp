#include <stdio.h>
// Function to calculate HCF
int calculateHCF(int num1, int num2) 
{
    int i, hcf;
    for(i=1; i<=num1 && i<=num2; i++) 
	{
        if(num1%i==0 && num2%i==0) 
		{
            hcf = i;
        }
    }
    return hcf;
}
// Function to calculate LCM
int calculateLCM(int num1, int num2) 
{
    int lcm, hcf;
    hcf = calculateHCF(num1, num2);
    lcm = (num1*num2)/hcf;
    return lcm;
}
// Main function
int main() 
{
    int num1, num2, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Calculate HCF and LCM
    hcf = calculateHCF(num1, num2);
    lcm = calculateLCM(num1, num2);
    // Display results
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}

