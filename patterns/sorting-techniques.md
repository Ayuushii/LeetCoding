# Sorting Techniques


### Selection Sort

- Most intuitive, inplace sorting algorithm.
- Involves selecting the minimum from an unsorted array and placing it at it’s appropriate position in another sorted array (Takes n space for auxiliary array)
- In place - Select the minimum from unsorted part of the array and swap it with it’s appropriate position.
- Complexity - O(n^2)
- [https://youtu.be/GUDLRan2DWM?si=5cFq3KbVRkTIqW-I](https://youtu.be/GUDLRan2DWM?si=5cFq3KbVRkTIqW-I)

### Bubble Sort

- Inplace, stable sorting algorithm
- Swap every consecutive places in array if a[i] > a[i+1]
- Swapping continuously creates a bubble around the largest element in the unsorted part of array and makes it move to it’s appropriate position
- Optimization - No need to swap the sorted part of array in easy span.
- Optimization - Take a flag and unset it if no swaps are made in a span, that means the array is fully sorted
- Best Case - O(n) Fully sorted array needs only span to find out
- Average Case - O(n^2)
- Worst Case - O(n^2)
- [https://youtu.be/Jdtq5uKz-w4?si=8osPwN_4HRBr_pnI](https://youtu.be/Jdtq5uKz-w4?si=8osPwN_4HRBr_pnI)

### Insertion Sort

- Better than Selection, Bubble in practical scenarios. Also an intuitive sorting technique
- Select the elements one by one from unsorted subset and place them in their appropriate position by moving the other elements in sorted subset.
- Starts with only 1st element in sorted subset. Pick next element, compare with sorted (here only 1st element), move the element if needed to place this in its place.
- Involves SHIFTING and INSERTING
- Best Case - O(n) Fully sorted array needs only span to find out
- Average Case - O(n^2)
- Worst Case - O(n^2)
- [https://youtu.be/i-SKeOcBwko?si=X5p1shJiZMs9g0_w](https://youtu.be/i-SKeOcBwko?si=X5p1shJiZMs9g0_w)
