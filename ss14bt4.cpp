#include<stdio.h>
int main(){
	char string[]="cuong le",value,count=0;
	int size=sizeof(string)/sizeof(string[0]);
	printf("moi ban nhap ky tu can dem trong mang: ");
	scanf("%c",&value);
	for(int i=0;i<size;i++){
		if(value==string[i]){
			count+=1;
		}
	}
	printf("ky tu [%c] co %d lan trong mang",value,count);
	return 0;
}
