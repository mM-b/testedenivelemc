# teste de nível em c
#include<stdio.h>
void inverte(int vetor[], int size){
int i,ii;
int aux[size];
for(i=0;i<size;i++){
  aux[i]=vetor[i];
}
for(i=0;i<size;i++){
vetor[i]=aux[size-1-i];
}
for(ii=0;ii<size;ii++){
printf("%d\t", vetor[ii]);
}
}
#include<stdio.h>
int main(){
int vetor[5] = {1,2,3,4,5};
inverte (vetor, 5);
}
