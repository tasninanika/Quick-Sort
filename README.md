﻿# Quick-Sort Algorithm

Step 1: Prompt the user to input the size of the array (n).

Step 2: Declare an array of size n.

Step 3: Loop through the array from i = 0 to n-1 and input each element.

Step 4: If l < h, perform the following:

    Call the partition function with parameters arr, l, and h. Store the returned index in j.

    Recursively call quickSort(arr, l, j-1) to sort the left subarray.

    Recursively call quickSort(arr, j+1, h) to sort the right subarray.

Step 5: Set pivot = arr[l], i = l, and j = h.

Step 6: Repeat the following until i < j:

    Increment i until arr[i] > pivot or i == h.

    Decrement j until arr[j] <= pivot.

    If i < j, swap arr[i] and arr[j].

Step 7: After exiting the loop, swap arr[l] with arr[j].

Step 8: Return j as the partition index.

Step 9: After the quicksort process, loop through the array from i = 0 to n-1 and print each element.

Step 10: Terminate the program.
