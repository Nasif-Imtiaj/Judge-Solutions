#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int matrix[200][200],R,C=5;
int kadane(int* arr, int* start, int* finish, int n)
{
    int sum = 0, maxSum = INT_MIN, i;

    // Just some initial value to check for all negative values case
    *finish = -1;

    int local_start = 0;

    for (i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }

    // There is at-least one non-negative number
    if (*finish != -1)
        return maxSum;

    // Special Case: When all numbers in arr[] are negative
    maxSum = arr[0];
    *start = *finish = 0;

    // Find the maximum element in array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}
void findMaxSum()
{
    // Variables to store the final output
    int maxSum = INT_MIN, finalLeft, finalRight, finalTop, finalBottom;

    int left, right, i;
    int temp[R], sum, start, finish;

    // Set the left column
    for (left = 0; left < C; ++left)
    {
        // Initialize all elements of temp as 0
        memset(temp, 0, sizeof(temp));

        // Set the right column for the left column set by outer loop
        for (right = left; right < C; ++right)
        {

            for (i = 0; i < R; ++i)
                temp[i] += matrix[i][right];

            sum = kadane(temp, &start, &finish, R);

            if (sum > maxSum)
            {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }
    printf("%d\n", maxSum);
}
int main()
{
//freopen("output.txt", "w", stdout);

    int i,j;
    cin>>R;
    C=R;
    for(i=0; i<R; i++)
    {
        for(j=0; j<R; j++)
        {
            cin>>matrix[i][j];
        }
    }
    findMaxSum();

    return 0;
}
