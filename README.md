<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/NwGzC3ck-xCcOmVIIbZn9Q" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>At least four different sorting algorithms</li>
    <li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
    <li>How to select the best sorting algorithm for a given input</li>
    <li>What is a stable sorting algorithm</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like&nbsp;<em>printf, puts, &hellip;</em> is totally forbidden.</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>sort.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
    <li>A list/array does not need to be sorted if its size is less than 2.</li>
</ul>

<p><br></p>
<p><img src="https://res.cloudinary.com/practicaldev/image/fetch/s--Or0wtXdq--/c_imagga_scale,f_auto,fl_progressive,h_500,q_auto,w_1000/https://dev-to-uploads.s3.amazonaws.com/i/nicz3zbgcue7sjw6hrfo.jpg"><br></p>
<p><br></p>
<h2>Some Common Sorting Algorithms</h2>
<p>Some of the most common sorting algorithms are:</p>
<ul>
    <li>Selection sort</li>
    <li>Bubble sort</li>
    <li>Insertion sort</li>
    <li>Merge sort</li>
    <li>Quick sort</li>
    <li>Heap sort</li>
    <li>Counting sort</li>
    <li>Radix sort</li>
    <li>Bucket sort</li>
</ul>
<p> - Bubble sort - </p>
<ul>
    <li>Prototype:&nbsp;<code>void bubble_sort(int *array, size_t size);</code></li>
    <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file&nbsp;<code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>
<ul>
    <li>in the best case</li>
    <li>in the average case</li>
    <li>in the worst case</li>
</ul>
<p>- Insertion sort -</p>
<ul>
    <li>Prototype:&nbsp;<code>void insertion_sort_list(listint_t **list);</code></li>
    <li>You are not allowed to modify the integer&nbsp;<code>n</code> of a node. You have to swap the nodes themselves.</li>
    <li>You&rsquo;re expected to print the&nbsp;<code>list</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file&nbsp;<code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>
<ul>
    <li>in the best case</li>
    <li>in the average case</li>
    <li>in the worst case</li>
</ul>
<h3>- Selection sort -</h3>
<ul>
    <li>Prototype:&nbsp;<code>void selection_sort(int *array, size_t size);</code></li>
    <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file&nbsp;<code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>
<ul>
    <li>in the best case</li>
    <li>in the average case</li>
    <li>in the worst case</li>
</ul>
<p>- Quick sort -</p>
<ul>
    <li>Prototype:&nbsp;<code>void quick_sort(int *array, size_t size);</code></li>
    <li>You must implement the&nbsp;<code>Lomuto</code> partition scheme.</li>
    <li>The pivot should always be the last element of the partition being sorted.</li>
    <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file&nbsp;<code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>
<ul>
    <li>in the best case</li>
    <li>in the average case</li>
    <li>in the worst case</li>
</ul>
Prototype: void shell_sort(int *array, size_t size);
You must use the following sequence of intervals (a.k.a the Knuth sequence):
n+1 = n * 3 + 1
1, 4, 13, 40, 121, ...
You’re expected to print the array each time you decrease the interval (See example below).
No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap
<h3>- Shell sort - Knuth Sequence -&nbsp;</h3>
<p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.hbtn.io/rltoken/n1R5L9_ySu3ZE7JqIqIM0Q" target="_blank" title="Shell sort">Shell sort</a> algorithm, using the&nbsp;<code>Knuth sequence</code></p>
<ul>
    <li>Prototype:&nbsp;<code>void shell_sort(int *array, size_t size);</code></li>
    <li>You must use the following sequence of intervals (a.k.a the Knuth sequence):<ul>
            <li><code>n+1 = n * 3 + 1</code></li>
            <li><code>1, 4, 13, 40, 121, ...</code></li>
        </ul>
    </li>
    <li>You&rsquo;re expected to print the&nbsp;<code>array</code> each time you decrease the interval (See example below).</li>
</ul>
<p><strong>No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap</strong></p>
<h3>- Cocktail shaker sort -</h3>
<p>Write a function that sorts a doubly linked list of integers in ascending order using the&nbsp;<a href="https://intranet.hbtn.io/rltoken/zzJDEeipdoUtJ4dnoKPJeQ" target="_blank" title="Cocktail shaker sort">Cocktail shaker sort</a> algorithm</p>
<ul>
    <li>Prototype:&nbsp;<code>void cocktail_sort_list(listint_t **list);</code></li>
    <li>You are not allowed to modify the integer&nbsp;<code>n</code> of a node. You have to swap the nodes themselves.</li>
    <li>You&rsquo;re expected to print the&nbsp;<code>list</code> after each time you swap two elements (See example below)</li>
</ul>
<p>Write in the file&nbsp;<code>101-O</code>, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:</p>
<ul>
    <li>in the best case</li>
    <li>in the average case</li>
    <li>in the worst case</li>
</ul>
<p><br></p>
