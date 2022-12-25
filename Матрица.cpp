#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

const int M = 10; 


int main(int argc, char* argv[])
{
    int arr[M][N];

    srand(time(NULL));

   
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rand() % 10;
        }
    }

    int equals[N]; 

    int global_max = 0;
    int first_column = 0;

  
    for (int i = 0; i < N; i++) {
        int max = 0;

        
        for (int num = 0; num < 10; num++) {
            int temp_max = 0;

            for (int row = 0; row < M; row++) {
                if (arr[row][i] == num) {
                    temp_max++;
                }
            }

            if (temp_max > max)
                max = temp_max;
        }

        equals[i] = max;

     
        if (max > global_max) {
            global_max = max;
            first_column = i;
        }
    }

   
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++)
        cout << "--";

    cout << endl;

   
    for (int i = 0; i < N; i++)
        cout << equals[i] << " ";

    cout << endl;

    for (int i = 0; i < N; i++)
        cout << "--";

    cout << endl;

 
    cout << "MAX  " << global_max << endl;
    cout << "INDEX OF FIRST COLUMN  " << first_column << endl;

    _getch();

    return 0;
}