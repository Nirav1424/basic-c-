#include<iostream>
using namespace std;

bool isPosible(int arr[], int n, int m, int mid){

    int student = 1;
    int page = 0;
    for (int i = 0; i < n; i++)
    {

        if (page + arr[i] <= mid)
        {
            page += arr[i];
        }else{
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
        page = arr[i];
        }
    }
    return true;
}

    int
    main()
{
    int arr[4] = {10, 20, 30, 40};

    int s = 0,sum = 0;

    for (int i = 0; i < 4; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = (s + e) / 2;
    int ans = -1;

  while(s<=e){
      if (isPosible(arr, 4, 2, mid))
      {
          ans = mid;
          e = mid - 1;
      }
      else
      {
          s = mid + 1;
      }
      mid = (s + e) / 2;
  }
    cout << ans << endl;
    return 0;
}