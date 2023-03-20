#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
{
  int i, j, k, n, m;
  cout << "Enter the number of items in the 1st array:" << "\n";
  cin >> n;
  int *arr1 = new int (n);
  cout << "Enter " << n << " items" << endl;
  for (i = 0; i < n; i++)
    {
      cin >> arr1[i];
    }

  cout << "\nYou entered: ";
  for (i = 0; i < n; i++)
    {
      cout << arr1[i] << " ";
    }

  cout << "\nEnter the number of items in the 2nd array:" << "\n";
  cin >> m;
  int *arr2 = new int (m);

  cout << "\nEnter " << m << " items" << endl;
  for (j = 0; j < m; j++)
    {
      cin >> arr2[j];
    }

  cout << "\nYou entered: ";
  for (j = 0; j < n; j++)
    {
      cout << arr2[j] << " ";
    }


  int *arr3 = new int (m + n);
  for (i = 0; i < n; i++)
    {
      arr3[i] = arr1[i];
    }

  for (i = 0, j = n; i < m, j < n + m; i++, j++)
    {
      arr3[j] = arr2[i];
    }
    
    free(arr1);
    free(arr2);
  cout << "\nThe final merged array is :" ;
    for (i = 0; i < m + n; i++)
    {
      cout << arr3[i] << " ";
    }

  return 0;
}
