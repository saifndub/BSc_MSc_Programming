avg(int n1,int n2,int n3)
{
    int res;
    res = (n1 + n2 + n3)/3 ;
    return res;
}

main ()
{
    /* local variable definition */
    int a,b,c;
    int result;
    printf ("Enter First Number :");
    scanf("%d",&a);
    printf ("Enter Second Number :");
    scanf("%d",&b);
	printf ("Enter Third Number :");
    scanf("%d",&c);
    /* calling a function to get max value */
    result = avg(a,b,c);

    printf( "Avarage value is : %d\n", result );
    return 0;
}
