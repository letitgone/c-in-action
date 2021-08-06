cmake_minimum_required(VERSION 3.17)
project(c_in_action C)

set(CMAKE_C_STANDARD 99)

add_executable(first hello/first.c)

add_executable(input input/input.c)

add_executable(cypher1 control/cypher1.c)

add_executable(switch control/switch.c)

add_executable(echo io/echo.c)

add_executable(echo_eof io/echo_eof.c)

add_executable(swap1 pointer/swap1.c)

add_executable(swap3 pointer/swap3.c)

add_executable(day_mon2 array/day_mon2.c)

add_executable(designate array/designate.c)

add_executable(ptr_ops pointer/ptr_ops.c)

add_executable(array_data pointer/array_data.c)

add_executable(zippo1 pointer/zippo1.c)

add_executable(sum_arr1 pointer/sum_arr1.c)

add_executable(arf pointer/arf.c)

add_executable(test test/test.c)

add_executable(p_and_s string/p_and_s.c)

add_executable(repeat string/repeat.c)

add_executable(parta storage/parta.c)

add_executable(partb storage/partb.c)

add_executable(count io/count.c)
