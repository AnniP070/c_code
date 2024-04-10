#include <stdio.h>

void Prime_Number();

int main() {
  Prime_Number();    // argument is not passed
  return 0;
}
void Prime_Number() {
  int n, i, x=0;
  printf("Enter a positive integer: ");
  scanf("%d",&n);

  if (n==0 && n==1)
    x=1;

  for(i=2;i<=n/2;++i) {
    if(n%i==0) {
      x=1;
      break;
    }
  }

  if (x==1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);
}

