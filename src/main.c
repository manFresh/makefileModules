/** @file      main.c 
 *  @brief     POSIX信号量，未命名信号量，多线程之间的通信
 *  @note      
 *  @note      
 *  @author   zhangyinliang
 *  @date     2017.08.06
 *  @version   v1.0
*/
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "/home/zhang-yinliang/zyl/pthread/include/task.h"
//extern void init_task();

int main()
{
    init_task();
    exit(EXIT_SUCCESS);
}


