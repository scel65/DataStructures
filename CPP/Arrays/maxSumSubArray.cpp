#include<iostream>
using namespace std;

int maxSumSubArray(int *a, int n)
{
    int max_sum = 0;
    int curr_sum = 0;
    for (int i=0;i<n;i++)
    {
        curr_sum += a[i];

        if(max_sum< curr_sum)
        {
          max_sum = curr_sum;
        }

        if(curr_sum < 0)
        {
          curr_sum = 0;
        }
    }
    return max_sum;

}

int main()
{
    int *arr = new int[7]{-1, -4, 0, 5, 3, 2, 1} ;
    int result = maxSumSubArray(arr,7);
    cout<<"\n The result is "<<result<<endl;

    delete [] arr;
    return 0;

}
