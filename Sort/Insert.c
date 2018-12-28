void InsertSort(ElementType A[],int N)
{
	int i,j;
	ElementType temp;
	for(i=1;i<N;i++)
	{
		temp=A[i];
		for(j=i;j>=0&&A[j-1]>temp;j--)
			A[j]=A[j-1];
		A[j]=temp;
	}
}


void ShellSort(ElementType A[],int N)
{
	int i,j,Increment;
	ElementType temp;
	for(Increment=N/2;Increment>=1;Increment/=2)
		for(i=Increment;i<N;i++)
		{
			temp=A[i];
			for(j=i;j>=Increment;j-=Increment)
			{
				if(temp<A[j-Increment])
				A[j]=A[j-Increment];
			else 
				break;
			}
			A[j]=temp;
		}
			
}