#include <stdio.h>

int main(){
    int btn_press = 0;

    while (btn_press <10){
        btn_press++ ;
        if (btn_press % 3 == 0){
            printf("buff\n");
        }else{
            printf("%d\n", btn_press);   
        }
             
    }
    
   printf("done !\n");
   return 0;
    
}