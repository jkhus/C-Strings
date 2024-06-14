

void forLoopdefination()
{
    printf("A for loop is a repetition control structure that allows you to efficiently write\n");
    printf("a loop that needs to execute a specific number of times.\n\n");
}
void forLoopSyntax()
{
    printf("Here is a syntax of for loop\n");
    printf("for(inilisization;condition;updation)\n");
    printf("{\n");
    printf("  statement;\n");
    printf("}\n\n");
}
int printNumbers()
{
    int i;//variable decleration
    printf("Printing 1 to 10 numbers\n");
    for(i=1;i<=10;i++)//using loop
    {
        printf("%d\n",i);
    }

}
int printTables(int limit,int number)
{
    int i;
    printf("Printing the tables\n");
    for(i=1;i<=limit;i++)
    {
        printf("%d*%d=%d\n",number,i,(number*i));
    }

}

// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
int sumOfnaturalNumbers(int num)
{
    int  count, sum = 0;
    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d\n\n", sum);

    return 0;
}
int  findFactorial(int number)
{
    int fact = 1,loopCounter;
    /*for(loopCounter = 1;loopCounter <= number;loopCounter++)
    {
        fact = fact * loopCounter;
    }*/

    for(loopCounter = number;loopCounter >= 1;loopCounter--)
    {
        fact = fact * loopCounter;
    }
    printf("Factorial of :%d:%d\n",number,fact);
    return 0;
}
int reverseTable(int a,int b)
{
    int s=1,limit;
    for(b;b>=s;b--)//decreasing the b value
    {
        printf("%d*%d=%d\n",a,b,a*b);//printing the reverse tables
    }
    return 0;
}
void whileloopDefination()
{
    printf("A while loop in C programming repeatedly executes a target statement as\n");
    printf("long as a given condition is true.\n\n");//defination of while loop
}
void whileloopSyntax()
{
    printf("Here is a syntax of while loop\n");
    //syntax
    printf("syntax\n");
    printf("while (condition)\n");
    printf("{\n");
    printf("   statement;\n");
    printf("}\n");
}
int whileprintNumbers()
{
    int i;
    printf("Printing 1 ti 10 numbers\n");
    i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
}
void printingAlphabets()
{
    char ch = 'a';//inilistilizing the character variable

    printf("Alphabets from a - z are: \n");
    while(ch<='z')//adding condition
    {
        printf("%c\n", ch);
        ch++;//increasing the character value
    }

    return 0;
}
void printingTables(int number ,int limit)
{
    int i;
    printf("Printing the tables\n");
    i=1;
    while(i<=limit)
    {
        printf("%d*%d=%d\n",number,i,(number*i));
        i++;
    }

}
void doWhileloopDefination()
{
    printf("A do...while loop is like a while loop, except the fact that it is guaranteed\n");
    printf(" to execute at least one time.\n");
}
void syntaxOfdowhileLoop()
{
    printf("Do\n");
    printf("{\n");
    printf("    statement;\n");
    printf("}\n");
    printf("while(condition);\n");
}
int numPrintingUsingDowhile()
{
    int num = 1; //Intilazation
    printf("*****Numbers for 1 to 10(do while)*****\n");
    do
    {
        printf("%d\n",num);
        num+=1; //In and Dec
    }
    while(num<=10); //Condituional check
    return 0;
}
