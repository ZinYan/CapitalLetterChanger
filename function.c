#include function.h

void print(char *str){
  for(int i=0;i<strlen(str);i++){
    if(str[i]>='a' && str[i]<='z'){
      str[i]=str[i]-'a'+'A';
    }
    else if(str[i]>='A' && str[i]<='Z'){
      str[i]=str[i]+'a'-'A';
    }
  }
  printf("%s\n",str);
}
