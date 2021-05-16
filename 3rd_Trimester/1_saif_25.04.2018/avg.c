avg(int num1,int num2)
{
    int res;
    res = (num1 + num2)/2 ;
    return res;
}

main ()
{
    /* local variable definition */
    int a;
    int b;
    int r;
    printf ("Enter First Number :");
    scanf("%d",&a);
    printf ("Enter Second Number :");
    scanf("%d",&b);
    /* calling a function to get max value */
    r = avg(a,b);

    printf( "value is : %d\n", r );
    return 0;
}
