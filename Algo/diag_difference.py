'''
https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

Given a square matrix, calculate the absolute difference between the sums of its diagonals.
For example, the square matrix arr[][]  is shown below:
1 2 3
4 5 6
9 8 9

The left-to-right diagonal = 1+5+9=15. 
The right to left diagonal = 3+5+9=17.
 Their absolute difference is |15-17|=2   return 2 .
'''
def diagonalDifference(arr):
    # Write your code here 
    p=0
    s=0
    for i in range(len(arr)):
        for j in range(len(arr)):
            if(i==j):
                p=p+arr[i][j]
            if(i+j==len(arr)-1):
                s=s+arr[i][j]
            
    return abs(p-s)









