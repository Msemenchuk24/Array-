#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));

	//¹1
	//const int size = 7;

	//int count = 0;
	//int arr[size];
	//
	//for (int i = 0; i < size; i++) {
	//	cout << "arr[" << i << "]=";
	//	cin >> arr[i];
	//}
	//cout << "Your array->";
	//for (int i = 0; i < size; i++) {

	//	cout << arr[i] << " ";
	//	if (arr[i] % 3 == 0) {
	//		count++;

	//	}
	//	
	//}
	//cout << " Reverse array->";
	//for (int i = size-1; i >= 0; i--) {
	//	cout << arr[i] << " ";
	//	
	//}
	//cout << endl;

	//cout << "How much numbers is divided on 3 without rest: " << count << endl;


	//¹2

	//const int size = 5;

	//int arr[size] = { -35,43,-2,-4,2 };
	//

	//for (int i = 0; i < size; i++) {
	//	if (arr[i] < 0) {
	//		
	//		arr[i] = -arr[i];
	//		cout << arr[i] << " "; 
	//	}
	//	else if (arr[i]>0) {
	//		cout << arr[i] << " ";
	//	}
	//}
	//


	//¹3

	//const int size = 10;

	//int arr[size];
	//double average = 0;
	//double sum = 0;

	//cout << "Marks students:";
	//for (int i = 0; i < size; i++) {
	//	arr[i] = rand() % 12 + 1;
	//	cout << arr[i] << " ";


	//	sum += arr[i];
	//	average = sum / 10;

	//}
	//cout << endl;
	//cout << "Average marks in class " << average;

	//¹4

	//int arr[10]{ 0,1,2,3,4,5,6,7,8,9};

	//for (int i = 0; i < 10; i++) {

	//	cout << arr[i] << endl;

	//}

	//¹5

	//int arr[10]{1,2,3,4,5,6,7,8,9,10};

	//for (int i = 0; i < 10; i++) {

	//	cout << arr[i] << endl;

	//}


	//#6

	//const int size = 30;

	//int arr[size];
	//int stepin = 1;	

	//arr[0] = 1;

	//for (int i = 0; i < 30; i++) {
	//	

	//	stepin *= 2;
	//	arr[i] = stepin;


	//	cout << arr[i] << endl;
	//}
	


    //¹7

 //   const int size = 30;

	//int fib[size];

	//fib[0] = 1;
	//fib[1] = 1;

	//for (int i = 2; i < size; i++)
	//{
	//	fib[i] = fib[i - 1] + fib[i - 2];

	//
	//}
	//for (int i = 0; i < size; i++) {

	//	cout << fib[i] << endl;
	//}



	//¹8

	//const int size = 7;
	//
	//int arr[size];
	//
	//int max = 0;
	//int min = 0;
	//int temp = 0;
	//int minNumb = 0;
	//int maxNumb = 0;
	//cout << "Your array: ";
	//for(int i=0; i < size; i++)
	//{	
	//	min = arr[0];
	//	arr[i] = rand() % 15;
	//	cout << arr[i]<<" ";
	//	
	//

	//}
	//for (int i = 0; i < size; i++) {

	//	if (arr[i] < min) {

	//		min = arr[i];
	//		minNumb = i;
	//	}

	//	if (arr[i] > max) {

	//		max = arr[i];
	//		maxNumb = i;
	//	}
	//}
	//cout << endl;
	//cout << "Minimal number in array - " << min << endl;
	//cout << "Maximal number in array - " << max << endl;
	// 
	//temp = min;
	//arr[minNumb] = max;
	//arr[maxNumb] = temp;

	//cout << "Array with reshuffle: ";
	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << " ";
	//}


	//¹9
	
	//int arr[7]{13,3,5,0,4,6,9};
	//int sum = 0;

	//for(int i=0;i<7;i++)
	//{
	//	cout << arr[i] << " ";
	//	if (arr[i] == 0) {
	//		sum = 0;
	//	}
	//	else {  
	//		sum += arr[i];
	//	}

	//}
	//cout << endl;
	//cout << "Suma after 0 - " << sum << endl;



	//¹1.1

	//const int size = 10;

	//int arr[size];
	//int sum=0;

	//cout << "Your array" << endl;
	//for (int i = 0; i < size; i++) {

	//	arr[i] = rand() % 15;
	//	cout << arr[i] << endl;
	//	
	//}
	//cout << "Odd number < 10: ";
	//for (int i = 0;i < size;i++)
	//{
	//	if (arr[i] % 2 != 0 && arr[i] < 10) {
	//		
	//		cout <<arr[i]<<" ";
	//		sum += arr[i];
	//		
	//	}
	//	
	//}
	//cout << "Suma odd numbers < 10 = " << sum << endl;

   //#1.2

   //const int size = 5;

   //int arr[size]{ 1,2,3,4,5 };
   //int temp;

   //temp = arr[size - 1];

   //for(int i = size-2;i >= 0;i--)
   //{
	  // arr[i + 1] = arr[i]; 
   //}
   //cout << endl;
   //arr[0] = temp;
   //for (int i = 0; i < size; i++) {

	  // cout << arr[i] << " ";
   //}

   //¹1.3

   /*const int size1 = 10;
   const int size2 = 10;


   int A[size1];
   int B[size2];
   int sumA = 0;
   int sumB = 0;
   int minA = 0;
   int maxA = 0;
   int minB = 0;
   int maxB = 0;

   cout << "Array A" << endl;
   for (int i=0; i < size1; i++) 
   {
	   A[i] = rand() % 10;
	   cout << A[i] << " ";
	   sumA += A[i];
	   if (i == 0) {
		   minA = A[i];
		   maxA = A[i];
	   }
	   else if(maxA<A[i]){
		   maxA = A[i];
	   }
	   else if (minA > A[i]) {
		   minA = A[i];
	   }

   }
   cout << endl;
   cout << "Array B" << endl;
   for (int j = 0; j < size2; j++)
   {
	   B[j] = rand() % 10;

	   cout << B[j] << " ";
	   sumB += B[j];
	   if (j == 0) {
		   minB = B[j];
		   maxB = B[j];
	   }
	   else if (maxB < B[j]) {
		   maxB = B[j];
	   }
	   else if (minB > B[j]) {
		   minB = B[j];
	   }

   }

 
   cout << endl;
   cout << "Sum first array: " << sumA << "\n"
	   << "Sum second array: " << sumB << endl;
   cout << "Min for array1 - " << minA << " and max - " << maxA << endl;
   cout << "Min for array2 - " << minB << " and max - " << maxB << endl;

   cout << "If summa numbers on array A more than array B - "
	   <<"we have this array or  reversed:" << endl;
   for (int i = 0; i < size1; i++) {
	   if (sumA > sumB) {
	
		   cout << A[i] << " ";
	   }

   }
   for (int j = 0; j < size1; j++) {
	   if (sumA < sumB) {
		
		   cout << B[j] << " ";
	   }*/

 /*  }*/


}







