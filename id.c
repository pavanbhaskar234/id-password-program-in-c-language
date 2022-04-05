// id = 0001 & password = 0002
// you can enter wrong password also
#include<stdio.h>
int main(){
int password,id,new;
int n,p=1;
printf("enter id :");
scanf("%d",&id);
printf("enter password :");
scanf("%d",&password);
if(id==0001){
    printf("id correct\n");
    if(password == 0002){
        printf("right password\n");
    }
    }
    if(id!=0001){
        printf("wrong id \n");
        }
    if(password!=0002){
        printf("wrong password %d\n");
        printf("to change password press '1' :\n");
        scanf("%d",&n);
        if(n==p){
            printf("enter new password :\n");
                scanf("%d",&new);
                new = password;
                if (new == password){
                    printf("your password changed successfully\n");
printf("enter id :");
scanf("%d",&id);
printf("enter password :");
scanf("%d",&password);
        if(id == 0001&& password == new){
        printf("your name is pavan\n");
        printf("your age is 19\n");
        printf("your height is 5.6\n");
                }
            }
            
        }
    }
    if(id == 0001&& password == 0002){
        printf("your name is pavan\n");
        printf("your age is 19\n");
        printf("your height is 5.6\n");
}
return 0;
}