#include <stdio.h>
#define SIZE 5
#define MAX_SCORE 4.5
#define NUM_USERS 16
#define _CRT_SECURE_NO_WARNINGS

struct user_info {
    int id_num;   
    int password; 
};

struct user_info user[NUM_USERS];

int s[3][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
};

int load_user_info() {
    user[0].id_num = 10; user[0].password = 1004;
    user[1].id_num = 20; user[1].password = 2004;
    for (int i = 2; i < NUM_USERS; i++) {
        user[i].id_num = i * 10;
        user[i].password = (i * 10) + 4;
    }
    return 0;
}

int check_login(int id, int passwd) {
    int low = 0, high = NUM_USERS - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (user[mid].id_num == id) {
            if (user[mid].password == passwd) {
                return id;
            }
            else {
                return -2; // �н����� ����ġ
            }
        }
        else if (user[mid].id_num < id) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // �ش� ���̵� ����
}

int print_seats(int s_array[3][5]) {
    printf("  | 0 1 2 3 4\n");
    printf("--------------\n");
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("%d | ", i);
        for (j = 0; j < 5; j++) {
            printf("%d ", s_array[i][j]);
        }
        printf("\n");
    }
    return 1;
}

int reserve(int s_array[3][5], int row, int col, int id) {
    if (s_array[row][col] == 0) {
        s_array[row][col] = id;
        printf("������ �Ϸ�Ǿ����ϴ�.\n");
        print_seats(s_array);
        return 1;
    }
    else {
        printf("�̹� ����� �ڸ��Դϴ�.\n");
        return -1;
    }
}

int cancel(int s_array[3][5], int row, int col, int id) {
    if (s_array[row][col] == id) {
        s_array[row][col] = 0;
        printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n");
        print_seats(s_array);
        return 1;
    }
    else {
        printf("������� ���� �ڸ��̰ų� �ٸ� ������� �����Դϴ�.\n");
        return -1;
    }
}

int main() {
    int row, col, id, passwd;
    load_user_info();

    while (1) {
        printf("�α����� �ϼ���.\nid_num: ");
        scanf("%d", &id);
        printf("password: ");
        scanf("%d", &passwd);

        int login_result = check_login(id, passwd);
        if (login_result == -1) {
            printf("�ش� ���̵� �����ϴ�. �ٽ� �õ��ϼ���.\n");
        }
        else if (login_result == -2) {
            printf("�н����尡 Ʋ�Ƚ��ϴ�. �ٽ� �õ��ϼ���.\n");
        }
        else {
            printf("%d�� �ݰ����ϴ�.\n", id);
            break;
        }
    }

    while (1) {
        printf("1---�¼�Ȯ���ϱ�\n");
        printf("2---�����ϱ�\n");
        printf("3---��������ϱ�\n");
        printf("4---�����ϱ�\n");
        int n;
        printf("�޴��� �����ϼ���: ");
        scanf("%d", &n);

        switch (n) {
        case 1:
            print_seats(s); 
            break;
        case 2:
            printf("������ ���ϴ� �ڸ���(�� ��)? ");
            scanf("%d %d", &row, &col);
            reserve(s, row, col, id);
            break;
        case 3:
            printf("������Ҹ� ���ϴ� �ڸ���?(�� ��)? ");
            scanf("%d %d", &row, &col);
            cancel(s, row, col, id);
            break;
        case 4:
            printf("�̿��� �ּż� �����մϴ�.\n");
            return 0;
        }
    }
}
