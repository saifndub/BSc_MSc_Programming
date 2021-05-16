main()
{
    int x,y;
    for(x=1;x<=6;x++)
    {
        for(y=1;y<=x;y++)
        {
            if((x+y)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}
