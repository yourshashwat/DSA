<h2>Aggressive Cows</h2>

<p><strong>Difficulty:</strong> Moderate</p>


<h3>Problem Statement</h3>

<p>
You are given an array <code>arr</code> consisting of <code>n</code> integers which denote the position of a stall.
</p>

<p>
You are also given an integer <code>k</code> which denotes the number of aggressive cows.
</p>

<p>
You are given the task of assigning stalls to <code>k</code> cows such that the minimum distance between any two of them is the maximum possible.
</p>

<p>
Print the maximum possible minimum distance.
</p>

<h4>Example:</h4>

<pre>
Input: n = 3, k = 2
arr = {1, 2, 3}

Output: 2

Explanation:
The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}.
Here the distance between cows is 2.
</pre>

<h3>Detailed explanation (Input/output format, Notes, Images)</h3>

<h4>Sample Input 1:</h4>
<pre>
6 4
0 3 4 7 10 9
</pre>

<h4>Sample Output 1:</h4>
<pre>
3
</pre>

<p><strong>Explanation to Sample Input 1:</strong><br>
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}.
Here distances between cows are 3, 4 and 3 respectively.
</p>

<h4>Sample Input 2:</h4>
<pre>
5 2
4 2 1 3 6
</pre>

<h4>Sample Output 2:</h4>
<pre>
5
</pre>

<h4>Expected Time Complexity:</h4>
<p>Can you solve this in <code>O(n * log(n))</code> time complexity?</p>

<h4>Constraints:</h4>
<pre>
2 <= n <= 10^5
2 <= k <= n
0 <= arr[i] <= 10^9
</pre>

<p><strong>Time Limit:</strong> 1 sec.</p>
