//Katie Ortiz - Homework #6 - CS 236 - 5/28/2021
#include "QuickSortHeader.h"

//Implementation of the insertionSort function
void InsertionSort(int *arrayCopy, int first, int last) {

	int i, j, k;

	for (i = first + 1; i < last + 1; i++) {
		j = arrayCopy[i];
		k = i - 1;

		while (k >= 0 && arrayCopy[k] > j) {
			arrayCopy[k + 1] = arrayCopy[k];
			k = k - 1;
		}

		arrayCopy[k + 1] = j;
	}
}


//Implementation for the quickSortFirstElement function to sort the arrays using the first element of the array
void quickSortFirstElement(int *randomizedArray, int first, int last){

	int pivotFirstElement = first; //This sets the pivot to the first element
	int head = first; 
	int temp, t2, t3;
	
	if (first < last){

		temp = randomizedArray[first];
		randomizedArray[first] = randomizedArray[pivotFirstElement];
		randomizedArray[pivotFirstElement] = temp;

		
		for (int i = first + 1; i <= last; i++){ //This will separate the array into upper and lower sub-lists    

			if (randomizedArray[i] <= randomizedArray[first]){

				head += 1;
			    t2 = randomizedArray[i];
				randomizedArray[i] = randomizedArray[head];
				randomizedArray[head] = t2;
			}
		}

		t3 = randomizedArray[first];
		randomizedArray[first] = randomizedArray[head];
		randomizedArray[head] = t3;
		pivotFirstElement = head;

		quickSortFirstElement(randomizedArray, first, pivotFirstElement - 1); //This will sort the left part of the sub-list
		quickSortFirstElement(randomizedArray, pivotFirstElement + 1, last); //This will sort the right part of the sub-list
	}
}


//Implementation of the quickSortFirstElementwithInsertionSort function that sorts the array using the first element of the array. When the size of sub-list reduces to less than 20, this will use the insertionSort function to sort the sub-list
void quickSortFirstElementwithInsertionSort(int *arr2, int first, int last) {

	int pivotFirstElement = first; //This sets the pivot to the first element
	int head = first;
	int temp, t2, t3;


	if (last - first < 19) { //Checks if the number of elements in the sub-list is less than 20 and then will call the insertionSort function to perform insertion sort

		InsertionSort(arr2, first, last);
	}


	else if (first < last) { //This will execute a quick sort if the number of elements in the sub-list is greater than 20

		temp = arr2[first];
		arr2[first] = arr2[pivotFirstElement];
		arr2[pivotFirstElement] = temp;

		for (int i = first + 1; i <= last; i++) { //This will separate the array into upper and lower sub-lists  

			if (arr2[i] <= arr2[first]) {
				head += 1;
				t2 = arr2[i];
				arr2[i] = arr2[head];
				arr2[head] = t2;
			}
		}

		t3 = arr2[first];
		arr2[first] = arr2[head];
		arr2[head] = t3;
		pivotFirstElement = head;

		quickSortFirstElementwithInsertionSort(arr2, first, pivotFirstElement - 1); //This will sort the left part of the sub-list
		quickSortFirstElementwithInsertionSort(arr2, pivotFirstElement + 1, last); //This will sort the right part of the sub-list
	}
}


//Implementation of the quickSortMedianElement function to sort the arrays using pivot as the median of the first, last, and middle elements of the array
void quickSortMedianElement(int *arr1, int first, int last){

	int middleElement = (first + last) / 2; //This will set the middleElement
	int pivotMedianElement = (first + last + middleElement) / 3; //This will set the pivot as the median element
	int head = first;
	int temp, t2, t3;

	if (first < last){

		temp = arr1[first];
		arr1[first] = arr1[pivotMedianElement];
		arr1[pivotMedianElement] = temp;
	   
		for (int i = first + 1; i <= last; i++){ //This will separate the array into upper and lower sub-lists  

			if (arr1[i] <= arr1[first]){

				head += 1;
				int t2 = arr1[i];
				arr1[i] = arr1[head];
				arr1[head] = t2;
			}
		}

		int t3 = arr1[first];
		arr1[first] = arr1[head];
		arr1[head] = t3;
		pivotMedianElement = head;
		
		quickSortMedianElement(arr1, first, pivotMedianElement - 1); //This will sort the left part of the sub-list
		quickSortMedianElement(arr1, pivotMedianElement + 1, last); //This will sort the right part of the sub-list
	}
}


//Implementation of the quickSortMedianElementwithInsertionSort function that sorts the array using the pivot as the median of the first, last, and middle elements of the array. When the size of sub-list is less than 20, this will use the insertionSort function to sort the sub-list
void quickSortMedianElementwithInsertionSort(int *arr3, int first, int last) {
	
	int middleElement = (first + last) / 2; //This will set the middleElement

	int pivotMedianElement = (first + last + middleElement) / 3; //This will set the pivot as the median element
	int head = first;
	int temp, t2, t3;

	if (last - first < 19){ //Checks if the number of elements in the sub-list is less than 20 and then will call the insertionSort function to perform insertion sort

		InsertionSort(arr3, first, last);
	}

	else if (first < last){

		temp = arr3[first];
		arr3[first] = arr3[pivotMedianElement];
		arr3[pivotMedianElement] = temp;
		 
		for (int i = first + 1; i <= last; i++){ //This will separate the array into upper and lower sub-lists 

			if (arr3[i] <= arr3[first]){

				head += 1;
				t2 = arr3[i];
				arr3[i] = arr3[head];
				arr3[head] = t2;
			}
		}

		t3 = arr3[first];
		arr3[first] = arr3[head];
		arr3[head] = t3;
		pivotMedianElement = head;
		
		quickSortMedianElementwithInsertionSort(arr3, first, pivotMedianElement - 1); //This will sort the left part of the sub-list
		quickSortMedianElementwithInsertionSort(arr3, pivotMedianElement + 1, last); //This will sort the right part of the sub-list
	}
}
