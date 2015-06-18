
int findLongestIncreasingSubArray(vector<int> &A)
{
int maxLen=1,currLen=1;
	int maxIndex=0,currIndex=0;
	for(int i=1;i<A.size();i++)
	{
		if(A[i]>A[i-1])
		{
			currLen++;
		}
		else
		{
			if(currLen>maxLen)
			{
				maxLen=currLen;
				maxIndex=currIndex;
			}
			currLen=1;
			currIndex=i;
		}
	}
	return maxLen;
	}
