// 作业 5 程序片段编程题

#include <math.h>

// 1. 实验04-1：求一组数中奇数的和

// 判断 n 是否为偶数
int even(int n){
    return !(n%2);
}

// 2. 实验04-4：使用函数统计指定数字个数

// 统计整数 number 中数字 digit 的个数
int countdigit(int number, int digit){
    int d = 10, sum = 0;
    while(1){
        if(d > 10*number) break;
        if(number%d/(d/10) == digit) sum++;
        d *= 10;
    }
    return sum;
}

// 3. 实验04-3：使用函数计算素数并求和 

// 判断 m 是否为素数
int prime(int m){
    if(m < 2) return 0;
    else if(m == 2) return 1;
    else if(m%2 == 0) return 0;
    else{
        int i;
        for(i = 3; i < m; i++){
            if(m%i == 0) return 0;
        }
        return 1;
    }
}

// 4. 实验04-2：使用函数计算两点间的距离 

// 求 (x1, y1), (x2, y2) 两点之间的距离
double dist(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

// 5. 实验04-5：使用函数求余弦函数的近似值

// “输入精度e，用公式就cos(x)的近似值，精确到最后一项的绝对值小于e。”（原文如此）
double funcos(double e, double x){
    int sign = 1, n = 0;
    long long fac = 1;      // 13! = 6,227,020,800 超出 long 类型范围，故使用 long long
    double t, sum = 0;
    while(1){
        t = pow(x, n)/fac;
        if(t < e) break;
        sum += t*sign;
        sign = -sign;
        fac = (n+1)*(n+2)*fac;
        n += 2;
    }
    sum += t*sign;
    return sum;
}