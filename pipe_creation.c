#include<stdio.h>
#include <sys/stat.h>

int main()
{
int f1,f2;
    f1 = mkfifo("pipeA",0666);

    if(f1<0){
        printf("\npipeA was not created");
    }
    else{
        printf("\npipeA created");
    }
 
    f2 = mkfifo("pipeB",0666);
   
    if(f2<0){
        printf("\npipeB was not created");
    }
    else{
        printf("\npipeB is created\n");
    }
    return 0;
}
