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
