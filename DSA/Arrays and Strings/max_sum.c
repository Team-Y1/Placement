#include <stdio.h>
#include <math.h>

int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    int current_sum = arr[0];
    int max_sum = arr[0];

    for(int i=1;i<=n;i++)
    {
        current_sum = (arr[i] > (current_sum + arr[i])) ? arr[i] : (current_sum + arr[i]);

        if (current_sum > max_sum)
        {
            max_sum=current_sum;
        }
    }

    printf("%d",max_sum);


}