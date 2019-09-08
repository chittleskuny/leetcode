#!/usr/bin/python3
# -*- coding:utf-8 -*-

import os
import sys
import math

if __name__ == '__main__':
    if len(sys.argv) <= 2:
        print('no_problem or no_solution not found')
        exit(1)

    no_problem = int(sys.argv[1])
    no_solution = int(sys.argv[2])
    print('problem: ' + str(no_problem))
    print('solution: ' + str(no_solution))

    if no_problem < 1 or no_problem > 1000:
        print('Problems 1~1000')
        exit(1)
    elif no_problem == 1000:
        int_from = 1000 - 49
        int_to = 0
    elif no_problem%50 == 0:
        int_from = no_problem - 49
        int_to = no_problem
    else:
        int_from = math.floor(no_problem/50)*50 + 1
        int_to = math.ceil(no_problem/50)*50
    str_from = str(int_from).zfill(3)
    str_to = str(int_to).zfill(3)
    dir = str_from + '~' + str_to
    print('dir: ' + dir)

    no_problem_str = str(no_problem).zfill(3)
    file = no_problem_str + '.cpp'

    temp_compile = 'g++ %s/%s.cpp -o %s/%s.out -D SOLUTION_%s'
    real_compile = temp_compile % (dir, no_problem_str, dir, no_problem_str, no_solution)
    print(real_compile)
    os.system(real_compile)

    temp_execute = '%s/%s.out'
    real_execute = temp_execute % (dir, no_problem_str)
    print(real_execute)
    os.system(real_execute)
