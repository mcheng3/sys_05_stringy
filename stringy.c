#include<stdio.h>
#include<stdlib.h>

int strlen( char * );
char * strcpy( char *dest, char *source );
char * strncat( char *dest, char *source, int n);
int strcmp( char *s1, char *s2 );
char * strchr( char *s, char c );

int main(){
	char *s = "Hello!";
	char *b = "iii";
	printf("strlen(s): %d\n", strlen(s));
	printf("strcpy(s, b): [%s]\n", strcpy(s, b));
	return 0;
}

int strlen(char *s){
	int i = 0;
	while(*s){
		s++;
		i++;
	}
	return i;
}

char * strcpy( char *dest, char *source){
	while(*source){
		printf("%p\n",dest);
		dest = source;
		dest++;
		source++;
	}
	//*dest = s;
	return dest;
}	
			

