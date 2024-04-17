#include <stdio.h>
#include <string.h>
int define_commands(void){
  char exit[5]="exit";
}
int main(){
  define_commands();
  int cmdout;
  bool run = 1;
  while (run==1){
    char cmd[100];
    printf("}");
    fgets(cmd,100,);
    cmdout=strcmp(exit,cmd);
    if (cmdout == 0);{
      run=0;
    }
    
  }
}
