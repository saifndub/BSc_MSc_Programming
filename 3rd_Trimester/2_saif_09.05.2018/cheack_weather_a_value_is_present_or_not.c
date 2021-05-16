int main()
{
    int arr[100];
    int size, i, j, toSearch, found,count;
    while(1)
    {
        printf("Enter size of array: ");
        scanf("%d", &size);

        printf("Enter elements in array: \n");
        for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nEnter element to search: ");
        scanf("%d", &toSearch);

        /* Assume that element does not exists in array */
        found = 0;
        for(i=0; i<size; i++)
        {
            if(arr[i] == toSearch)
            {
                printf("\n%d is found at position :", toSearch);
                break;
            }
        }
        for(i=0; i<size; i++)
        {
            if(arr[i] == toSearch)
            {
                printf(" %d", i + 1);
                found = found+1;
                //break;
            }
        }

        if(found>0)
        {
            printf("\n%d is found in %d times .", toSearch, found);
        }
        else
        {
            printf("\n%d is not found in the array .", toSearch);
        }
        printf("\n\n");
    }
    return 0;
}

