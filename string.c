int len(char *s){
int counter=0;
while(1){
if(s[counter]!='\0'){counter++;
}
else break;
}
return counter;
}

char str_comp(char *a,char* b){
unsigned char x;
if((x=len(a))!=len(b))return 0;
char k=0;
while(1){
if(a[k]!=b[k])return 0;
else if(a[k]!='\0')k++;
else
	return k==x ? 1:0;
}
}


#include <stdlib.h>
char* str_conc(char *a,char *b){
char _a=len(a);
char _b=len(b);
unsigned char size=_a+_b;
char *p=malloc(size*sizeof(char));
int i=0,j=0;
for(i=0;i<_a;i++){
*(p+i)=*(a+i);
}
for(i=_a,j=0;j<_b,i<size;j++,i++){
*(p+i)=*(b+j);
}
return p;
}

