#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Dinarr
{
    int num;
    int* elements;
}typedef Diarr;



int main()
{
    Dinarr dinarr;
    dinarr.num=5;
    dinarr.elements=(int*)calloc(dinarr.num, sizeof(int));
    for(int i = 0; i < dinarr.num; i++){
        dinarr.elements[i]= 10*1;
        printf("%d   ", dinarr.elements*);
    }
    free(dinarr.elements);
    return 0;
}
