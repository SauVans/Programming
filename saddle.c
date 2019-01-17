#include<stdio.h>
int main()
{
int arr[3][3];
int i,j,k,col,got=0;
int min=0,count=0;
int ch;
do
{


printf("\n enter values\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
}

for(i=0;i<3;i++)
{
        min = arr[i][0];
	for(j=0;j<3;j++)
	{

		if(arr[i][j]<=min)
		{
			min = arr[i][j];
			col = j;
		}

	}
	count =0;
	for(k=0;k<3;k++)
	{

		if(min>=arr[k][col])
		{
			count++;

		}
		else
		break;

	}
	if(count == 3)
    {
        printf("\n saddle point %d,%d is %d\n",i,col,min);

        got =1;
    }

}
if(got == 0)
    printf("\n there is no saddle point in this matrix\n");
printf("\n wanna enter more? enter 1\n");
scanf("%d",&ch);

}while(ch ==1);
}
