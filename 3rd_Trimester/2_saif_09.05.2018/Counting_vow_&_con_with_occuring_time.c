#include<stdio.h>
#include<conio.h>
main()
{
    char arr[100];
    char con[10] ;
    int c,d,s,v,i,j,num;
    int A,E,I,O,U;
    c=d=s=v=j=0;
    A=E=I=O=U=0;
    printf("Enter the character in this array :");
    gets(arr);
    for (i=0; arr[i]; i++)
    {
        switch(arr[i])
        {
        case 'A' : case 'a' :
            ++v;
            ++A;
            break;
        case 'E' : case 'e' :
            ++v;
            ++E;
            break;
        case 'I' : case 'i' :
            ++v;
            ++I;
            break;
        case 'O' : case 'o' :
            ++v;
            ++O;
            break;
        case 'U' : case 'u' :
            ++v;
            ++U;
            break;
        case '0' :case '1' :case '3' :
            case '4' :case '5' :case '6' :
                case '7' :case '8' :case '9' ://(arr[i]>='0'&&arr[i]<='9')
            ++d;
            break;
        case ' ' :
            ++s;
            break;
        default :
            con[j]=arr[i];
            j++ ;
            ++c ;
        }
        // getch();
    }
    printf("\nThe Number of vowel = %d .\n",v);
    printf("\nThe Number of Consonent = %d .\n",c);
    printf("A = %d\t",A);
    printf("E = %d\t",E);
    printf("I = %d\t",I);
    printf("O = %d\t",O);
    printf("U = %d\t",U);
}
