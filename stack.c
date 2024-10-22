#include<stdio.h>
#include<stdlib.h>
int main(){
int ch;
while(1){
printf("\n---stack menu---\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n);
printf("Enter your choice;");
scanf("%d",&ch);
switch(ch){
case 1:
push();
break;
case 2:
pop0;
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("Invalid choice,please try again.\n");
}
}
return 0;
}
