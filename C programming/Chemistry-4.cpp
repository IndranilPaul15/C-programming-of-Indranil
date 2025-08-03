#include<stdio.h>
int main()
{
	float Molal_depression_constant  , the_depression_at_freezing_point  , Vant_Hoff_factor_of_solvent , freezing_point;
	printf("Please enter the value of Molal depression constant  , the depression at freezing point  & Vant Hoff factor of solvent  =\n");
	/* FOR K2SO4 Molal depression constant =4 , the depression at freezing point=0.003  , Vant Hoff factor of solvent=3*/
	scanf("%f %f %f",& Molal_depression_constant, &the_depression_at_freezing_point,&Vant_Hoff_factor_of_solvent);
	freezing_point=Molal_depression_constant  * the_depression_at_freezing_point  * Vant_Hoff_factor_of_solvent ;
	printf(" Hence, the freezing point is %f K",freezing_point);
	return 0;
}
