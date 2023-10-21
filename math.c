//sommation de a & b
int add(int a,int b){
return a+b;
}

//soustraction : a-b 
int sub(int a,int b){
return a-b;
}
// multiplication a x b
int mul(int a,int b){
return a*b;
}

//division
int div(int a,int b){
if(b==0)
	return 0;
else
	return (int)(a/b);
}

//factoriel
int fact(int f){
int p=1;
for(int i=1;i<=f;i++){
p=p*i;
}
return p;
}

