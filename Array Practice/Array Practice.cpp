// Array Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//int main()
//{
//
//	int ages[10] = { 5,7,9,14,15,17,18,19,21,23 };
//	float temps[7] = { 14.7,16.3,18.43,21.09,17.9,18.76,26.7 };
//	char alpha[8] = { 'J','B','L','A','*','$','H','M' };
//
//
//	return 0;
//}






//int main()
//{
//
//	const int NUM_FISH = 20;
//	int fish[NUM_FISH];
//	int counter1;
//	int counter = 0;
//	
//
//	for (counter1 = 0; counter1 < 20; counter1++)
//	{
//		cout << "How many fish did fisherman number " << counter1 + 1 << " catch?" << endl;
//		cin >> fish[counter1];
//	}
//
//	for (int fishCaught : fish)
//	{
//		cout << "Fisher man " << counter + 1 << " caught " << fishCaught << " fish! " << endl;
//		counter++;
//	}
//	cout << fish;
//
//	return 0;
//}





//Assume that the array arr has been declare.In addition, assume that ARR_SIZE has been
//defined to be an integer that equals the number of elements in arr.Write a statement
//that assigns to x the value of the next to last element of the array(x has already
//	been decalred)
//
//	Answer
//
//	x = arr[ARR_SIZE - 2];
//
//
//----------------------------------
//
//Given that an array of int named a has been decalred, assign 3 to its first element.
//
//Answer
//a[0] = 3;
//
//
//
//
//----------------------------------------
//Assume that an array named a, containing exactly five intgers has been declaredand
//initialized.Write a single statement that adds ten to the value stored in the
//first element of the array.
//
//answer
//
//a[0] = a[0] + 10;
//
//
//-------------------------------
//
//Given that an array of int named a with 30 elemtns has been declared, assign 5 to its
//last element.
//
//Answer
//
//a[29] = 5;
//
//
//---------------------------------------------- -
//
//
//Given that an array of int named a has been declared with 12 elements and that the
//integer variable k holds a value between 0 and 6. Assign 9 to the element just after
//a[k].
//
//
//Answer
//
//a[k + 1] = 9;
//
//----------------------------------------------------------
//
//Given that an array of int named a has been declared with 12 elements and that the
//integer variables k gold a value between 2 and 8. Assign 22 to the element just before
//a[k].
//
//
//answer
//
//a[k - 1] = 22;
//
//
//--------------------------------------------------------
//
//
//Assume that an array of integers named a that contains exactly five elements has
//been declaredand initalized.Write a single statement that assigns a new value
//to the first element of the array.This new value should be equal to twice the
//value stored in the last element of the array.Do NOT modify any values in the array
//other than the first element.
//
//answer
//
//
//a[0] = (a[4] * 2);
//
//
//--------------------------------------------------
//
//An array of int named a that contains exactly five elements has already been declared
//and initalized.In addition, an int variable j has also been decaredand initalized
//to a value somewhere between 0 and 3. Write a single statement that assigns a new value
//to the element of the array indexed by j.This new value should be equal to the value
//stored in the next element of the array(i.e.the element after the element indexed
//	by j).Do NOT modify any other elements of the array!
//
//	answer
//
//
//	a[j] = ((a[j + 1]) * 2);
//
//
//
//----------------------------------------------------------
//
//Write a statement to declareand initialize an array of int named denominations that contains exactly six elements.
//
//Your declaration statement should initialize the elements of the array to the following values : 1, 5, 10, 25, 50, 100. (The value 1 goes into the first element; the value 100 to the last.)
//
//answer
//
//int denominations[6] = { 1,5,10,25,50,100 };
//
//----------------------------------------------------------------------------


//Given an array temps of double, containing temperature data, and an int variable n that contains the number of elements in temps :
//
//Compute the average temperatureand store it in a variable called avgTemp.
//
//Besides temps, n, and avgTemp, you may use only two other variables -- an int variable kand a double variable total, which have been declared.
//
//	answer
//
//
//
//total = 0;
//
//for (k = 0; k < n; k++)
//{
//	total += temps[k];
//}
//avgTemp = total / n;

//--------------------------------------------------------------------------------

//An array of integers named parkingTickets has been declaredand initialized to the number of parking tickets given out by the city police each day since the beginning of the current year. (Thus, the first element of the array contains the number of tickets given on January 1; the last element contains the number of tickets given today.)
//
//A variable named ndays has been declaredand initialized to hold the size of the array. (Thus, if today were January 18, ndays would have the value 18; if today were February 3, ndays would have the value 34.)
//
//In addition, a variable named mostTickets has been declared, along with a variable k.
//
//Without using any additional variables, and without changing the values of ndays or the elements of the parkingTickets array, write some code that results in mostTickets containing the largest value found in parkingTickets.
//
//Answer
//
//mostTickets = parkingTickets[0];
//for (k = 1; k < ndays; k++)
//{
//	if (parkingTickets[k] > mostTickets)
//	{
//		mostTickets = parkingTickets[k];
//	}
//}
//
//----------------------------------------------------------------------------------------------------

//int main()
//{
//
//	/*int myArray[100] = { 1, 1 };
//	for (int i = 2; i < 100; i++) {
//		myArray[i] = myArray[i - 1] + myArray[i - 2];
//	}
//
//	cout << myArray[5];
//
//	return 0;*/
//
//
//
//	int myArray[100] = { 1, 1 };
//	for (int i = 2; i < 100; i++)
//	{
//		myArray[i] = myArray[i - 1] + myArray[i - 2];
//	}
//
//	cout << myArray[4];
//
//	}

int main()
{
	cout << "--------Teams--------" << endl;
	ofstream kyleFile;
	kyleFile.open("tuna.txt");
	
	kyleFile << "Thi s is myf file.\n";
	kyleFile.close();


	return 0;
}

