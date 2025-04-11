#  C - Sorting algorithms & Big O

## Description
What you should learn from this project:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

---

### [0. Bubble sort](./0-bubble_sort.c)
* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

<img src="https://user-images.githubusercontent.com/68792144/138988557-4c0835e3-faed-4af2-a653-b78a0cd581fb.gif"  height="200" width="600" >




### [1. Insertion sort](./1-insertion_sort_list.c)
* Insertion sort is the sorting mechanism where the sorted array is built having one item at a time. The array elements are compared with each other sequentially and then arranged simultaneously in some particular order. The analogy can be understood from the style we arrange a deck of cards.

<img src="https://user-images.githubusercontent.com/68792144/138990017-b85001d6-d1ff-4fd9-906f-65dd751bdf81.gif"  height="300" width="500" >


### [2. Selection sort](./2-selection_sort.c)
* The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
1. The subarray which is already sorted. 
2. Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

<img src="https://user-images.githubusercontent.com/68792144/138990153-4959a42b-6f25-43a8-b6b7-1b0d6967b598.gif"  height="200" width="600" >


### [3. Quick sort](./3-quick_sort.c)
* Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

1. Always pick first element as pivot.
2. Always pick last element as pivot (implemented below)
3. Pick a random element as pivot.
4. Pick median as pivot.

<img src="https://user-images.githubusercontent.com/68792144/138990246-63212284-00ad-4a28-9dab-43560cf5d46d.gif"  height="340" width="600" >

### [4. Shell sort - Knuth Sequence](./100-shell_sort.c)
* ShellSort is mainly a variation of Insertion Sort. In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of shellSort is to allow exchange of far items. In shellSort, we make the array h-sorted for a large value of h. We keep reducing the value of h until it becomes 1. An array is said to be h-sorted if all sublists of every h’th element is sorted.

<img src="https://user-images.githubusercontent.com/68792144/138990612-ddb0b3be-4d3c-4304-8632-5d6b9b71853a.gif"  height="480" width="600" >

### [5. Cocktail shaker sort](./101-cocktail_sort_list.c)
* Cocktail Sort is a variation of Bubble sort. The Bubble sort algorithm always traverses elements from left and moves the largest element to its correct position in first iteration and second largest in second iteration and so on. Cocktail Sort traverses through a given array in both directions alternatively. 

<img src="https://user-images.githubusercontent.com/68792144/138990691-1087bb94-bbb8-447e-ac96-e7340da1b2b4.gif"  height="225" width="600" >

### [6. Counting sort](./102-counting_sort.c)
* Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.

<img src="https://user-images.githubusercontent.com/68792144/138990759-5f0b7ef4-2237-4877-bdf8-192807448ddc.gif"  height="367" width="600" >

### [7. Merge sort](./103-merge_sort.c)
* The merge sort algorithm is a stable external sort algorithm based on the divide and rule technique.
The idea of ​​the merge-sort algorithms is to divide the array in half over and over again until each piece is only one element long. Then those elements are put back together (shuffled) in sort order.

<img src="https://user-images.githubusercontent.com/68792144/138994932-5cf8300c-c6be-490f-9e96-160b3a8c79d8.gif"  height="360" width="600" >

### [8. Heap sort](./104-heap_sort.c)
* Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements.

<img src="https://user-images.githubusercontent.com/68792144/138990865-cba8b7cc-8782-4105-ad62-0e43d0e36fd5.gif"  height="337" width="600" >

### [9. Radix sort](./105-radix_sort.c)
* Radix sort is a sorting algorithm that sorts the elements by first grouping the individual digits of the same place value. Then, sort the elements according to their increasing/decreasing order.

<img src="https://user-images.githubusercontent.com/68792144/138990910-0b8fc0b2-9ed9-4873-afa2-a28f1ebab330.gif"  height="337" width="600" >

### [10. Bitonic sort](./106-bitonic_sort.c)
* Bitonic sort is parallel sorting algorithm that performs comparisons. Number of comparisons done by Bitonic sort are more compared to other popular sorting algorithms. This sort is better for parallel implementation as user always compares the elements in a predefined sequence and this sequence of comparison does not actually depend upon data. And hence this bitonic sort is basically suitable for hardware implementations.

<img src="https://user-images.githubusercontent.com/68792144/138990986-6b76762c-8321-4259-b830-d946f1d3cdd1.png"  height="264" width="600" >

### [11. Quick Sort - Hoare Partition scheme](./107-quick_sort_hoare.c)
* Hoare's Partition Scheme works by initializing two indexes that start at two ends, the two indexes move toward each other until an inversion is (A smaller value on the left side and greater value on the right side) found. When an inversion is found, two values are swapped and the process is repeated.

<img src="https://user-images.githubusercontent.com/68792144/138991063-91289788-70fd-4a26-9654-93240d32df6f.gif"  height="240" width="600" >

### [Big O notation](./1000-sort_deck.c)
* Big O Notation is a way to measure an algorithm’s efficiency. It measures the time it takes to run your function as the input grows. Or in other words, how well does the function scale.


<img src="https://miro.medium.com/max/724/1*5VctXSES5PrSk-5lPb_CCg.jpeg"  height="400" width="600" >

<img src="https://miro.medium.com/max/371/1*WBYUz6Lh2Z21DQnEk-MWFQ.png"  height="595" width="600" >
---

## Author
* **Fahad Alonazi** - [Froot1](https://github.com/Froot1) # sorting_algorithms
# sorting_algorithms1
