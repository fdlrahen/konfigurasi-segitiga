#include <stdio.h>

void main()
{
  char x;
  int k,l,m;
  printf("Masukkan sebuah huruf"); scanf("%c",&x);
  printf("Masukkan jumlah kolom"); scanf("%c",&m);
  for (k=0; k<m; k++)
  {
      for (l=1; l<=m-k; l++) printf(" ");
      for (l=1; l<=k; l++)printf("%c",x);
    printf("\n");

  }
}


