#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,nguess=1;
    srand(time(0));
    num=rand()%100+1;
     
   
    do{
        printf("enter the number between 1 to 100\n");
        scanf("%d",&guess);
        
        if(guess>num)
        {
            printf("lower number please !!\n");
        }
        else if(guess<num)
        {
            printf("higher number please\n");
            

        }
        else{
            printf("you guessed it in %d attempts\n",nguess);
        }
        nguess++;
            
        


    }
    while(guess!=num);
    
	return 0;
}
