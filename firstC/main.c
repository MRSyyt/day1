//
//  main.c
//  firstC
//
//  Created by Student on 15/8/4.
//  Copyright (c) 2015年 yyt. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    /*
    int  c = 10;
    float d = 5.5;
    
    printf("%f\n",  d);
    printf("%d\n", c);
    printf("this is C program!\n");
    char ch = 'a';
    printf("%c\n", ch);*/
    
    /*
    char c = 'a';
    short a = 1;
    int b = 2;
    long e = 3;
    float g = 1.1;
    double f = 2.2;
    
    printf("%ld\n", sizeof(c));
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(b));
    printf("%ld\n", sizeof(e));
    printf("%ld\n", sizeof(g));
    printf("%ld\n", sizeof(f));
    
    //其中  ld：64位   d：32位 电脑
    */
//    
//    int ia;
//    char c;
//    scanf("%d", &ia);  //&：取地址符号
//    printf("%d\n", ia);
//    
//    getchar();        //清空字符
//    scanf("%c", &c);
//    printf("%c\n", c);
    
//    int a = 5;  //变量可读可写
//    const int b = 5;   //常量内容不可以被修改
//    a = 10;
//    b = 10;
//    
//    const int a;
    
//    int c = 10;
//    printf("sui yi dayingdzhi   %d\n", c);
//    
//    int a;
//    double b;
//    
//    scanf("%d, %lf", &a, &b);
//    printf("%d %f\n", a, b);
//    
//    enum   suit{monday, tuesday=4, thuresday}  day;  //enum 枚举类型
//    day = monday;
//    
//    printf("%d\n", day);
//    
//    enum suit anotherday;
//    anotherday = thuresday;
//    printf("%d\n", anotherday);

//    
    
    
//    
//    
//    int a[5];
//    int i, b = 99;
//    
//    for (i=0; i<5; i++) {
//        a[i] = i;
//    }
//    
//    for (i=0; i<5; i++) {
//        printf("%d, %d\n", i, a[i]);
//    }
//    printf("%d\n", 2%3);
//    
//    printf("%d\n", b++);
//    printf("%d\n", b);
    
//    
//    enum bool {false=0, true=1}; //枚举类型
//    
//    enum bool flag = false;
//    
//    int a = 5;
//    int b = 10;
//    
//    if(a>b && flag){
//        printf("a > b\n");
//    }else{
//        printf("a < b\n");
//    }
//
    
    int a = 1;
    
    switch (a) {
        case 0:
            printf("a = 0");
            break;
        case 11:
            printf("a = 1");
           
        case 10:
            printf("a = 10\n");
            break;
        default:
            printf("0000\n");
            break;
    }
    
    
    return 0;
}
