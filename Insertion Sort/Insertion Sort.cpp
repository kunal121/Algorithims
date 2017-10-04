#include<iostream>
using namespace std;
int main()
{
    int arr[100],num,temp,j;
    cout << "Enter the number of elements" << endl;
    cin >> num;
    cout << "Enter the elements" << endl;
    for(int i=0;i<num;i++){ // Entering the number
        cin >> arr[i];
    }
    for(int i=1; i<num-1;i++){
        temp = arr[i];
        j = i-1;
        while((temp<arr[j]) && (j>=0)){ // Number of comparison.
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp; //Insert at its proper position.
        cout << "Pass " << i << " : "; // Print the number of passes.
            for(int i=0;i<num;i++){
                cout << arr[i] << " "; // Print the array element
            }
        cout << endl;
    }
}
