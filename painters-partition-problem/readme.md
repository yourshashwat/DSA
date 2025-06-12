<h2>Painter's Partition Problem</h2>

<p><strong>Difficulty:</strong> Moderate</p>

<p><strong>Asked in companies</strong></p>

<h3>Problem statement</h3>

<p>
Given an array/list of length <code>n</code>, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some <code>k</code> numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
</p>

<p>
You are supposed to return the area of the minimum time to get this job done of painting all the <code>n</code> boards under a constraint that any painter will only paint the continuous sections of boards.
</p>

<h4>Example:</h4>

<pre>
Input: arr = [2, 1, 5, 6, 2, 3], k = 2
Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time.
Thus both painters will paint all the boards in max(8,11) = 11 units of time.
It can be shown that all the boards can't be painted in less than 11 units of time.
</pre>

<h3>Detailed explanation (Input/output format, Notes, Images)</h3>

<h4>Sample Input 1:</h4>
<pre>
4 2
10 20 30 40
</pre>

<h4>Sample Output 1:</h4>
<pre>
60
</pre>

<p><strong>Explanation For Sample Input 1:</strong><br>
In this test case, we can divide the first 3 boards for one painter and the last board for the second painter.
</p>

<h4>Sample Input 2:</h4>
<pre>
2 2
48 90
</pre>

<h4>Sample Output 2:</h4>
<pre>
90
</pre>

<h4>Expected Time Complexity:</h4>
<p>Try to do this in <code>O(n*log(n))</code>.</p>

<h4>Constraints:</h4>
<pre>
1 <= n <= 10^5
1 <= k <= n
1 <= arr[i] <= 10^9
</pre>

<p><strong>Time Limit:</strong> 1 sec.</p>

