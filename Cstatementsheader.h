


void ifStatementDefination()
{
    printf("An if statement consists of a boolean expression followed by one or more statements\n");
}
void ifStatementSyntax()
{
    printf("Here is a syntax of if statement\n");
    printf("if(condition)\n");
    printf("{\n");
    printf("   Excution statement when if condition is true;\n");
    printf("}\n");
}
void workingOfIfstatement()
{
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Major,eligeble to vote\n");
    }
}
void exampleProgrammForIfStatement()
{
    int x,y;
    printf("Enter the values for x,y\n");
    scanf("%d%d",&x,&y);
    if (x<y)
    {
        printf("Variable %d is less than %d\n",x,y);
    }
    else
    {
        printf("variable %d is less than %d\n",y,x);
    }
}
void ifelseStatementDefination()
{
    printf("An if statement can be followed by an optional else statement,which executes when the boolean expression is false\n");
}
void ifElseStatementSyntax()
{
    printf("Here is a syntax of ie else statement\n");
    printf("if(condition)\n");
    printf("{\n");
    printf("   Excution statement when if condition is true;\n");
    printf("}\n");
    printf("else\n");
    printf("{\n");
    printf("   Excution statement;\n");
    printf("}\n");
}
void workingOfIfelsestatement()
{
    int a;
    printf("Enter the number to find the number even or odd\n");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("The given number %d is odd\n",a);
    }
    else
    {
        printf("The given number %d is even\n",a);
    }
}
void exampleProgrammForIfelseStatement()
{
    int num1,num2;
    printf("Enter the values for num1 and num2\n");
    scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("%d is smaller than %d\n",num2,num1);
	}
	else
    {
        printf("%d is greater then %d\n",num1,num2);
    }

}
void ifelseIfLadderDefination()
{
    printf("When we have multiple options,availble or we need to take multiple decisions\n");
}
void ifElseLadderSyntax()
{
    printf("Ehre is syntax of else if ladder\n");
    printf("if(condition)\n");
    printf("{\n");
    printf("   Excution statement when if condition is true;\n");
    printf("}\n");
    printf("else if\n");
    printf("{\n");
    printf("   Excution statement when else if condition is true;\n");
    printf("}\n");
    printf("else if\n");
    printf("{\n");
    printf("   Excution statement when else if condition is true;\n");
    printf("}\n");
    printf("else \n");
    printf("{\n");
    printf("   Excution statement;\n");
    printf("}\n");

}
void workingOfIfelseIfladder()
{
    int a,b,c;
    printf("Enter the number of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&(a>c))
    {
        printf("%d is greatest\n",a);
    }
    else if(b>c)
    {
        printf("%d is greatest\n",b);
    }
    else
    {
        printf("%d is greatest\n",c);
    }
}
void exampleProgrammForifelseIfladder()
{
   int marks;
   printf("Enter the marks of a student:\n");
   scanf("%d",&marks);
   if(marks <=100 & marks >= 90)
      printf("Grade=A");
   else if(marks < 90 & marks>= 80)
      printf("Grade=B");
   else if(marks < 80 & marks >= 70)
      printf("Grade=C");
   else if(marks < 70 & marks >= 60)
      printf("Grade=D");
   else if(marks < 60 & marks >= 50)
      printf("Grade=E");
   else if(marks <50 & marks >=35)
      printf("pass");
   else if(marks <35)
      printf("Fail");
   else
      printf("Enter the correct marks between 0 to 100\n");
}
void switchStatementDefination()
{
   printf("switch statement in c tests the value of a variable and compares it with multiple cases\n");
}
void workingOfSwitchStatement()
{
    int choice;
    printf("Enter the number to find the day\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Monday\n");break;
        case 2:printf("Tuesday\n");break;
        case 3:printf("Wednesday\n");break;
        case 4:printf("Thursday\n");break;
        case 5:printf("Friday\n");break;
        case 6:printf("Saturday\n");break;
        case 7:printf("Sunday\n");break;
        default:printf("invalid choice\n");
    }

}
void exampleProgrammForSwitchStatement()
{
   int choice,n1,n2;
   printf("Enter two  numbers\n");
   scanf("%d%d",&n1,&n2);
   printf("1.SUM\n");
   printf("2.SUB\n");
   printf("3.PRODUCT\n");
   printf("4.QUOTIENT\n");
   printf("5.REMAINDER\n");
   printf("Enter the choice\n");
   scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("%d + %d = %d\n",n1, n2, n1+n2);break;
        case 2:printf("%d - %d= %d\n",n1, n2, n1-n2);break;
        case 3:printf("%d * %d= %d\n",n1, n2, n1*n2);break;
        case 4:printf("%d / %d = %d\n",n1, n2, n1/n2);break;
        case 5:printf("%d % %d =%d\n",n1,n2,n1%n2);break;
        default:printf("Error! operator is not correct");
    }

}
void switchStatementSyntax()
{
    printf("Here is syntax of switch case\n");
    printf("switch(experession)\n");
    printf("{\n");
    printf("   case constant experession:\n");
    printf("   statements;break;\n\n");
    printf("   case constant experession:\n");
    printf("   statements;break;\n\n");
    printf("   case constant experession:\n");
    printf("   statements;break;\n\n");
    printf("   default:\n");
    printf("   statements;");
    printf("}\n");

}
