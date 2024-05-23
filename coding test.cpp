//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
////코딩테스트 연습
////2024 KAKAO WINTER INTERNSHIP
////가장 많이 받은 선물
//// friends_len은 배열 friends의 길이입니다.
//// gifts_len은 배열 gifts의 길이입니다.
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//
//int solution(const char* friends[], size_t friends_len, const char* gifts[], size_t gifts_len) {
//    int i, j, answer = 0;
//    int table[200][200];
//    int gave[friends_len]; //준 선물 개수 배열
//    int take[friends_len]; //받는 선물 개수 배열
//    int zisu[friends_len]; //선물지수 배열
//    int gesu[friends_len]; //선물한 개수 배열
//    char fl[20] = { 0, }; //이름
//    char* sending; //보내는 사람 이름
//    char* receive; //받는 사람 이름
//
//    for (i = 0; i < gifts_len; i++) // 선물 보내는이 받는이 이름 추출
//    {
//        // strtok (쪼갤 문장," ") < 여기를 기준으로 쪼개기
//        sending = strtok(gifts[i], " "); //보낸사람 이름 추출
//        receive = strtok(NULL, " "); //받는사람 이름 추출 
//
//        int give = 0, reci = 0; //give :송신 reci: 수신
//
//        for (j = 0; j < friends_len;j++)
//        {
//            //strcpy(dest, origin) origin 문자열을 복사해서 dest에 복사
//            strcpy(fl, friends[j]); //친구 이름 명단에서 이름 추출
//
//            if (strcmp(sending, fl) == 0) //sending 보낸이 이름 체크
//            {
//                gave[j]++;
//                give = j; //table에 보내는사람 저장
//            }
//
//            if (strcmp(receive, fl) == 0) //receive 받는이 이름 체크                
//            {
//                take[j]++;
//                reci = j; //table에 받는사람 저장
//            }
//        }
//        table[give][reci]++; //table에 보내는사람 받는사람 개수 추가
//    }
//
//    for (i = 0; i < friends_len; i++) //선물지수 gave준 선물 - take받은 선물 zisu[] 배열에 저장
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
//                //서로 선물한 개수 비교후 더 많이 줬다면 선물 1개 추가
//                if (table[i][j] > table[j][i]) gesu[i]++;
//                //서로 선물한 개수가 같다면 지수로 비교후 개수 추가
//                else if (table[i][j] == table[j][i] && zisu[i] > zisu[j]) gesu[i]++;
//            }
//            printf("%d", table[i][j]);
//        }
//        printf("\n");
//    }
//
//    for (i = 0; i < friends_len; i++)
//    {
//        if (answer < gesu[i]) answer = gesu[i]; //가장 많이 받는 선물 개수 추출
//    }
//
//    return answer;
//}