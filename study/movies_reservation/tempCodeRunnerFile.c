)
    {
        scanf("좌석을 예약하시겠습니까?(y 또는n) %c\n", &seat_agree);
        if(seat_agree == 'y'){
            printf("예약완료");
        } else if(seat_agree == 'n') {
            printf("예약 취소");
            break;
        } else {
            printf("잘못 입력 하셨습니다. 다시 입력 해 주세요.");
        }
    }