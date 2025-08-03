#include<stdio.h>
int main()
{
	float The_molar_mass_of_nitric_acid_is = 63 , nitric_acid_used_in_laboratory_is , Density_of_solution_is=1.504 , Molarity ;
	printf("Please enter the value of nitric_acid_used_in_laboratory_is(in persentage) =");
	scanf("%f",&nitric_acid_used_in_laboratory_is);
    Molarity = ((nitric_acid_used_in_laboratory_is /The_molar_mass_of_nitric_acid_is) / (100 / (Density_of_solution_is * 1000 ) ) );
    printf("\nHence, the molarity should be %f g/mL" ,  Molarity);
    return 0;
}
