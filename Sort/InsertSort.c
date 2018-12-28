void InsertSort(ElementType A[],int N)
{
	int i,P;
	ElementType Temp;
	for(P=1;P<N;P++)
	{
		temp=A[P];
		for(i=P;i>0&&A[i-1]>temp;i--)
			A[i]=A[i-1];
		A[i]=temp;
	}
}