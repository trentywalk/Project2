#include <stdio.h>
#include <locale.h>

int main()
{
	int N = 8, K = 53;
	setlocale(LC_ALL, "RUS");
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", N*60+K);
	printf("�� �������� �������� %d ����� � %d �����\n", 23-N, 60-K);
	printf("� 8:00 ������ %d ������\n", K*60);
	printf("������� ��� = %f � ������� ������ = %f ����\n", N/24., K/60.);

	int n = 4;
	printf("��������� ������� %d �� 333 ����� %5.3f\n", n, n/333.);
	printf("����: \n %10d \n %10d \n %10s\n", n, 333, "_______");
	printf("�����:\n %+10.3f", n/333.);
}