// multidimensnal array
// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
//     int i, j;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[3][3];
//     int i, j;
//     printf("Enter a element  in array\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Elements in array\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[8][8];
//     int i, j, m, n;
//     printf("Enter a size\n");
//     scanf("%d%d\n", &m, &n);
//     printf("Enter a elements\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Elements array are\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < j; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
//     int b[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
//     int c[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[5];
//     int n;
//     printf("Enetr Elements\n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Elements array are\n");
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d\t", a[i]);
//     }
//     return 0;
// }