///week13-3.cpp
///��[����۰��k]�䵪��(�̤j���]��)
#include <stdio.h>
int gcd(int a, int b)///�Q��[��ܩI�s�禡]�ѥ�
{///�Ѥja, �ѤG b
    printf("�Ѥja: %d �ѤGb: %d ", a, b);///�L�X�L�{
    if(a==0) return b;///�J��0�A�t�@��O����
    if(b==0) return a;
    return gcd(b, a%b);
}///�ѤG�ܦѤj�A�ѤT�ܦѤG
int main()
{
    printf("�п�J2�ӼƦr(ex.  51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("�����̤j���]��:%d\n", ans);
}
