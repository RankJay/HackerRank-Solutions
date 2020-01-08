#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int ins[t], out[t];
    for(int i=0; i<t; i++){
        scanf("%d", &ins[i]);
        out[i] = 0;
        if(ins[i]!=0){
            ins[i]--;
            out[i] =+ ins[i];
        }
    }
    for(int i=0; i<t; i++){
        printf("%d\n", out[i]);
    }
    return 0;
}
