main()
{
    int i,sum=0;
    i=0;
    while(i<=10)
    {
        if(i%2==0)
            sum=sum+i;
            i++;
    }
    printf("The sum of even number is: %d\n",sum);
}
