#define     Rows        5
#define     Columns     5

main()
{
    int row,column,product[Rows][Columns];
    int i,j;
    printf("MULTIPLICATION TABLE :\n\n""   ");
   // printf ("   ");
    for (j=1 ; j<=Columns ; j++ )
        printf ("%4d", j);
        printf ("\n");
        printf ("________________________\n");
    for (i=0 ; i<Rows ; i++)
    {
        row=i+1;
        printf ("%2d|", row);
       // printf ("|");
        for (j=1; j<=Columns; j++)
        {
            column=j;
            product[i][j] = row*column;
            printf("%4d",product[i][j] );
        }
        printf("\n");
    }

}
