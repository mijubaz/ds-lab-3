#include<stdio.h>
int main(){
	int a[]={1,1,1,1,0,0,0,0};
	int b[]={1,1,0,0,1,1,0,0};
	int c[]={1,0,1,0,1,0,1,0};
	int d,e,f,g;
	for(int i=0;i<100;i++){
		printf("-");
		
	}
	printf("\n");
	printf("p\t|\q\t|r\t|~q\t|~p\t|(p/\~qVr)\t|(~pvr)\t|(p/\~qvr)->(~pvr)\t\n");
	for(int i=0;i<100;i++){
		printf("-");
		
	}
	printf("\n");
	for(int j=0;j<8;j++){
		printf("%d\t")%d\t;
		%d\t|",a[j],b[j],c[j]);
	if(b[j]==1){
		d=0;
		printf("%d\t|",d);
		
	}
	else{
		d=1;
		printf("%d\t|",d);
	}
	if(a[j]==1){
		e=0;
		printf("%d\t|",e);
		
	}
	else{
		e=1;
		printf("%d\t|",e);
	}
	f=a[j]*d+c[j];
	if(f==0){
		f=0;
		printf("%d\t|",f);
	}
	else{
		f=1;
		printf("%d\t|",f);
	}
	g=e+c[j];
	if(g==0){
		g=0;
		printf("%d\t|",g);
		}
	else{
		g=1;
		printf("%d\t|",g);
	}
	if(f<g){
		printf("0\t");
	}
	else{
		printf("1\t");
	}
	
	
	
		printf("\n");
	}
	
	
	return 0;
}
