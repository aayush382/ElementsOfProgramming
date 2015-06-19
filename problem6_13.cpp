void consecSort(vector<int> &A)
{
	for(int i=0; i<A.size();i++)
		while(A[i]!=i)
			swap(A[i],A[A[i]]);
}
