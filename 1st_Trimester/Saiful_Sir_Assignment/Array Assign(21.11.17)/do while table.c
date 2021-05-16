#define     R     5
#define     C     5

main()
{
    int row,column,product[R][C];
    int i=0 , j=1 ;

    printf("MULTIPLICATION TABLE :\n\n");
    printf ("   ");

      do{
            printf ("%4d", j);
            j++ ;
        }while ( j<=C );

    printf ("\n");
        printf ("________________________\n");


          do{
                row=i+1;
                printf ("%2d", row);
                printf ("|");
                j=1 ;
                  do{
                        column=j;
                        product[i][j] = row*column;
                        printf("%4d",product[i][j] );
                        j++ ;
                    }while (j<=C );

                printf("\n");
                i++ ;

            }while ( i<R );

}
