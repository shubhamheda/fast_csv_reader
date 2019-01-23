# fast_csv_reader
Written in C++ and use by Python

Program follows all necessary functions require for faster access of csv data in python and same code of fast csv written for ruby language

Compile c++ code from terminal

```bash
g++ -I /usr/include/python2.7 -fpic -c -o main.o main.cpp

g++ -o fast_csv_reader.so -shared main.o -lboost_python -lpython2.7

```