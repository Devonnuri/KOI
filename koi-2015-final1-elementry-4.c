#include <stdio.h>

using namespace std;

struct str_ball{
    int b_num, b_color, b_size, b_score;
} ball[200000];

int main()
{
    int i, j, n;

    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d %d", &ball[i].b_color, &ball[i].b_size);
        ball[i].b_num = i;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i!=j){
                if((ball[i].b_color != ball[j].b_color) && (ball[i].b_size > ball[j].b_size)) ball[i].b_score += ball[j].b_size;
            }
        }
    }

    for(i=1; i<=n; i++){
        printf("%d\n", ball[i].b_score);
    }

    return 0;
}
