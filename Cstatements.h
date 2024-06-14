void conditionalStatenentsMF()
{
    while(1)
    {
        int choice;
        printf("Here we call these are the main conditional statements\n");
        printf("Enter 1 to know about the programs on If statement\n");
        printf("Enter 2 to know about the programs on If else statement\n");
        printf("Enter 3 to know about the programs on If else ladder statement\n");
        printf("Enter 4 to know about the programs on switch case\n");
        printf("Enter 5 to go to the main project concept\n");

        printf("Enter the choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            {
                while(1)
                {
                    int choice;
                    printf("Enter 1 to know the defination of if statement\n");
                    printf("EnTER 2 to know the syntax of if statement\n");
                    printf("Enter 3 to know the working of if statement\n");
                    printf("Enter 4 to know the Example program for if statement\n");
                    printf("Enter 5 to go to main conditional statements concepts\n");
                    printf("Enter 6 to go the main project concepts\n");
                    printf("Enter the choice\n");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                        case 1:ifStatementDefination();break;
                        case 2:ifStatementSyntax();break;
                        case 3:workingOfIfstatement();break;
                        case 4:exampleProgrammForIfStatement();break;
                        case 5:conditionalStatenentsMF();break;
                        case 6:mainFunction();break;
                        default:printf("Enter the currect choice\n");break;
                    }
                }
            };break;
        case 2:
            {
                while(1)
                {
                    int choice;
                    printf("Enter 1 to know the defination of else if statement\n");
                    printf("Enter 2 to know the syntax of if else statement\n");
                    printf("Enter 3 to know the working of else if ststement\n");
                    printf("Enter 4 to know the example program of else if statement\n");
                    printf("Enter 5 to go to main conditional statements concepts\n");
                    printf("Enter 6 to go the main project concepts\n");

                    printf("Enter the choice\n");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                        case 1:ifelseStatementDefination();break;
                        case 2:ifElseStatementSyntax();break;
                        case 3:workingOfIfelsestatement();break;
                        case 4:exampleProgrammForIfelseStatement();break;
                        case 5:conditionalStatenentsMF();break;
                        case 6:mainFunction();break;
                        default:printf("Enter the currect choice\n");break;
                    }
                }

            };break;
        case 3:
            {
                while(1)
                {
                    int choice;
                    printf("Enter 1 to know the defination of else if ladder statement\n");
                    printf("Enter 2 to know the syntax of else if ladder statement\n");
                    printf("Enter 3 to know the working Of If else If ladder\n");
                    printf("Enter 4 to know the Example Program For if else If ladder\n");
                    printf("Enter 5 to go to main conditional statement concepts\n");
                    printf("Enter 6 to go the main project concepts\n");


                    printf("Enter the choice\n");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                        case 1:ifelseIfLadderDefination();break;
                        case 2:ifelseIfLadderDefination();break;
                        case 3:workingOfIfelseIfladder();break;
                        case 4:exampleProgrammForifelseIfladder();break;
                        case 5:conditionalStatenentsMF();break;
                        case 6:mainFunction();break;
                        default:printf("Enter the currect choice\n");break;
                    }

                }

            };break;
        case 4:
            {
                while(1)
                {
                    int choice;
                    printf("Enter 1 to know the defination of switch statement\n");
                    printf("Enter 2 to know the syntax of switch statement\n");
                    printf("Enter 3 to know the working of switch statement\n");
                    printf("Enter 4 to know the program on switch statement\n");
                    printf("Enter 5 to go to main conditional statement concepts\n");
                    printf("Enter 6 to go the main project concepts\n");

                    printf("Enter the choice\n");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                        case 1:switchStatementDefination();break;
                        case 2:switchStatementSyntax();break;
                        case 3:workingOfSwitchStatement();break;
                        case 4:exampleProgrammForSwitchStatement();break;
                        case 5:conditionalStatenentsMF();break;
                        case 6:mainFunction();break;
                        default:printf("Enter the currect choice\n");break;
                    }

                }
            };break;
        case 5: mainFunction();break;
         default:printf("please enter the correct choice\n");break;



        }
    }
}

