#include<stdio.h>
#include<string.h>
void main(){
	char alpha[100];
	int i,len,place=0;
	printf("Enter your Desired String: ");
	gets(alpha);
	len=strlen(alpha);
	for(i=0;i<len/2;i++){
		if(alpha[i]==alpha[len-i-1]){
			place++;
		}
	}
	if(place==i){
		printf("This String is Palindrome");
	}else{
		printf("This String is not Palindrome");
	}
}
