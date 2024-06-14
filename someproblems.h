void somePrograms()
{
    int choice;
    while(1)
    {
        printf("Enter 1 to find the element in an array\n");
        printf("Enter 2 to make matrix sum\n");
        printf("Enter 3 to make a arrays last element come to first\n");
        printf("Enter 4 to swap the two numbers\n");
        printf("Enter 5 to make 1 to 10 numbers sum using array\n");
        printf("Enter 6 to generate the Fibonacci Series\n");
        printf("Enter 7 to find students marks sum average result\n");
        printf("Enter 8 to remove the duplicate Element in an array\n");
        printf("Enter 9 to know ATM working simulation\n");
        printf("Enter 10 to find the commission\n");
        printf("Enter 11 to find largest element in an array\n");
        printf("Enter 12 to find smallest element of an array\n");
        printf("Enter 13 to find factorial of a given number\n");
        printf("Enter 14 to find GCD of two numbers\n");
        printf("Enter 15 to find alphabets digits and vowels in a string\n");
        printf("Enter 16 to go to main project concepts\n");






        printf("Enter the choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:findTheNum();break;
            case 2:someOfMatrix();break;
            case 3:arrayRoatation();break;
            case 4:swapingNumbers();break;
            case 5: arraySum();break;
            case 6:fibnociSeries();break;
            case 7:studentResult();break;
            case 8:RemovingDuplicateElement();break;
            case 9:atmWorkingSimulation();break;
            case 10:
                {
                    int sales,commission;
                    printf("Enter the sales:\n");
                    scanf("%d",&sales);
                    if(sales < 0)
                    printf("Sales should not be negative\n");
                    else
                    commission = findCommision(sales);
                    printf("Commission is %d for sales : %d\n",commission,sales);

                };break;
             case 11:findLargest();break;
             case 12:findSmallest();break;
             case 13:
                {
                    int num,result;
                    printf("Enter a number to calculate it's factorial:\n");
                    scanf("%d",&num);
                    result=findFactorialfact(num);
                    printf("Factorial of the num(%d) = %d\n",num,result);
                    return 0;
                };break;
             case 14:
                {
                     int no1, no2, rem=0, gcd;
                     printf("Enter two non-zero integer numbers:\n");
                     scanf("%d%d",&no1,&no2);
                     gcd = findGCD(no1,no2);
                     printf("\n GCD of %d and %d is %d", no1,no2,gcd);
                     return 0;
                }
              case 15: countCharacterType();break;
             case 16: mainFunction();break;

             default:printf("Enter the currect choice\n");break;





    }
}

}

