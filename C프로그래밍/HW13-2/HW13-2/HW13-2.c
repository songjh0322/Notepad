#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};
struct student get_max_stu(struct student list[], int size);

int main(void) {
	struct student list[3] = {
		   { 20180001, "ȫ�浿", 3.1 },
		   { 20180002, "��ö��", 3.2 },
		   { 20180003, "�迵��", 3.9 }
	};
	struct student super_stu;
	int size = 3;

	super_stu = get_max_stu(list, size);

	printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %.1f)�Դϴ�\n",
		super_stu.name, super_stu.number, super_stu.grade);

	return 0;
}

struct student get_max_stu(struct student list[], int size) {
	struct student max_stu = list[0];
	int i;
	for (i = 1; i < size; i++) {
		if (list[i].grade > max_stu.grade)
			max_stu = list[i];
	}
	return max_stu;
}