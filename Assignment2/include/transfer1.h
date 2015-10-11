/* Bradford Smith (bsmith8)
 * CS 511 Assignment 2 transfer1.h
 * 10/10/2015
 * "I pledge my honor that I have abided by the Stevens Honor System."
 */

#ifndef _TRANSFER1_H_
#define _TRANSFER1_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#include "cbuf.h"
#include "utils.h"

struct s_threadArgs
{
    int waitTime;
    char* fileName;
};

/* global semaphore */
sem_t gl_sem;

int     main(int, char**);
void*   start_filler(void*);
void*   start_drainer(void*);

#endif /* _TRANSFER1_H_ */
