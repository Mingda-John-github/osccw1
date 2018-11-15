#include "osc_queue.h"
#include <stdlib.h>
/*
struct element
{
	int pid;
	int pid_time;
	int pid_priority;

	struct timeval created_time;
};

struct queue
{
	struct element *e;
	int max;
	int count;
};
*/
int addFirst(struct queue *my_arr, struct element *new_e){
    if (my_arr -> max == my_arr->count){
        return 1;
    }
    else{
        for(int i = my_arr->count; i > 0; i--){
            my_arr ->e[i] = my_arr->e[i-1];
        }
        my_arr->e[0] = *new_e;
        my_arr->count++;
        return 0;
    }
}
/*
int addHere(struct queue *my_arr, struct element *new_e, int index){
        if (my_arr -> max == my_arr->count){
        return 1;
    }
}
int addLast(struct queue *my_arr, struct element *new_e){
        if (my_arr -> max == my_arr->count){
        return 1;
    }
}

void freeAll(struct queue *my_arr);
int getCount(struct queue *my_arr);
*/
int init(struct queue *my_arr, int arr_size){
    printf("Initialising ...\n");
    struct element *e_arr;
    e_arr = (struct element *)malloc(sizeof(struct element) * arr_size);
    if(e_arr == null){
        printf("init: initialization failed ...\n");
        return 1;
    }
    for(int i = 0; i < arr_size; i++){
        e_arr[i].pid = 0;
        e_arr[i].pid_time = 0;
        e_arr[i].pid_priority = 0;
        (e_arr[i].created_time).tv_sec = 0;
        (e_arr[i].created_time).tv_usec = 0;
        }
    printf("Init: successfully malloc element with size of %d ...\n", arr_size);
    my_arr->e = e_arr;
    my_arr->max = arr_size;
    my_arr->count = 0;
    return 0;
    
}
//void printAll(struct queue *my_arr);

//void removeLast(struct queue *my_arr);

int main(){
    struct queue *my_arr;
    int arr_size = 5;
    init(my_arr, arr_size);
    
}