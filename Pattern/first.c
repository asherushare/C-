#include<stdio.h>
int main(){
  int n;
  printf("Enter n value: ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}




// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter n value: ");
//   scanf("%d",&n);

//   for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }