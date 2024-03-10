Selection Sort: arr[j] > arr[min]   
Insertion Sort: j > 0 and arr[j-1] > arr[j]   
Bubble Sort: arr[j] > arr[j+1]   

quicksort:  
paritioning conditions:   
pivot can be any element.   
outer while loop (i < j)   
  inner while loop1 with pivot always on right hand side: (arr[i] <= pivot && i >= high-1)    
    increment i   
  inner loop1 end   
     
  inner while loop2 with pivot always on right hand side: (arr[j] > pivot && j <= low+1)    
    decrement j   
  inner loop2 end   
  
  if condition (i < j)   
    swap(arr[i], arr[j])   
end of outer loop   
   
recursive calls for quick sort:   
   
while(low < high)   
  int parition_index = partition(arr, low, high)   
  quicksort(arr, low, paritition-1)   
  quicksort(arr, parition+1, high)   
end while   
