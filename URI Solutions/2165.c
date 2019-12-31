#include<stdio.h>
int main()
{
  int z=0,i;
  char a[500];
  scanf("%[^\n]s",a);

  for(i=0;a[i]!='\0';++i){
    z++;
  }

  if(z>=1 && z<=140){
    printf("TWEET\n");
  }
  else{
    printf("MUTE\n");
  }


return 0;
}
