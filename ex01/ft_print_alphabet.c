#include <unistd.h>

void ft_print_alphabet(void){
	char alpha='a';
	for(int i = 1;i<=26;i++,alpha++){
		write(1,&alpha,1);;
	}
}
