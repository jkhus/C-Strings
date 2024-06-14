

void findTheNum()
{
    int a[20],element,i,limit,z=0;
    printf("Enter the array  limit\n");
    scanf("%d",&limit);
    printf("enter %d elements\n",limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&element);
    for(i=0;i<limit;i++)
    {
        if(a[i]==element)
        {
            printf("searched %d element foundin %dth location\n",element,i+1);
             z++;
        }

    }
    if(z==0)
        printf("searched  element %d is not found in any location",element);


}
void  someOfMatrix()
{
    int first[5][5],second[5][5],result[5][5],row1,col1,row2,col2,rowCounter,colCounter,k;
    printf("Enter the first matrix row and column count\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter first matrix elements\n");
    for(rowCounter=0;rowCounter<row1;rowCounter++)
    {
        for(colCounter = 0;colCounter<col1;colCounter++)
        {
            scanf("%d",&first[rowCounter][colCounter]);
        }
    }

    printf("Enter the second matrix row and column count\n");
    scanf("%d%d",&row2,&col2);
    printf("Enter second matrix elements\n");
    for(rowCounter=0;rowCounter<row2;rowCounter++)
    {
        for(colCounter = 0;colCounter<col2;colCounter++)
        {
            scanf("%d",&second[rowCounter][colCounter]);
        }
    }

    if(row1 == col2)
    {
   		for (rowCounter = 0; rowCounter < row1; rowCounter++)
   		{
    			for (colCounter = 0; colCounter < col2; colCounter++)
    			{
         				result[rowCounter][colCounter] = 0;
      			}
   		}


        for (rowCounter = 0; rowCounter < row1; rowCounter++)
        {
      		for (colCounter = 0; colCounter < col2; colCounter++)
      		{
                for (int k = 0; k < col1; k++)
                {
            			result[rowCounter][colCounter] += first[rowCounter][k] * second[k][colCounter];
                }

            }
        }

    }
    else
    {
        printf("Rows of first matrix is not equal to columns of second matrix,enter correct order of matrix\n");
    }


    printf("Resultant matrix\n");
    for(rowCounter=0;rowCounter<row1;rowCounter++)
    {
        for(colCounter = 0;colCounter<col2;colCounter++)
        {
            printf("%d\t",result[rowCounter][colCounter]);
        }
        printf("\n");
    }

    return 0;
}
void arrayRoatation()
{
    int a[10],res[10],cutoff,i,j,limit;
    printf("Enter the array limit\n");
    scanf("%d",&limit);
    printf("Enter %d array elements\n",limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0] > 0 & a[0] < limit)
    {
        cutoff = limit - (a[0]);
        j = a[0];
        for(i=0;i<cutoff;i++)
        {
            res[i] = a[j];
            j++;
        }
        for(j=0;j<(limit - cutoff);)
        {
            res[i] = a[j];
            j++;
            i++;
        }
        printf("After rotation\n");
        for(i=0;i<limit;i++)
        {
            printf("%d\n",res[i]);
        }
    }
    else
    {
        printf("Rotation is not possible\n");
    }

}

void swapingNumbers()
{
    int a,b;
    printf("Enter the two values to swap\n");
    scanf("%d%d",&a,&b);
    swap(a,b);

    return 0;
}
void swap(int m,int n)
{
    int temp;
    printf("Before swapping\n");
    printf("m:%d \t n:%d\n",m,n);
    temp = m;
    m = n;
    n = temp;
    printf("After swapping\n");
    printf("m:%d \t n:%d\n",m,n);

}

void arraySum()
{

    int a[10],i,sumOfArrayElements=0;
    for(i=0;i<10;i++)
    {
        a[i] = i+1;
    }
    for(i=0;i<10;i++)
    {

        sumOfArrayElements = sumOfArrayElements + a[i];

    }
     printf("Sum of array elements:%d\n",sumOfArrayElements);
}
int fibnociSeries()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    for (i = 1; i <= n; ++i)
    {
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
void studentResult()
{

     int marks[5],sumOfMarks=0,i;
     float average;
     char grade;
     printf("Enter marks of five subjects\n");
     for(i=0;i<5;i++)
     {
        scanf("%d",&marks[i]);
        sumOfMarks += marks[i];
     }
     average = sumOfMarks / 5;
     if(average > 90)
        grade = 'A';
     else if (average > 80)
        grade = 'B';
     else if (average > 70)
        grade = 'C';
     else if (average > 60)
        grade = 'D';
     else if (average > 50 || average < 35)
        grade = 'E';
     else if (average < 35)
        grade = 'F';
     else
        grade = 'Z';
        printf("Total Marks:%d\nAverage:%f\n",sumOfMarks,average);
        printf("Result:");
         switch(grade)
         {
            case 'A':printf("FCD!\n" );break;
            case 'B':
            case 'C':printf("First class\n" );break;
            case 'D':printf("Second class\n" );break;
            case 'E':printf("Just Pass\n" );break;
            case 'F':printf("Fail,Better try again\n" );break;
            default :printf("Invalid grade\n" );
         }
     return 0;
}
int RemovingDuplicateElement()
{
    int a[50],i,j,k,number;
    printf("Enter size of the array\n");
    scanf("%d",&number);
    printf("Enter Elements of the array:\n");
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
     }
    printf("Entered element are: \n");
     for(i=0;i<number;i++)
     {
        printf("%d\n",a[i]);
    }
     for(i=0;i<number;i++)
     {
        for(j = i+1; j < number; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k <number; k++)
                {
                    a[k] = a[k+1];
                }
                j--;
                number--;
            }
        }
     }
     printf("\nAfter deleting the duplicate element the Array is:\n");
     for(i=0;i<number;i++)
     {
        printf("%d\n",a[i]);
     }
}

void atmWorkingSimulation()
{

       printf("if you dont know the card no and passward use this\n");
       printf("ATM no 12345\n");
       printf("ATM passward 54321\n");
    int balance  =10000;
    int atmCardNo = 12345;
    int pwd = 54321;
    int atmNo,ippwd,amount;
    printf("*********Welcome to CANARA BANK ATM Service*********\n");
    printf("Please insert your ATM card and enter ATM Card no and pwd\n");
    scanf("%d%d",&atmNo,&ippwd);
    if(atmNo == atmCardNo & ippwd == pwd)
    {
        printf("Enter the amount to withdraw\n");
        scanf("%d",&amount);
        if(amount > balance)
        {
            printf("Insufficient balance\n");
        }
        else
        {
            balance = balance - amount;
            printf("Your transaction is successful, collect amount: %d",amount);
        }
    }
    else
    {
        printf("Incorrect PIN/PWD\n");
    }

}
int findCommision(int sales)
{
    int commission;
    if(sales > 1000 & sales < 5000)
        commission = (sales/100)*5;
    else if (sales > 5000 & sales < 10000)
        commission = (sales/100)*10;
    else if (sales > 10000 & sales < 20000)
        commission = (sales/100)*15;
    else if (sales > 20000)
        commission = (sales/100)*20;
    else
        commission = (sales/100)*1;
    return commission;
}

void findLargest()
{
    int a[10],limit,largest,i;
    printf("Enter the no array elements you want:");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);

    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = a[0];
    for(i=1;i<limit;i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("Largest of array is %d\n",largest);
}
void findSmallest()
{
    int a[10],limit,smallest,i;
    printf("Enter the no array elements you want:");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);

    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest = a[0];
    for(i=1;i<limit;i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("Smallest of array is %d\n",smallest);
}
void  findFactorialfact(int num)
{
     int i,f=1;
     for(i=1;i<=num;i++)
     {
        f=f*i;
     }

}
int findGCD(int no1,int no2)
{
    int rem=0;
    rem=no1%no2;
    while(rem != 0)
    {
        no1=no2;
        no2=rem;
        rem=no1%no2;
    }
    return no2;
}


void countCharacterType()
{
     int vowels = 0, consonant = 0, specialChar = 0,digit = 0,alphabets =0,space = 0;
     char ch;
     printf("Enter the string\n");
     while((ch = getchar())!= '\n')
     {
        if ( (ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z') )
        {
            alphabets++;
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
            else
            consonant++;
        }
        else if (ch >= '0' && ch <= '9')
        digit++;
        else if ((int)ch == 32)
        space++;
        else
        specialChar++;
     }
     printf("Alphabets: %d\n",alphabets);
     printf("Vowels: %d\n",vowels);
     printf("Consonant: %d\n",consonant);
     printf("Digit: %d\n",digit);
     printf("Special Character: %d\n", specialChar);
     printf("Spaces: %d\n", space);
}
