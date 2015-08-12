//
//  main.c
//  回旋数字
//
//  Created by qianfeng on 15/8/10.
//  Copyright (c) 2015年 cxk. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    int a[1000000] = {};
    scanf("%d",&n);
    int s = n*n;
    int row = 0,col = 0,k=0,f=1;
    int edgR = n-1,edgr=0,edgC = n-1,edgc=0;
    for (int i = 1; i<=s; i++) {
        a[row * n+col] = i;
        if (k==0) {
            col += f;
            if (col == edgC) {
                k = 1;
                edgC = edgc;
                edgr = row + f;
            }
        }else{
            row += f;
            if (row == edgR) {
                k = 0;
                f *=-1;
                edgR = edgr;
                edgc = col+f;
            }
        }
    }
    for (int i=0; i<s; i++) {
        printf("%3d",a[i]);
        if (!((i+1)%n)) {
            printf("\n");
        }
    }
    
    
    return 0;
}
