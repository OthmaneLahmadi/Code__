int len(char *s){
int counter=0;
while(1){
if(s[counter]!='\0'){counter++;
}
else break;
}
return counter;
}
