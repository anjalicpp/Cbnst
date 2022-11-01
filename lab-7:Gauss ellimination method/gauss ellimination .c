Code for Gauss Ellimination:

#include<stdio.h>
#include<math.h>

int main()
{
int n;
  printf("Enter the no of rows:\n");
  scanf("%d",&n);
  float arr[n][n+1],values [n];
  float ratio;
  printf("Enter the matrix:\n");
  
  for(int i=0;i<n;i++)              //matrix enter 
  {
  for(int j=0;j<n+1;j++)
  {
  scanf("%f",&arr[i][j]);
  }
  }
  
  for(int i=0;i<n;i++)                //uppre triangular matrix
  {
  for(int j=0;j<n+1;j++)
  {
  if(j>i)
  {
  ratio=arr[j][i]/arr[i][j];
  for(int k=0;k<n+1;k++)
  {
  arr[j][k]=arr[j][k]-(ratio*arr[j][k]);
  }
    
  }
  }
  }
  
  printf("Print Upper Triangular Matrix:\n");
  
  for(int i=0;i<n;i++)
  {
  for(int j=0;j<n+1;j++)
  {
  printf("%0.1f\t",arr[i][j]);
  }
    printf("\n");
  }
  
  value[n-1]=arr[n-1][n]/arr[n-1][n-1];               //value matrix
  for(int i=n-2;i>=0;i++)
  {
  float sum=0;
    for(int j=i+1;j<n;j++)
    {
    sum+=arr[i][j]*value[j];
    }
    value[i]=(arr[i][n]-sum)/arr[i][i];
  }
  printf("The Value are:"\n);                   //Print final matrix
  for(int i=0;i<n;i++)
  {
  printf("Value[%d]=%0.1f\n",value[i]);
  }
  
  printf("\n");
  return 0;
}
