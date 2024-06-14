void loopsMainFunction()
{
    while(1)
    {
        int choice;
        printf("Enter 1 to know about For loop\n");
        printf("Enter 2 to know about While loop\n");
        printf("Enter 3 to know about Do while loop\n");
        printf("Enter 4 to go to the main project concept\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
                    case 1:
                    while(1)
                    {
                        int number;
                        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                        printf("Enter 1 to know the defination of for loop\n");
                        printf("Enter 2 to know the syntax of for loop\n");
                        printf("Enter 3 to print 1 to 10 numbers using for loop\n");
                        printf("Enter 4 to print tables.\n");
                        printf("Enter 5 to calculate the sum of first n natural numbers\n");
                        printf("Enter 6 find factorial of a given number using for loop\n");
                        printf("Enter 7 print reverse table\n");
                        printf("Enter 8 to go to loops main function\n");
                        printf("Enter 9 to go to main project concepts\n");
                        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");



                        printf("Enter the choice:");
                        scanf("%d",&number);
                        switch(number)
                        {
                        case 1:forLoopdefination();break;//Function calling
                        case 2:forLoopSyntax();break;//Function calling
                        case 3:printNumbers();break;//Function calling
                        case 4:
                            {
                                int limit,number;
                                printf("Enter the table number\n");
                                scanf("%d",&number);
                                printf("Enter the table limit\n");
                                scanf("%d",&limit);
                                printTables(limit,number);//Passing number and limit to function
                            };break;
                        case 5:
                            {
                                int num;
                                printf("Enter the positive natural number limit\n");
                                scanf("%d",&num);
                                sumOfnaturalNumbers(num);//passing num to the function

                            };break;
                        case 6:
                            {
                                int number;
                                printf("Enter the number\n");
                                scanf("%d",&number);
                                findFactorial(number);//passing number to the function
                            };break;
                        case 7:
                            {
                                int b,a;//variable declearation
                                printf("enter the reverse tables:\n");
                                scanf("%d",&a);//reading from user
                                printf("enter the limit:\n");
                                scanf("%d",&b);
                                reverseTable(a,b);//passing a and b to the function
                            };break;
                        case 8:loopsMainFunction();break;
                        case 9: mainFunction();break;
                        }
                    };break;

            case 2:
                {
                    while(1)
                    {
                        int choice;
                        printf("Enter 1 to know the defination of while loop?\n");
                        printf("Enter 2 to know the syntax of while loop\n");
                        printf("Enter 3 to print numbers using while loop\n");
                        printf("Enter 4 to print alphebets using while loop\n");
                        printf("Enter 5 to print tables using while loop\n");
                        printf("Enter 6 to go loops main function\n");
                        printf("Enter 7 to go to project main concepts\n");

                        printf("Enter the choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                            case 1:whileloopDefination();break;//Function calling
                            case 2:whileloopSyntax();break;//Function calling
                            case 3:whileprintNumbers();break;//Function calling
                            case 4:printingAlphabets();break;//Function calling
                            case 5:
                                {
                                    int number,limit;
                                    printf("Enter the table number\n");
                                    scanf("%d",&number);
                                    printf("Enter the table limit\n");
                                    scanf("%d",&limit);
                                    printingTables(number,limit);//Passing number and limit to function
                                };break;
                            case 6:loopsMainFunction();break;//function calling
                            case 7: mainFunction();break;//function calling

                        }

                    }
                };break;
            case 3:
                {
                    while(1)
                    {
                        int choice;
                        printf("Enter 1 to know the defination of do while loop\n");
                        printf("Enter 2 to know the syntax of do while loop\n");
                        printf("Enter 3 to print the 1 to 10 numbers using do while loop\n");
                        printf("Enter 4 to loops main function\n");
                        printf("Enter 5 to go to project main concept.\n");



                        printf("Enter the choice:\n");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                            case 1:doWhileloopDefination();break;//Function calling
                            case 2:syntaxOfdowhileLoop();break;//Function calling
                            case 3:numPrintingUsingDowhile();break;//Function calling
                            case 4:loopsMainFunction();break;//Function calling
                            case 5:mainFunction();break;//Function calling
                            default:printf("please enter the correct choice\n");break;

                        }
                    }

                };break;





        }

    }

}

