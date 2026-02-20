#include <stdio.h>

void input_array(int arr[], int n);
void print_array(int arr[], int n);

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    input_array(arr, n);
    print_array(arr, n);

    return 0;
}

void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
void print_array(int arr [], int n)
{
    for (int i = 0; i<n; i++)
    printf("%d", arr[i]);
}
