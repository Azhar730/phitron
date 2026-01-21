#include <stdio.h>
int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     };
//     printf("%d\n", sum);
//     return 0;
// }

// sum 1 to 10
{
    for(int i = 1; i<=10; i++){
        if(i%2 == 0){
            printf("Even%d\n",i);
        }else{
            printf("Odd%d\n",i);
        }
    }
    return 0;
}