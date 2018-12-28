#define LeftChild(i) (2*(i)+1)
void PrecDown(ElementType A[],int i,int N)
{
	
}
void Heapsort(ElementType A[],int N)
{
	int i;
	for(i=N/2;i>=0;i--)
		precDown(A,i,N);
	for(i=N-1;i>0;i--)
	{
		swap(&A[0],&A[i]);
		PrecDown(A,0,i);
	}
}