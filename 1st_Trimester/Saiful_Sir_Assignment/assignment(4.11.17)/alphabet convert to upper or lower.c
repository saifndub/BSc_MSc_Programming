main()
{
char alphabet;
printf("Enter an alphabet:");
putchar('\n');                          //move to next line
alphabet=getchar();
       if(islower(alphabet))
putchar(toupper(alphabet));
else
putchar(tolower(alphabet));
}
