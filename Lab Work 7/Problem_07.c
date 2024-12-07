#include <stdio.h>
void mergeArray(int arrone[],int s1,int arrtwo[],int s2,int merged[]){

    int i, j, k;
    i = j = k = 0;

    while( i < s1){
        merged[k++] = arrone[i++]; 
        // use the current value of k and i and then increment by it one this will store the value of arrone i-th index in merged array of k-th index.
    }
    while(j < s2){
        merged[k++] = arrtwo[j++];
    }
    return;
}
int main(){
    int arrone[] = {1, 2, 3, 4, 5};
    int arrtwo[] = {6, 7, 8, 9, 10};
    int s1 = sizeof(arrone)/ sizeof(arrone[0]);
    int s2 = sizeof(arrtwo)/ sizeof(arrtwo[0]);
    int merged[s1 + s2];

    mergeArray(arrone, s1, arrtwo, s2, merged);

    for(int i = 0; i < s1 + s2; i++){
        printf("%d\t", merged[i]);
    }
}