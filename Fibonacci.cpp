// 题目链接： https://www.nowcoder.com/practice/c6c7742f5ba7442aada113136ddea0c3


// 方法一：递归  -- 牛客测试运行时间 541ms 
// 空间 O(1)、时间 O(2^n) 
int Fibonacci(int n) 
{
    if (n == 0 || n == 1)
    	return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// 方法二：动态规划  -- 牛客测试运行时间 3ms
// 空间 O(n)、时间 O(n)
// 动态规划的思想就是利用额外空间将子问题的解保存起来，避免重复计算；典型的用空间换取时间 
int Fibonacci(int n) {
    vector<int> F(n + 1, 0);    // n从0开始，所以初始化个数为n+1
    F[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
} 
