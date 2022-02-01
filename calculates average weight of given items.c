#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Aweight, Bweight;
    int An,Bn;

    printf("Enter the weight of first item: ");
    scanf("%g" , &Aweight);
    printf("Enter quantity: ");
    scanf("%d", &An);
    printf("Enter the weight of second item: ");
    scanf("%g", &Bweight);
    printf("Enter quantity: ");
    scanf("%d", &Bn);

    float TotalWeight, AverageWeight;

    TotalWeight = (An * Aweight) + (Bn * Bweight);
    AverageWeight = (TotalWeight)/(An + Bn);

    printf("The average weight is %g", AverageWeight);

    return 0;

}
