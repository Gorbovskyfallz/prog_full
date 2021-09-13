#!/usr/bin/python3

from pyrob.api import *


@task
def task_8_3():
    x = 1
    while x==1:
        if (wall_is_above() or wall_is_beneath()) == True and wall_is_on_the_right() == False:
            fill_cell()
            move_right()
        elif (wall_is_above and wall_is_beneath()) == False and wall_is_on_the_right() == False:
            move_right()
        elif (wall_is_above() or wall_is_beneath()) == True and wall_is_on_the_right() == True:
            fill_cell()
            x=0
        else:
            x=0
        


if __name__ == '__main__':
    run_tasks()
