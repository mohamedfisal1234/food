#include<stdio.h>
 main()
{
    printf ("pick any item");
    printf ("\n1.Pasta \n2.French Fries \n3.pizza \n4.sandwich \n5.burger \n enter your item :");
    int n=0;
    scanf("%d",&n);
     switch(n)
    {
        case 1:
        printf("\n food item-pasta \n \n price-RS 179.");
        break;
       case 2:
        printf("\n food item-french fries \n \n price-RS 99.");
        break;
        case 3:
        printf("\n food item-pizza \n \n price-RS 239.");
        break;
        case 4:
        printf("\n food item-sandwich \n \n price-RS 149");
        break;
        case 5:
        printf("\n food item-burger\n \n price-RS 129");
        break;
        default :
        printf("\n invalid choice");
        
    }
}
