#include<stdio.h>
#include<stdlib.h>

int strlen2( char * );
char * strcpy2( char *dest, char *source );
char * strncat2( char *dest, char *source, int n);
int strcmp2( char *s1, char *s2 );
char * strchr2( char *s, char c );

int main(){
  char s[100] = "Hello!";
  char b[100] = "iii";
  char d[100]; 
  printf("strlen(s): %d\n", strlen2(s));
  printf("strcpy(s, b): [%s]\n", strcpy2(s, b));
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
	
			

