for (let i = 1; i < 9999; i++) {
    clearInterval(i);
}

let seatsInfo = tk.state.plan.seatMap;
let seatsSold = tk.state.plan.seatSoldMap;

// 판매되지 않은 좌석이 있는지 확인
let seatAvailable = false;

let intervalId = setInterval(() => {
    let seatsInfo = tk.state.plan.seatMap;
    let seatsSold = tk.state.plan.seatSoldMap;
    let seatAvailable = false;

    for (let sold of Object.keys(seatsSold)) {
        let isSold = seatsSold[sold];
        if (!isSold) {
            seatAvailable = true;
            console.log(`Available seat found: ${sold}`);
            console.log(seatsInfo[sold]["position"]);
            break;
        }
    }

    if (!seatAvailable) {
        console.log("No available seats found. Resetting ticket state...");
        resetTicketState();
    } else {
        console.log("Seat available. Stopping refresh.");
        clearInterval(intervalId); // 좌석을 찾으면 반복 중지
    }
}, 500); // 3초 간격으로 반복

function resetTicketState() {
    // 상태 초기화
    tk.state.waitingDetail.startLoading('refresh');
    tk.state.select.clearSelectedSeats();
    tk.state.view.clearSelectedSeats();
    tk.state.select.clearSelectedSeats; // 오타 수정
    // 이벤트 처리
    tk.event.service.signals.updateAliveGrade.dispatch();
    tk.event.service.signals.updateSeatWaitingLinked.dispatch();
    tk.event.service.signals.updateReservationSeatData.dispatch();
    tk.event.service.signals.updateReservationData.dispatch();
    // 상태 종료
    tk.state.waitingDetail.endLoading('refresh');
}