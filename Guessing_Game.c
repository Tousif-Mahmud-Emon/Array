//Guessing_Game
//Coded by "Tousifinity"

#include<stdio.h>
int main()
{
    int a,b;
    b=((6*6)+(5*5*5)+(4*4*4*4)+(3*3*3*3*3)+(2*2*2*2*2*2)-(3*3*3+2*2));
    while(1)
    {
        printf("Enter a number between 1 to 1000: ");
        scanf("%d",&a);
        printf("\n");

        if(a<1 || a>1000){
            printf("Invalid Input\n");
        }
        else if(a>=1 && a<=100)
        {
            printf("You're far far far far away.\nAdd some more numbers I recommend +10.\n");
            printf("\n");
        }
        else if(a>=101 && a<=200)
        {
            printf("You're far far far far away.\nAdd some more numbers I recommend +20.\n");
            printf("\n");
        }
        else if(a>=201 && a<=300)
        {
            printf("You're far far far away.\nAdd some more numbers I recommend +30.\n");
            printf("\n");
        }
        else if(a>=301 && a<=400)
        {
            printf("You're far far far away.\nAdd some more numbers I recommend +40.\n");
            printf("\n");
        }
        else if(a>=401 && a<=500)
        {
            printf("You're far far away.\nAdd some more numbers I recommend +50.\n");
            printf("\n");
        }
        else if(a>=501 && a<=600)
        {
            printf("You're far away.\nAdd some more numbers I recommend +60.\n");
            printf("\n");
        }
        else if(a>=601 && a<=650)
        {
            printf("You're close.\nAdd some more numbers I recommend +40.\n");
            printf("\n");
        }
        else if(a>=651 && a<=710 && a!=b)
        {
            printf("A little bit more.\nYour answer is here: (6^2+5^3+4^4+3^5+2^6-3^3-2^2)\nLets calculate it.\n");
            printf("\n");
        }
        else if(a>=711 && a<=750)
        {
            printf("Ohh!!! you cross the correct answer.\nYour answer is here: (6^2+5^3+4^4+3^5+2^6-3^3-2^2)\nLets calculate it.\n");
            printf("\n");
        }
        else if(a>=751 && a<=850)
        {
            printf("You're far far away.\nSubtract some numbers. I recommend -40.\n");
            printf("\n");
        }
        else if(a>=851 && a<=950)
        {
            printf("You're far far away.\nSubtract some numbers. I recommend -50.\n");
            printf("\n");
        }
        else if(a>=951 && a<=1000)
        {
            printf("You're far far away.\nSubtract some numbers. I recommend -80.\n");
            printf("\n");
        }
        else if(a==b)
        {
            printf("Congrats!!! Your guess is correct\n");
            break;
        }
    }
    return 0;
}
