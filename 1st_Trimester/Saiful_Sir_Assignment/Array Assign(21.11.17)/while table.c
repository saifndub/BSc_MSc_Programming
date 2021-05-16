#define     R     5
#define     C     5

main()
{
    int row,column,product[R][C];
    int i=0 , j=1 ;

    printf("MULTIPLICATION TABLE :\n\n");
    printf ("   ");

        while ( j<=C )
        {
            printf ("%4d", j);
            j++ ;
        }

    printf ("\n");
        printf ("________________________\n");

            while ( i<R )
            {
                row=i+1;
                printf ("%2d", row);
                printf ("|");
                    j=1 ;
                    while (j<=C )
                    {
                        column=j;
                        product[i][j] = row*column;
                        printf("%4d",product[i][j] );
                        j++ ;
                    }
                printf("\n");
                i++ ;
            }

}
