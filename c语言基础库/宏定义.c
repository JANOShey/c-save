#include<stdio.h>
#define aaa printf
//����һ���µĺ� aaaΪ���� printf�����ַ�or��ֵ
//��#��ͷ��ΪԤ������룬��C�����޹أ���������Ҳһ�����ڣ�����ʼǰ��������Ԥ����
#define aha     int a = 1;\
                printf("%d\n", a)
//�ж���ʱ�� \ ����
#define cube(x) ((x)*(x)*(x))
//���ڿ��Դ�����
int main()
{
    aaa("%s %d\n",__FILE__,__LINE__);//�˴�Ϊ�Դ��ĺ꣬������ʱ���ļ�����Ҫ�����ģ��˴������ļ���Ҫ�ò�ͬ������ʽ
    printf("%s,%s\n", __DATE__, __TIME__);
    aha;
    printf("%d", cube(5));
    return 0;
}
