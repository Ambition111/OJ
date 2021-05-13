// ��Ŀ���ӣ� https://www.nowcoder.com/practice/c6c7742f5ba7442aada113136ddea0c3


// ����һ���ݹ�  -- ţ�Ͳ�������ʱ�� 541ms 
// �ռ� O(1)��ʱ�� O(2^n) 
int Fibonacci(int n) 
{
    if (n == 0 || n == 1)
    	return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// ����������̬�滮  -- ţ�Ͳ�������ʱ�� 3ms
// �ռ� O(n)��ʱ�� O(n)
// ��̬�滮��˼��������ö���ռ佫������ĽⱣ�������������ظ����㣻���͵��ÿռ任ȡʱ�� 
int Fibonacci(int n) {
    vector<int> F(n + 1, 0);    // n��0��ʼ�����Գ�ʼ������Ϊn+1
    F[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
} 
