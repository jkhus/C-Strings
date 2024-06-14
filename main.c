/*#include<stdio.h>
int main()
{
    float weight[50],ratio[50],profit[50],totalValue,capacity,temp;
    int n,i,j;
    printf("Enter the number of items:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the weight and profit for items[%d]\n",i);
        scanf("%f %f",&weight[i],&profit[i]);
    }
    printf("Enter the capacity of knapsack:");
    scanf("%f",&capacity);

    for(i=0;i<n;i++)
    {
        ratio[i]=weight[i]/profit[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;

                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;
            }
        }
    }
    printf("Knapsack problem solving using greedy solutions\n");
    for(i=0;i<n;i++)
    {
        if(weight[i]>capacity)
            break;
        else
        {
            totalValue=totalValue+profit[i];
            capacity=capacity-weight[i];
        }
    }
    if(i<n)
    {
        totalValue=totalValue+(ratio[i]*capacity);

    }
    printf("The maximum cost is %f",totalValue);
}*/
#include<stdio.h>
int isSubsetSum(int set[],int n,int sum)
{
    if(sum==0)
        return 0;
    if(sum<0)
        return 0;
    if(n==0)
        return 1;

    int lastElement=set[n-1];
    return isSubsetSum(set,n-1,sum)/isSubsetSum(set,n-1,sum-lastElement);
}
int main()
{
    int set[]={1,2,3,4,5};
    int n=sizeof(set)/sizeof(set[0]);
    int sum=0;
    if(isSubsetSum(set,n-1,sum))
    {
        printf("Yes,subset sum is possible");
    }
    else
    {
        printf("No,subset sum is not possible");
    }
}
