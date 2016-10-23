//
//  main.c
//  temperature
//
//  Created by USER on 2016/10/23.
//  Copyright © 2016年 USERtesttest. All rights reserved.
//

#include <stdio.h>

/* 摂氏、華氏の対応表を印字する */
int main()
{
    int fahr;
    int n = 300;
    
    for (fahr = n; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
