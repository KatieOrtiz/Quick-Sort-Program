//Katie Ortiz - Homework #6 - CS 236 - 5/28/2021
#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>
#define ARRAYSIZE 100000000

using namespace std;

//Function declarations
void InsertionSort(int *arrayCopy, int first, int last);
void quickSortFirstElement(int *randomizedArray, int first, int last);
void quickSortFirstElementwithInsertionSort(int *arr2, int first, int last);
void quickSortMedianElement(int *arr1, int first, int last);
void quickSortMedianElementwithInsertionSort(int *arr3, int first, int last);

