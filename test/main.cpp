//
//  main.cpp
//  test
//
//  Created by issaclam on 14/11/20.
//  Copyright (c) 2014年 issaclam. All rights reserved.
//

#include <iostream>
#include "student.h"
//将类声明头文件包含进来
int main(int argc, const char * argv[]) {
    Student stud , *s; //定义对象
    s = &stud;
    
    Student &s1 = stud;
    stud.num = 888;
    
    
    //s1.num = 999;
    
    s->display();
    //s.display( ); //执行stud对象的display函数
    return 0;
}
