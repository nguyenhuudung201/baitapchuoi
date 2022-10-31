#include<stdio.h>
#include<string.h>
void chuyendoi(char str[]){
 for(int i=0;i<=strlen(str);i++){
 	if(str[i]>=97&&str[i]<=122){
 		str[i]=str[i]-32;
	 }
 }
}
int main(){
	char s[50];
	printf("nhap chuoi ky tu: ");
	scanf("%s",s);
	chuyendoi( s);
	printf("chuoi sau khi chuyen doi la: %s",s);	
}
