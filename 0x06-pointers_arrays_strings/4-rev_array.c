#include <stdio.h>

void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
while (i < j)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
int main()
{
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
reverse_array(arr, n);
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
return (0);
}

