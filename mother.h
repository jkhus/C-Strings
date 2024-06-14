void stringDefination()//FD
{
    printf("Strings are nothing but sequence of character terminated by null character or backlash zero\n");
}
void stringSyntax()//FD
{
    printf("Syntax of string:\n");
    printf("char str_name[size];\n");
}
void printStr1()//FD
{
    char str1[20],str2[20];
    //copying the strings.
    strcpy(str1,"Hello how are you ");
    strcpy(str2,"we are expecting you are fine");
    //printing the strings
    puts(str1);
    puts(str2);
    return 0;
}
void printStr2()//FD
{
    char c[20];
    printf("***String read through scanf***\n");
    printf("Enter the string\n");
    //reading the string from user
    scanf("%s",c);
    //printing the user entered string
    printf("Entered string %s\n",c);

}
void printStr3()//FD
{
    char name[20];
    char ch;
    int i=0;
    printf("***String read through getchar()***\n");
    printf("Enter the name \n");
    //reading the string from user through getchar() using while loop
    printf("sir this getchar is not reading any character from user because we putted this statement\n");
    while ((ch=getchar())!='\n')
    {
        name[i]=ch;
        i++;
    }
    //
    name[i]='\0';
    //printing the string
    printf("Entered name is :%s\n",name);
}
void printStr4()
{
    char c[20];
    printf("***String reading through gets()***\n");
    printf("Enter the string\n");
    printf("sir this getchar is not reading any character from user because we putted this statement\n");
    //reading string through gets
    gets(c);
    //printing the string
    printf("Entered string :%s\n",c);
}
void strPrintf()//FD
{
    char str1[15];
    printf("Printing string using printf()\n");
    //copying the string using strcpy built in function
    strcpy(str1,"WE ARE ALLL HUMANS\n");
    //printing the string using printf
    printf("%s",str1);

}
void strPutchar()//FD
{
    char ch;
    printf("Writing A to Z character using putchar()\n");
    //printing the string through putchar using for loop
    for(ch='A';ch<='Z';ch++)
    {
        putchar(ch);
    }
    //for new line
    printf("\n");
}
void strPuts()//FD
{
    char str[20];
    printf("printing a string using puts\n");
    //copying the string to str using strcpy built in function
    strcpy(str,"SOMETHING");
    //printing the string using puts
    puts(str);
    printf("\n");
}
void stringConcatination(char str1[],char str2[])//FD
{
    int str2Index,copyIndex;//decelearation of integear variable
    //copying string(str1) to copy index
    copyIndex = strlen(str1);
    //str2index inistilize to 0
    str2Index = 0;
    //concating the strings
    while(str2[str2Index] != '\0')
    {
        str1[copyIndex] = str2[str2Index];
        copyIndex++;
        str2Index++;

    }
    str1[copyIndex] = '\0';
    printf("Concatinated  string:%s\n\n",str1);//printing the concatinated string
}
void stringCopy(char source[])//FD
{
    char destination[10];//declearing the char string
    int strIndex;//declearing the integear variable
    strIndex = 0;
    while(source[strIndex] != '\0')
    {
        destination[strIndex] = source[strIndex];
        strIndex++;
    }
    destination[strIndex] = '\0';
    printf("-------------------------------\n");
    printf("Entered string:%s\n",source);
    printf("Copied string:%s\n",destination);
    printf("-------------------------------\n\n");
}
void stringLength(char str[])
{
    int stringLength=0,strIndex;
	strIndex=0;
	while(str[strIndex] != '\0')
	{
		stringLength ++;
		strIndex++;
	}

	printf("Length of string is : %d\n\n", stringLength);
}
void stringReverse(char str1[])
{
    char str2[20];
    int str1Index,str2Index = 0;
    for(str1Index = (strlen(str1) - 1); str1Index >= 0; str1Index--)
    {
        str2[str2Index] = str1[str1Index];
        str2Index++;
    }
    str2[str2Index] = '\0';

    printf("Entered string %s\n",str1);
    printf("Reversed string %s\n\n",str2);

}
void stringComparision(char str1[],char str2[])
{
    int compareIndex=0,stringAreEqual = 1;
    if(strlen(str1) == strlen(str2))
    {
        while(str1[compareIndex] != '\0')
        {
            if(str1[compareIndex]== str2[compareIndex])
            {
                stringAreEqual = 1;
            }
            else
            {
                stringAreEqual = 0;
                break;
            }
            compareIndex++;
        }
        if(stringAreEqual)
        {
            printf("===============================\n");
            printf("Given strings are equal\n");
            printf("===============================\n");
        }
        else
        {
            printf("===============================\n");
            printf("Given strings are not equal\n");
            printf("===============================\n");
        }


    }
    else
    {
        printf("===============================\n");
        printf("Given strings are not equal\n");
        printf("===============================\n");
    }
}
void strUpper(char s[])
{
    int i;
    for (i = 0; s[i]!='\0'; i++)
    {
      if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] -32;
        }
    }
   printf("====================================\n");
   printf("String in Upper Case = %s\n", s);
   printf("====================================\n");
   return 0;
}
void strLoweyer(char str[])
{
   int i;
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("====================================\n");
   printf("Lower Case String is: %s\n",str);
   printf("====================================\n");
   return 0;
}


void findVowels()
{
    char s[11];
    printf("Enter the string\n");
    scanf("%s",s);
    int i = 0;
    int countt = 0;
    while(i<11)
    {
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            countt ++;
        }
        i++;
    }
    printf("The number of vowels %d\n",countt);
}

void findingSpecialcharacter()
{
    char alphabets[52],str1[20],str2[20],cArray[2];
    int index,i=0,reaminder,j=0;
    char c;

    printf("Enter the string with special characters\n");
    scanf("%s",str1);
    for(index = 0;index <26;index++)
    {
        alphabets[index] = 97 + index;
    }
    alphabets[index] = '\0';

    while(str1[i]!= '\0')
    {
        if((str1[i] >= 'A' & str1[i] <= 'Z') | (str1[i] >= 'a' & str1[i] <= 'z')  )
        {
             c  = tolower(str1[i]);
             for(index = 0;index<26;index++)
             {
                 if(alphabets[index] == c) break;
             }
             if(index >= 9)
             {
                index ++;
                reaminder = index % 10;
                cArray[0] = reaminder + '0';
                index = index / 10;
                cArray[1] = index + '0';
                str2[j] = cArray[1];
                j++;
                str2[j] = cArray[0];

             }
             else
             {
                 str2[j] = (index+1) + '0';
             }

        }
        else
        {
            str2[j] = str1[i];
        }
        i++;
        j++;
    }
    str2[j] = '\0';

    puts(str2);



}
void binarystring(char str1[],char str2[])
{
    char str3[20];
    int loopCounter =0,firstInt = 0,secondInt = 0;
    if(strlen(str1) == strlen(str2))
    {
        while(str1[loopCounter] != '\0')
        {
            firstInt = str1[loopCounter] - '0';
            secondInt = str2[loopCounter] - '0';
            if(firstInt == 1 & secondInt == 1)
            {
                str3[loopCounter] = '1';
            }
            else
            {
                str3[loopCounter] = '0';
            }
            loopCounter++;

        }
        str3[loopCounter] = '\0';
        printf("Output\n");
        puts(str1);
        puts(str2);
        printf("_________\n");
        puts(str3);
    }
    else
    {
        printf("Enter binary string with equal length :-)\n");
    }


}
void stringSumofdigits( char str[])
{
    int loopCounter = 0,sumOfDigits=0,x;
    while(str[loopCounter] != '\0')
    {
        if(str[loopCounter] > '0' & str[loopCounter] < '9')
        {
            x = str[loopCounter] - '0';
            sumOfDigits = sumOfDigits + x;
        }
        loopCounter ++;
    }
    printf(".........................\n");
    printf("Sum of only digits:%d\n",sumOfDigits);
    printf(".........................\n");
    return 0;
}

void strCompare(char str1,char str2)
{
    int value; // declaration of integer variable
   // comparing both the strings using strcmp() function
   value=strcmp(str1,str2);
   if(value==0)
   printf("The entered 2 strings are same\n");
   else
   printf("The entered 2 strings are not same\n");
   return 0;
}
void strDigit()
{
    char str[20];
    int loopCounter = 0,sumOfDigits=0,x;
    printf("Enter the string, which contains digits\n");
    scanf("%s",str);
    while(str[loopCounter] != '\0')
    {
        if(str[loopCounter] > '0' & str[loopCounter] < '9')
        {
            x = str[loopCounter] - '0';
            sumOfDigits = sumOfDigits + x;
        }
        loopCounter ++;
    }
    printf("Result:%d\n",(sumOfDigits/loopCounter));
    return 0;
}
void strPalindrome(char str[])
{
    int i, len, temp=0;
    int flag = 0;
    len = strlen(str);
    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            temp = 1;
            break;
        }
    }

    if (temp==0)
    {
        printf("___________________________________\n");
        printf("The entered string is palindrome string\n");
        printf("___________________________________\n");
    }
    else
    {
        printf("____________________________\n");
        printf(" Entered String is not a palindrome string\n");
        printf("____________________________\n");
    }
    return 0;
}
void generatePermutation(char *str,const int start, int end)
{
  char temp;
  int i,j;
  for(i = start; i < end-1; ++i){
  for(j = i+1; j < end; ++j)
  {
   //Swapping the string by fixing a character
    temp = str[i];
  str[i] = str[j];
    str[j] = temp;
    //Recursively calling function generatePermutation() for rest of the characters
  generatePermutation(str , i+1 ,end);
    //Backtracking and swapping the characters again
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  }
  //Print the permutations
  printf("%s\n",str);
}
void strFrequency(char string[])
{
    int chars=255;
    int frequency[chars];
    int i = 0, maximum;
    int value;
    for(i=0; i<chars; i++)
    {
        frequency[i] = 0; // initialize freq of all characters to zero
    }

    i=0;
    while(string[i] != '\0')
    {
        value = (int)string[i];
        frequency[value] += 1;
        i++;
    }

    maximum = 0;
    for(i=0; i<chars; i++)
    {
        if(frequency[i] > frequency[maximum])
        maximum = i;
    }
      printf("***************************************************\n");
      printf("Maximum occurrence character is '%c' = %d times.\n", maximum,
      frequency[maximum]);
      printf("***************************************************\n");

}
int stringlength(char *s)
{
     int j;
     for(j=0;s[j];j++);

	 return j;



}
void printmax(char *s)
{
	int  a[1000],i,j,k=0,count=0,n;

    n=stringlength(s);

    for(i=0;i<n;i++)
    {
    	a[i]=0;
    	count=1;
    	if(s[i])
    	{

 		  for(j=i+1;j<n;j++)
	      {

	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }
       }
	   a[i]=count;
	   if(count>=k)
	     k=count;


 	}
 	printf("maximum occuring characters ");
 	for(j=0;j<n;j++)
	    {

	        if(a[j]==k)
    	    {
	             printf(" '%c',",s[j]);
	     	}
	   }

	printf("\b=%d times \n ",k);


}
void sortingNames()
{
    char str[5][20], t[20]; // Here, we will take two dimensional array
    int i, j;
    printf("Enter Any four  Names :\n");
    for(i=0; i<5; i++)
    {
        gets(str[i]);
    }
    /* Comparing strings or names*/
    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(strcmp(str[j-1], str[j])>0)
            {
                strcpy(t, str[j-1]);
                strcpy(str[j-1], str[j]);
                strcpy(str[j], t);
            }
        }
    }
    /*print strings in alphabetical order*/
    printf("Names in Alphabetical Order :");
    for(i=0; i<5; i++)
    {
        puts(str[i]);
    }
    return 0;

}
void reverseSentence()
 {
    /*
    char str[20];
    printf("Enter a sentence:\n");
    scanf("%s",str);
    if (str != '\n')
    {
        reverseSentence(str);
        printf("%s", str);
    }*/
    printf("Oooops! something went wrong!\n");
    printf("its not working properly because we showing this statement\n");
}














