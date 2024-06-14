int arthemeticOperaters(int a,int b)//FD
{
    int result;
    result = a+b;
    printf("Sum is: %d\n",result);
    result = a-b;
    printf("Difference is: %d\n",result);
    result = a*b;
    printf("Product is: %d\n",result);
    result = a/b;
    printf("Quotent is: %d\n",result);
    result = a%b;
    printf("Reaminder is: %d\n\n",result);
     return 0;
}
int relationalOperaters(int a,int b)//FD
{
    printf("****Relational Operaters(1(true)(0(false)****\n");
    printf("A and B are equal=%d\n",(a==b));
    printf("A and B are not equal=%d\n",(a!=b));
    printf("A greater than B=%d\n",(a>b));
    printf("A lesser than B=%d\n",(a<b));
    printf("A greater than or equal to B=%d\n",(a<=b));
    printf("A lesser than or equal to B=%d\n\n",(a<=b));
    return 0;
}
int logicalOperaters(int a,int b)//FD
{
    //telleng to the user 1 is true and 0 is false
    printf("1(true),0(false)\n");
    printf("a && b:%d\n",(a && b));
    printf("a || b:%d\n",(a || b));
    printf("NOT b : %d\n\n",!b);

    return 0;
}
int bitwiseOperaters(int a,int b)
{
    int c=0;
    printf("*****Bitwise operations*****\n");
    c = a & b;
    printf(" '&'- Value of c is %d\n", c );
    c = a | b;
    printf(" '|' - Value of c is %d\n", c );
    c = a ^ b;
    printf(" '^' - Value of c is %d\n", c );
    c = ~a;
    printf(" '~' - Value of c is %d\n", c );
    c = a << 2;
    printf(" '<<' - Value of c is %d\n", c );
    c = a >> 2;
    printf(" '>>' - Value of c is %d\n\n", c );
    return 0;
}
 int assignmentOperations(int a,int b)
{
    printf("*****Assignment operations*****\n");
    a+=10; // Same as a = a + 10;
    printf("After incriment a by 10 value of a:%d\n",a);
    a-=10; // Same as a = a - 10;
    printf("After decriment a by 10 value of a:%d\n",a);
    b*=10; // Same as b = b * 10;
    printf("After multiplying b by 10 value of b:%d\n",b);
    b/=10; // Same as b = b / 10;
    printf("After deviding b by 10 value of b:%d\n\n",b);
    return 0;
}
int ternaryOperaters(int a,int b,int c)
{
    int result=0;
    printf("*****Greatest of Two and Three numbers*****\n");
    result = ((a>b)? a:b);
    printf("Greatest of two numbers(a,b) is :%d\n",result);
    result = ((a>b)?((a>c)?a:c) : ((b>c)?b:c));
    printf("Greatest of three numbers(a,b,c) is :%d\n\n",result);
    return 0;
}
int sizeofOperater()
{
    int a;
    float b;
    char c;
    printf("Enter integear value\n");
    scanf("%d",&a);
    printf("size of %d is :%d\n",a,sizeof(a));
    printf("Enter floating value\n");
    scanf("%f",&b);
    printf("Size of %f is :%d\n",b,sizeof(b));
    printf("Enter any one character\n");
    scanf("%c",&c);
    printf("size of %c is :%d\n",c,sizeof(c));
}

void operatersMainFunction()
{
    printf("C programing language rich built in operaters\n");
    printf("here we write some c operaters\n");
    while(1)
    {
        int choice;
        printf("Enter 1 to  Arthemetic operaters \n");
        printf("Enter 2 to  Relational operaters\n");
        printf("Enter 3 to  Logical operaters\n");
        printf("Enter 4 to  Bitwise operaters\n");
        printf("Enter 5 to  Assignment operaters\n");
        printf("Enter 6 to  Ternary operaters\n");
        printf("Enter 7 to size of Operater\n");
        printf("Enter 8 to go to the main project concepts\n");

        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                    int a=10,b=20; //Variable declaration and initialization
                    printf("*****Arthematic operations*****\n");
                    printf("Enter the values for A and B\n");
                    scanf("%d%d",&a,&b);//reading the values for a and b from users
                    arthemeticOperaters(a, b);//function calling

                };break;
            case 2:
                {
                    int a,b;//Variable declaration and initialization
                    printf("****Relational Operaters****\n");
                    printf("Enter the values for A and B\n");
                    scanf("%d%d",&a,&b);//reading the values for a and b from users
                    printf("Entered values A=%d , B=%d\n",a,b);
                    relationalOperaters(a ,b);//function calling

                };break;
            case 3:
                {
                    int a=1,b=0;//Variable declaration and initialization
                    printf("*****Logical operations*****\n");
                    printf("Enter the values for A and B\n");
                    scanf("%d%d",&a,&b);//reading the values for a and b from users
                    logicalOperaters(a,b);//function calling
                };break;
            case 4:
                {
                    unsigned int a;//variable declearation
                    unsigned int b;//variable declearation
                    printf("Enter the values for A and B\n");
                    scanf("%u%u",&a,&b);//reading the values for a and b from users
                    bitwiseOperaters(a, b);//function calling
                };break;
            case 5:
                {
                    int a,b;
                    printf("Enter the values for A and B\n");
                    scanf("%d%d",&a,&b);
                    assignmentOperations(a,b);
                };break;
            case 6:
                {
                    int a,b,c;
                    printf("Enter the values for A B and C\n");
                    scanf("%d%d%d",&a,&b,&c);
                    ternaryOperaters(a,b,c);
                };break;
            case 7:sizeofOperater();break;
            case 8:mainFunction();break;
             default:printf("please enter the correct choice\n");break;


        }
    }



}




