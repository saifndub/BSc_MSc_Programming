//selecting the largest of three numbers...
main()
{
float A,B,C;

printf("enter three values:\n");
scanf("%f %f %f",&A,&B,&C);

printf("\nLargest value is :");
  if(A>B)
  {
    if(A>C)
printf("%f\n",A);
    else
printf("%f\n",C);
  }
  else
  {
     if(C>B)
printf("%f\n",C);
     else
printf("%f\n",B);
  }
}
