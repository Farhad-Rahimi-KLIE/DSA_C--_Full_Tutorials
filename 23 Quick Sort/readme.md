There are mainly three steps in the algorithm:

1 - Choose a Pivot: Select an element from the array as the pivot. The choice of pivot can vary (e.g., first element, last element, random element, or median).

2 - Partition the Array: Rearrange the array around the pivot. After partitioning, all elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right. The pivot is then in its correct position, and we obtain the index of the pivot.

3 - Recursively Call: Recursively apply the same process to the two partitioned sub-arrays (left and right of the pivot).

4 - Base Case: The recursion stops when there is only one element left in the sub-array, as a single element is already sorted.