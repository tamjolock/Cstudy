//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
////�ڵ��׽�Ʈ ����
////2024 KAKAO WINTER INTERNSHIP
////���� ���� ���� ����
//// friends_len�� �迭 friends�� �����Դϴ�.
//// gifts_len�� �迭 gifts�� �����Դϴ�.
//// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
//
//int solution(const char* friends[], size_t friends_len, const char* gifts[], size_t gifts_len) {
//    int i, j, answer = 0;
//    int table[200][200];
//    int gave[friends_len]; //�� ���� ���� �迭
//    int take[friends_len]; //�޴� ���� ���� �迭
//    int zisu[friends_len]; //�������� �迭
//    int gesu[friends_len]; //������ ���� �迭
//    char fl[20] = { 0, }; //�̸�
//    char* sending; //������ ��� �̸�
//    char* receive; //�޴� ��� �̸�
//
//    for (i = 0; i < gifts_len; i++) // ���� �������� �޴��� �̸� ����
//    {
//        // strtok (�ɰ� ����," ") < ���⸦ �������� �ɰ���
//        sending = strtok(gifts[i], " "); //������� �̸� ����
//        receive = strtok(NULL, " "); //�޴»�� �̸� ���� 
//
//        int give = 0, reci = 0; //give :�۽� reci: ����
//
//        for (j = 0; j < friends_len;j++)
//        {
//            //strcpy(dest, origin) origin ���ڿ��� �����ؼ� dest�� ����
//            strcpy(fl, friends[j]); //ģ�� �̸� ��ܿ��� �̸� ����
//
//            if (strcmp(sending, fl) == 0) //sending ������ �̸� üũ
//            {
//                gave[j]++;
//                give = j; //table�� �����»�� ����
//            }
//
//            if (strcmp(receive, fl) == 0) //receive �޴��� �̸� üũ                
//            {
//                take[j]++;
//                reci = j; //table�� �޴»�� ����
//            }
//        }
//        table[give][reci]++; //table�� �����»�� �޴»�� ���� �߰�
//    }
//
//    for (i = 0; i < friends_len; i++) //�������� gave�� ���� - take���� ���� zisu[] �迭�� ����
//    {
//        int gi, ta;
//
//        gi = gave[i];
//        ta = take[i];
//
//        zisu[i] = gi - ta;
//    }
//
//
//    for (i = 0;i < friends_len;i++) {
//        for (j = 0;j < friends_len;j++) {
//            if (i != j)
//            {
//                //���� ������ ���� ���� �� ���� ��ٸ� ���� 1�� �߰�
//                if (table[i][j] > table[j][i]) gesu[i]++;
//                //���� ������ ������ ���ٸ� ������ ���� ���� �߰�
//                else if (table[i][j] == table[j][i] && zisu[i] > zisu[j]) gesu[i]++;
//            }
//            printf("%d", table[i][j]);
//        }
//        printf("\n");
//    }
//
//    for (i = 0; i < friends_len; i++)
//    {
//        if (answer < gesu[i]) answer = gesu[i]; //���� ���� �޴� ���� ���� ����
//    }
//
//    return answer;
//}