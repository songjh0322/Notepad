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
                return -2; // 패스워드 불일치
            }
        }
        else if (user[mid].id_num < id) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // 해당 아이디 없음
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
        printf("예약이 완료되었습니다.\n");
        print_seats(s_array);
        return 1;
    }
    else {
        printf("이미 예약된 자리입니다.\n");
        return -1;
    }
}

int cancel(int s_array[3][5], int row, int col, int id) {
    if (s_array[row][col] == id) {
        s_array[row][col] = 0;
        printf("예약취소가 완료되었습니다.\n");
        print_seats(s_array);
        return 1;
    }
    else {
        printf("예약되지 않은 자리이거나 다른 사용자의 예약입니다.\n");
        return -1;
    }
}

int main() {
    int row, col, id, passwd;
    load_user_info();

    while (1) {
        printf("로그인을 하세요.\nid_num: ");
        scanf("%d", &id);
        printf("password: ");
        scanf("%d", &passwd);

        int login_result = check_login(id, passwd);
        if (login_result == -1) {
            printf("해당 아이디가 없습니다. 다시 시도하세요.\n");
        }
        else if (login_result == -2) {
            printf("패스워드가 틀렸습니다. 다시 시도하세요.\n");
        }
        else {
            printf("%d님 반갑습니다.\n", id);
            break;
        }
    }

    while (1) {
        printf("1---좌석확인하기\n");
        printf("2---예약하기\n");
        printf("3---예약취소하기\n");
        printf("4---종료하기\n");
        int n;
        printf("메뉴를 선택하세요: ");
        scanf("%d", &n);

        switch (n) {
        case 1:
            print_seats(s); 
            break;
        case 2:
            printf("예약을 원하는 자리는(행 열)? ");
            scanf("%d %d", &row, &col);
            reserve(s, row, col, id);
            break;
        case 3:
            printf("예약취소를 원하는 자리는?(행 열)? ");
            scanf("%d %d", &row, &col);
            cancel(s, row, col, id);
            break;
        case 4:
            printf("이용해 주셔서 감사합니다.\n");
            return 0;
        }
    }
}
