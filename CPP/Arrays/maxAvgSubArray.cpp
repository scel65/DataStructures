#include<iostream>
using namespace std;

float maxAvgSubArray(int *a, int n, int k)
{
    int maxSum =0;
    int currSum = 0;


    for(int i=0;i<k;i++)
    {
        currSum += a[i];
        if(maxSum < currSum)
        {
            maxSum=currSum;
        }
    }
    for(int i=k;i<n;i++)
    {
        currSum = currSum + a[i];
        currSum = currSum - a[i-k]; 
        if(maxSum < currSum)
        {
            maxSum=currSum;
        }
    }
    float result = (static_cast<float>(maxSum))/ (static_cast<float>(k));
    return result;
}

int main()
{
    int *arr = new int[7]{-1, -4, 0, 5, 3, 2, 1} ;
    cout<<"\n The max average is "<<maxAvgSubArray(arr,7,3)<<endl;

    delete [] arr;
    return 0;

}
