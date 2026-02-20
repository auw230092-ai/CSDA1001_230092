#include <stdio.h>

int sum_array(int arr[], int n);

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = sum_array(arr, n);
    float avg = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
    int sum_array(int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
      sum += arr[i];
    }
      return sum;
}

