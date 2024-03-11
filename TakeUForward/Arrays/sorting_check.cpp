bool isSorted(vector<int>& arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr {9,5,3,4,6,7,8,2,1};  
    int n = arr.size();
    cout << isSorted(arr, n) << endl;
  
    return 0;
}
