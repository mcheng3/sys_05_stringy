/* 
Queenie Xiang and Michael Cheng
Systems pd5
HW05: If you like it then you should've put a string on it
2017-10-05
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen( char * );
char * mystrcpy( char *dest, char *source );
char * mystrncat( char *dest, char *source, int n);
int mystrcmp( char *s1, char *s2 );
char * mystrchr( char *s, char c );

int main(){
  char s[100] = "Hello!";
  char s1[100] = "??W?"; 
  char s2[100] = "goodbye"; 
  char b[100] = "iii";
  char d[100] = ""; 
  char a[] = "aaca";
  char c[] = "c";
  char c2[] = "c"; 
  char e = 'e'; 

    
  printf("My strlen(%s): %d\n", s, mystrlen(s));
  printf("Standard strlen(%s): %lu\n\n", s, strlen(s));

  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("d: %s\n", d);
  
  printf("My strcpy(s1, s2): [%s]\n", mystrcpy(s1, s2));
  printf("Standard strcpy(d, s2): [%s]\n\n", strcpy(d, s2));

  printf("s: %s\n", s);
  printf("b: %s\n", b);
  printf("s1: %s\n", s1); 
  
  printf("My strncat(s, b, 2): [%s]\n", mystrncat(s, b, 2));
  printf("Standard strncat(s1, b, 2): [%s]\n\n",strncat(s1, b, 2));

  printf("a: %s\n", a);
  printf("c: %s\n", c);
  printf("c2: %s\n", c2);
  
  printf("My strcmp(a, c): %d\n", mystrcmp(a,c));
  printf("Standard stcmp(a, c): %d\n", strcmp(a, c));
  printf("My strcmp(c, c): %d\n", mystrcmp(c,c));
  printf("Standard stcmp(c, c): %d\n\n", strcmp(c, c));
  

  printf("s: %s\n", s);
  printf("e: %c\n", e); 
  printf("My strchr(s, e): %s\n", mystrchr(s,e));
  printf("Standard strchr(s, e): %s\n\n", strchr(s,e));

  
}

int mystrlen(char *s){
  int i = 0;
  while(*s){
    s++;
    i++;
  }
  return i;
}

char * mystrcpy( char *dest, char *source){
  
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

char * mystrncat( char * dest, char *source, int n){
  char *des = dest;
  char *src = source;
  while(*des++);
  *des--;
  while(n--){
    //printf("des: %s\n", des);
    *des = *src;
    src++;
    des++;
  }
  //*des = '\0'; 
  return dest;
}
				
int mystrcmp( char *s1, char *s2){
  while(s1 == s2 && !s1 && !s2){
    s1++;
    s2++;

  }
  return ( s1 - s2);
}

char * mystrchr( char *s, char c ){
  while(*s != c){
    s++;
  }
  return s;			
}



