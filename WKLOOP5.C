
#include<stdio.h>
#include<conio.h>

void main(){
      int a,n;
      clrscr();
      printf("Enter two number : ");
      scanf("%d%d",&a,&n);
      while(a<=n){
      if(a%4==0){
	  printf("\n%d",a);
	  }
	  a++;

      }

 getch();


}