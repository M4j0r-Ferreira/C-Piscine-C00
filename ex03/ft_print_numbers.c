#include <unistd.h>

void ft_print_numbers(void){
	char num ='0';
	for(int i=0; i<=9;i++,num++){
		write(1,&num,1);
	}
}
