main()
{
    int i ,sum=0;
    i=1;

    do
    {

       if(i%2==0)

          sum=sum+i;
          i++;

    } while(i<=10);

    printf("The sum of even number is: %d\n",sum);

}
