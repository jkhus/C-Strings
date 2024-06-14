int stringsMainFunction()

{
    int choice;
    while (1)
    {
        printf("*****************************************************\n");
        printf("Enter 1 to know the basic concepts of strings\n");
        printf("Enter 2 to know the inbilt functions of a string\n");
        printf("Enter 3 to know the some basic program of a string\n");
        printf("Enter 4 to know the interview programs on string\n");
        printf("Enter 5 to go to the main project concepts\n");
        printf("*****************************************************\n");
        printf("Enter your choice:\n");

            scanf("%d",&choice);
            switch(choice)
                {
                        case 1:
                        while(1)
                        {
                            int number;
                            printf("----------------------------------------------------------\n");
                            printf("Enter 1 to know the defination of string\n");
                            printf("Enter 2 to know the syntax of a string\n");
                            printf("Enter 3 to print simple string\n");
                            printf("Enter 4 to read string through scanf\n");
                            printf("Enter 5 to read string through getchar\n");
                            printf("Enter 6 to read string through gets\n");
                            printf("Enter 7 to print a string through printf()\n");
                            printf("Enter 8 to print a string using putchar()\n");
                            printf("Enter 9 to print a string using puts()\n");
                            printf("Enter 10 to go strings main \n");
                            printf("Enter 11 to go to the main project concepts\n");
                            printf("----------------------------------------------------------\n");

                            printf("Enter the choice\n");
                            scanf("%d",&number);

                            switch(number)
                            {
                                case 1:stringDefination();break;
                                case 2:stringSyntax();break;
                                case 3:printStr1();break;
                                case 4:printStr2();break;
                                case 5:printStr3();break;
                                case 6:printStr4();break;
                                case 7:strPrintf();break;
                                case 8:strPutchar();break;
                                case 9:strPuts();break;
                                case 10:stringsMainFunction();break;
                                case 11:mainFunction();break;
                                default:printf("please enter the correct choice\n");break;

                            }


                        };break;
                        case 2:
                            {
                                while(1)
                                {
                                    int number;
                                    printf("#########################################\n");
                                    printf("String has 7 built in functions\n");
                                    printf("Here is all 7 functions\n");
                                    printf("Enter 1 to make String concatitation\n");
                                    printf("Enter 2 to make string copy\n");
                                    printf("Enter 3 to Find the string length\n");
                                    printf("Enter 4 to make a string Reverse\n");
                                    printf("Enter 5 to make string comparision\n");
                                    printf("Enter 6 to make string Upper\n");
                                    printf("Enter 7 to make string loweyer\n");
                                    printf("Enter 8 to go to  strings main \n");
                                    printf("Enter 9 to go  the main project concepts\n");
                                    printf("#########################################\n");
                                    printf("Enter the number:\n");
                                    scanf("%d",&number);

                                    switch(number)
                                {
                                        case 1:
                                            {
                                                char str1[20];//decelearation of character array
                                                char str2[20];//decelearation of character array
                                                printf("Enter the 1 string\n");
                                                //reading the string from user
                                                scanf("%s",str1);
                                                printf("Enter the 2nd string\n");
                                                scanf("%s",str2);
                                                //passing str1 and str2 to the function
                                                stringConcatination(str1,str2);

                                            };break;
                                        case 2:
                                            {
                                                char *source;//pointer character variable
                                                //dynamically memory alocation to *source using malloc()function
                                                source =(char*)malloc(sizeof(char));
                                                printf("Enter the source string:\n");
                                                scanf("%s",source);
                                                stringCopy(source);
                                                free(source);//fleshouting the source memory
                                            };break;
                                        case 3:
                                            {
                                                char str[20];
                                                printf("Enter the string\n");
                                                scanf("%s",str);
                                                stringLength(str);
                                            };break;
                                        case 4:
                                            {
                                                char str1[10];
                                                printf("Enter the string you want to reverse\n");
                                                scanf("%s",str1);
                                                stringReverse(str1);
                                            };break;
                                            case 5:
                                            {
                                                char str1[10],str2[10];
                                                printf("Enter the first string:\n");
                                                scanf("%s",str1);
                                                printf("Enter the second string:\n");
                                                scanf("%s",str2);
                                                stringComparision(str1,str2);
                                            };break;
                                        case 6:
                                            {
                                                char s[100];
                                                printf("Enter a string which contain small letters:\n");
                                                scanf("%s",s);
                                                strUpper(s);
                                            };break;
                                        case 7:
                                            {
                                                char str[25];
                                                printf("Enter the string which contain big letters:\n");
                                                scanf("%s",str);
                                                strLoweyer(str);
                                            };break;
                                       case 8:stringsMainFunction();break;
                                       case 9:mainFunction();break;
                                       default:printf("please enter the currect choice\n");break;

                                    }
                                }
                            }break;

                        case 3:
                            while(1)
                            {
                                int number1;
                                printf("----------------------------------------------------------\n");
                                printf("Enter 1 to, Find the alphabetical number of a character in a string\n");
                                printf("Enter 2 to, 2 binary strings length equal or not \n");
                                printf("Enter 3 finding sum of digits which contains digits in given string \n");
                                printf("Enter 4 to adjust the names in an alphebetical order\n");
                                printf("Enter 5 to finding the vowels in a string\n");
                                printf("Enter 6 to find entered 2 strings are equql are not?\n");
                                printf("Enter 7 to only digit in a string\n");
                                printf("Enter 8 to find higiest occurence character in a string\n");
                                printf("Enter 9 to go to  strings main\n");
                                printf("Enter 10 to go the main project concepts\n");
                                printf("----------------------------------------------------------\n");

                                printf("Enter the choice\n");
                                scanf("%d",&number1);

                                switch(number1)
                                {
                                    case 1:findingSpecialcharacter();break;
                                    case 2:
                                        {
                                            char str1[10],str2[10];
                                            printf("Enter first binary string\n");
                                            getchar();
                                            gets(str1);
                                            printf("Enter second binary string\n");
                                            getchar();
                                            gets(str2);
                                            binarystring(str1,str2);
                                        };break;
                                    case 3:
                                        {
                                            char str[20];
                                            printf("Enter the string, which contains digits:\n");
                                            getchar();
                                            gets(str);
                                            stringSumofdigits(str);

                                        };break;
                                    case 4:sortingNames();break;
                                    case 5:findVowels();break;
                                    case 6:
                                        {
                                            char str1[20];  // declaration of char array
                                            char str2[20];  // declaration of char array
                                            printf("Enter the first string : ");
                                            scanf("%s",str1);
                                            printf("Enter the second string : ");
                                            scanf("%s",str2);
                                            strCompare(str1,str2);
                                        }
                                    case 7:strDigit();break;
                                    case 8:
                                        {
                                            char s[100];
                                            printf("Enter  the string : ");
                                            scanf("%s",s);
                                            printmax(s);
                                        };break;
                                    case 9:stringsMainFunction();break;
                                    case 10:mainFunction();break;
                                    default:printf("Please enter currect choice\n");break;
                                }


                            };break;
                            case 4:
                                while(1)
                                {
                                    int choice;
                                    printf("Enter 1 to check the entered string palindrome or not\n");
                                    printf("Enter 2 Find all permutations of a string\n");
                                    printf("Enter 3 to count the occurence of a givin string\n");
                                    printf("Enter 4 make a string reverse using resersive function\n");
                                    printf("Enter 5 to go to  strings main\n");
                                    printf("Enter 6 to go the main project concepts\n");
                                    printf("Enter the choice\n");
                                    scanf("%d",&choice);
                                    switch(choice)
                                    {
                                        case 1:
                                            {
                                                char str[20];
                                                printf("Enter a string to check it is palindrome or not:\n");
                                                scanf("%s", str);
                                                strPalindrome(str);
                                            };break;
                                        case 2:
                                            {
                                                char str[20];
                                                printf("Enter the string(Please Enter only 2 to 3 character,because the output might be very lengthy)\n");
                                                scanf("%s",str);
                                                int n =strlen(str);
                                                printf("All the permutations of the string are: \n");
                                                generatePermutation(str,0,n);
                                            };break;
                                         case 3:
                                            {
                                                int size=100;
                                                char string[size];
                                                printf("Enter the string:\n");
                                                scanf("%s",string);
                                                strFrequency(string);

                                            };break;
                                         case 4:reverseSentence();break;


                                         case 5:stringsMainFunction();break;
                                         case 6:mainFunction();break;
                                         default:printf("please enter the correct choice\n");break;

                                    }


                                };break;
                                case 5:mainFunction();break;
                            default:printf("please enter the correct choice\n");break;
                        }

                }

            }



