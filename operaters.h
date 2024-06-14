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
