#include<stdio.h>
#include<math.h>
int main()
{
	float density, effective_number_of_atom_in_unit_cell , molar_mass , edge_lenth_of_unit_cell,Avogadros_number;
	printf("Please enter the value of effective_number_of_atom_in_unit_cell , molar_mass, edge_lenth_of_unit_cell =\n");
	scanf("%f%f%f%f",&effective_number_of_atom_in_unit_cell,&molar_mass,&edge_lenth_of_unit_cell,&Avogadros_number);
    density =(effective_number_of_atom_in_unit_cell *  molar_mass)/(Avogadros_number * edge_lenth_of_unit_cell * edge_lenth_of_unit_cell* edge_lenth_of_unit_cell);
	printf(" DENSITY OF THE MOLICULE =%f cm^-3 ",density );
	return 0;
}

