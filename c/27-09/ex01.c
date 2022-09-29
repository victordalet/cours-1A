/*exemple de programme d'addition*/
#include <stdio.h>

int add(int val1 , int val2) {
    return val1 + val2;
}


int main(int argc , char **argv) {
    int val1 , val2 , result ;
    printf("Type the first value :");
    scanf("%d",&val1);
    printf("Type the second value :");
    scanf("%d",&val2);
    result = add(val1,val2);
    printf(" Result : %d ",result);
    return 0;
}