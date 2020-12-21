#include <stdio.h>
#include <string.h>

void upperCase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97&&s[i]<=122){
			s[i]-=32;
		}
	}
	printf("Uppder Case: %s",s);
}