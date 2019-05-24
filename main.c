//
//  main.c
//  HW18
//
//  Created by Mac on 2019/5/24.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int b,num[256]={0};
    printf("              算每個數字出現的次數               \n");
    printf("輸入一個連串整數：");
    scanf("%s",a);
    for(b=0;b<strlen(a);b++)
        num[(int)a[b]]++;
    for(b=0;b<256;b++)
        if(num[b]!=0)
            printf("字符%c出現%d次\n",(char)b,num[b]);
    
}
