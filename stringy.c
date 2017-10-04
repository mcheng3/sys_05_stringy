#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlen2( char * );
char * strcpy2( char *dest, char *source );
char * strncat2( char *dest, char *source, int n);
int strcmp2( char *s1, char *s2 );
char * strchr2( char *s, char c );

int main(){
  char s[100] = "Hello!";
  char b[100] = "iii";
  char d[100]; 
	char a[] = "aaca";
	char c[] = "c";
  printf("strlen(s): %d\n", strlen2(s));
  //printf("strcpy(s, b): [%s]\n", strcpy(s, b));
  //printf("strcpy2(s, b): [%s]\n", strcpy2(s, b));
  printf("strncat2(s, b, 2): [%s]\n", strncat2(s, b, 2));
	printf("strcmp2(s, b): %d\n", strcmp2(c,c));
	printf("strchr2(a, c): %s\n", strchr2(a,'c'));
	return 0;

}

int strlen2(char *s){
  int i = 0;
  while(*s){
    s++;
    i++;
  }
  return i;
}

char * strcpy2( char *dest, char *source){
  
  char *src = source;
  char *des = dest;
  
  while (*src) {
    *des = *src;
    src++; 
    des++;
  }

  *des = '\0'; 
  return dest;
}

char *strncat2( char * dest, char *source, int n){
	char *des = dest;
	char *src = source;
	while(*des++);
	*des--;
	while(n--){
		printf("des: %s\n", des);
		*des = *src;
		src++;
		des++;
	}
	//*des = '\0'; 
	return dest;
}
				
int strcmp2( char *s1, char *s2){
	while(s1 == s2 && !s1 && !s2){
		s1++;
		s2++;

	}
	return ( s1 - s2);
}

char *strchr2( char *s, char c ){
	while(*s != c){
		s++;
	}
	return s;			
}



