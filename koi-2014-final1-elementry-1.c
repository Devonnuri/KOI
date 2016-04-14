#include <stdio.h>

int main(){
    FILE* fin = fopen("input.txt", "r");
    int price, count, money;

    fscanf(fin ,"%d%d%d", &price, &count, &money);
    fclose(fin);

    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%d", -(money-count*price)>0?-(money-count*price):0);
    fclose(fout);
    return 0;
}
