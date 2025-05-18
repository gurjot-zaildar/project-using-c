#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

const int bar_length = 50;
const int max_task = 5;
void clear_screen();

typedef struct {
    int id;
    int progress;
    int step;
} task;

void print_bar(task task);
 
int main(){
    task task[max_task];
    srand(time(NULL));

    for (int i= 0; i < max_task; i++ ) {
        task[i].id = i + 1;
        task[i].progress = 0;
        task[i].step = rand() % 5 + 1;
    }

    int task_incomplete = 1;
    while (task_incomplete) {
        task_incomplete = 0;
        clear_screen();
        for (int i= 0; i < max_task; i++ ){
        task[i].progress += task[i].step;
        if (task[i].progress > 100) {
            task[i].progress = 100;
        } else if (task[i].progress < 100) {
            task_incomplete = 1;
        }
        print_bar(task[i]);
        }
    sleep(1);
    }
    printf("\n all task completed!\n");
    return 0;
}

void clear_screen() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void print_bar(task task) {
    int bars_to_show = (task.progress * bar_length) / 100;
    printf("\n task %d: [", task.id);
    for(int i = 0; i < bar_length; i++) {
        if (i < bars_to_show) {
            printf("=");
        } else {
            printf(" ");
        }
    }
    printf("] %d%%", task.progress);

}