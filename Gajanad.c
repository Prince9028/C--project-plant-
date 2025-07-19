#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c,choice,turnes;
    long long int price, net, amount; 
     char name[20];

    printf("Welcome to Gajanad Enterprise\n");
    printf("Choose a soil type to see its details:\n");
    printf("1. Black Soil\n");
    printf("2. Red Soil\n");
    printf("3.Soil\n");
    printf("4.exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

switch(choice)
{
case 1 :
        printf("Black soil price:550\n");
        
    break;

case 2 :
        printf("Red soil price:700\n");
        break;

case 3 : 
        printf("Soil price:200\n");
        break;
case 4:
        printf("Thank you for visit by Gajanad Enterprise");        


default:
        printf("plese selected soil type\n");
    break;
}

// printf("witch net turnes of soil");

// printf("Choose a soil net wet to see its details:\n");
//     printf("1. Black Soil: 20 tunes\n");
//     printf("2. Black Soil: 40 tunes\n");
//     printf("3. Red Soil  : 20 tunes\n");
//     printf("4. Red Soil  : 40 tunes\n");
//     printf("5. Soil      : 20 tunes\n");
//     printf("6. Soil      : 40 tunes\n");
//     printf("Enter your choice (1-6): ");
//     scanf("%d",&turnes);

switch(choice)
{
case 1:
       printf("1.Enter Black Soil price : ");
       scanf("%lld", &price);
       printf("2.Enter Black Soil  net: ");
       scanf("%lld", &net);

       printf(" Price = %lld, Net = %lld\n", price, net);

      
        amount=price*net;
        printf("1.Total amount Black Soil amount=%lld \n",amount);
   
    break;
case 2:
       printf("1.Enter Red Soil  price : ");
       scanf("%lld", &price);
       printf("2.Enter Red Soil net: ");
       scanf("%lld", &net);

      printf(" Price = %lld, Net = %lld\n", price, net);


       amount=price*net;
       printf(" Total amount Red Soil  amount=%lld \n",amount);
 break;
 case 3:
       printf("1.Enter normal Soil  price : ");
       scanf("%lld", &price);
       printf("2.Enter normal Soil net: ");
       scanf("%lld", &net);

      printf(" Price = %lld, Net = %lld\n", price, net);


       amount=price*net;
       printf(" Total amount normal Soil =%lld \n",amount);
 break;
default:
        printf("plese selacted write choice");

    break;
    printf("Thank you for visit by Gajanad Enterprise");
}    
}      


