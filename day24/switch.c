#include<stdio.h>
int main ()
{
    char menu;
    int menu2;

    printf("chon menu ");
    scanf("%c",&menu);
    
    printf("chon menu2  ");
    scanf("%d",&menu2);

    switch(menu)
    {
        case '1':
        {
            printf("pho");
            break;
        }
        case '2':
        {
            printf("bun bo hue");
            break;
        }
        case '3' :
        {
            printf("mi quang ");
            break;
        }
        case '4' :
        {
            printf("thit quay");
            break;
        }
    }
    switch(menu2)
    {
        case 1:
        {
            printf("\npho");
            break;
        }
        case 2:
        {
            printf("\nbun bo hue");
            break;
        }
        case 3 :
        {
            printf("\nmi quang ");
            break;
        }
        case 4 :
        {
            printf("\nthit quay");
            break;
        }
    default:
         printf("lua chon cua toi la %c va %d",menu,menu2);
    
    }  
}