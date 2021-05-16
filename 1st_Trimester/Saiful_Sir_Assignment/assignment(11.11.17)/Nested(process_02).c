main()
{
    int a,b;
    for(a=1;a<=6;a++)
    {
        for(b=1;b<=a;b++)
        {
            ((a+b)%2==0)?printf("1"):printf("0");
        }
        printf("\n");
    }
}
