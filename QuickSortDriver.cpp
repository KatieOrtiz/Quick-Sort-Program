#include "QuickSortHeader.h"

int randomizedArray[ARRAYSIZE];
int arrCpy[ARRAYSIZE];
int main(){

	srand(time(NULL));
	char userSelection;
	int i;

	while (1){

		int arraySize;
	
		cout << "Enter array size: ";
		cin >> arraySize;
		cout << "\n";

	
		for (i = 0; i < arraySize; i++){

			randomizedArray[i] = rand() % 100000000 + 1; //This generates an array with a random 1000000 elements 
		}



		for (i = 0; i < arraySize; i++){
			arrCpy[i] = randomizedArray[i];  //This will make a copy of the randomized array so that it can be used within the quickSortFirstElement function
		}

		//This will find the sort time for quickSortFirstElement function
		clock_t startSortTime = clock(); //This holds the start time of the sort
		
		quickSortFirstElement(arrCpy, 0, arraySize - 1);

		clock_t endSortTime = clock(); //This holds the end time of the sort
		clock_t totalSortTime = (endSortTime - startSortTime); //This holds the total sort time for the quickSortFirstElementfunction

		cout << "Quick sort time, with pivot as the first element: " << (float)totalSortTime / CLOCKS_PER_SEC << "\n"; //This will output the total sort time for the quickSortFirstElement





		for ( i = 0; i < arraySize; i++){

			arrCpy[i] = randomizedArray[i];  //This will make a copy of the randomized array so that it can be used within the quickSortMedianElement function
		}

		//This will find the sort time for the quickSortMedianElement function
		startSortTime = clock(); //This holds the start time of the sort

		
		quickSortMedianElement(arrCpy, 0, arraySize - 1);

		endSortTime = clock(); //This holds the end time of the sort
		totalSortTime = (endSortTime - startSortTime); //This holds the total sort time for the quickSortMedianElement

		cout << "Quick sort time, with pivot median element: " << (float)totalSortTime / CLOCKS_PER_SEC << "\n"; //This will output the total sort time for the quickSortMedianElement






		for ( i = 0; i < arraySize; i++){
			arrCpy[i] = randomizedArray[i];  //This will make a copy of the randomized array so that it can be used within the quickSortFirstElementwithInsertionSort function
		}

	    //This will find the sort time for the quickSortFirstElementwithInsertionSort function
		startSortTime = clock(); //This holds the start time of the sort

		quickSortFirstElementwithInsertionSort(arrCpy, 0, arraySize - 1);

		endSortTime = clock(); //This holds the end time of the sort
		totalSortTime = (endSortTime - startSortTime); //This holds the total sort time for the quickSortMedianElement

		cout << "Quick sort and insertion sort time, with pivot as the first element: " << (float)totalSortTime / CLOCKS_PER_SEC << " \n"; //This will output the total sort time for the quickSortFirstElementwithInsertionSort




		for ( i = 0; i < arraySize; i++){
			arrCpy[i] = randomizedArray[i];  //This will make a copy of the randomized array so that it can be used within the quickSortMedianElementwithInsertionSort function
		}

	    //This will find the sort time for the quickSortMedianElementwithInsertionSort function
		startSortTime = clock(); //This holds the start time of the sort

		quickSortMedianElementwithInsertionSort(arrCpy, 0, arraySize - 1);

		endSortTime = clock(); //This holds the end time of the sort
		totalSortTime = (endSortTime - startSortTime); //This holds the total sort time for the quickSortMedianElementwithInsertionSort

		cout << "Quick sort and insertion sort time, with pivot median element: " << (float)totalSortTime / CLOCKS_PER_SEC << " \n";  //This will output the total sort time for the quickSortMedianElementwithInsertionSort


		cout << "\nWould you like to enter another array size (Y/N) "; //This asks if the user would like to enter another array size
		cin >> userSelection;

		if (userSelection == 'N' || userSelection == 'n'){

			break;
		}

		else{

			continue;		
		}
	}

	system("pause");
	return 0;
}
