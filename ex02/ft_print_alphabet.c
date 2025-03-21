#include <unistd.h>

ft_print_alphabet(void){
    int i;
    char t ='a';
    for( i=0;i<26;i++,t++){
        write(1,&t,1);   
    }
}
