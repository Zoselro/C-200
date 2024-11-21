let seatsInfo = tk.state.plan.seatMap;
let seatsSold = tk.state.plan.seatSoldMap;

// 좌석 ID가 판매되지 않은 경우 버튼 클릭
let seatAvailable = false;

for (let sold of Object.keys(seatsSold)) {
    let isSold = seatsSold[sold]; // 현재 좌석 판매 여부
    if (!isSold) { // 판매되지 않은 좌석이 있을 경우
        seatAvailable = true;
        console.log(`Available seat found: ${sold}`);
        console.log(seatsInfo[sold]["position"]);
        
        // 좌석의 좌표를 가져옵니다
        let seatPosition = seatsInfo[sold]["position"];
        
        // 좌석 좌표에서 클릭 이벤트 발생
        let canvas = document.querySelector("canvas");
        let rect = canvas.getBoundingClientRect(); // 캔버스의 위치와 크기
        
        // 캔버스의 실제 크기
        let canvasWidth = canvas.width;
        let canvasHeight = canvas.height;
        
        // 좌석 위치를 캔버스의 상대적 좌표로 변환
        let x = (seatPosition.x - rect.left) * (canvasWidth / rect.width);
        let y = (seatPosition.y - rect.top) * (canvasHeight / rect.height);
        
        // 클릭 이벤트 생성
        let clickEvent = new MouseEvent("click", {
            clientX: rect.left + x,  // 화면 좌표로 계산
            clientY: rect.top + y,   // 화면 좌표로 계산
            bubbles: true,
            cancelable: true
        });

        // 캔버스에 클릭 이벤트 디스패치
        requestAnimationFrame(() => {
            canvas.dispatchEvent(clickEvent);
            console.log(`Simulated click at position: (${rect.left + x}, ${rect.top + y})`);
        });
    }
    else resetTicketState();
}

// 클릭 이벤트 리스너 추가 (캔버스에 클릭이 발생하는지 확인용)
let canvas = document.querySelector("canvas");
canvas.addEventListener('click', function(event) {
    console.log('Canvas clicked at', event.clientX, event.clientY);
});



function resetTicketState() {
    // 상태 초기화
    tk.state.waitingDetail.startLoading('refresh');
    tk.state.select.clearSelectedSeats();
    tk.state.view.clearSelectedSeats();
    tk.state.select.claerSelectSection(); // 오타 주의: claerSelectSection -> clearSelectSection
  
    // 이벤트 처리
    tk.event.service.signals.updateAliveGrade.dispatch();
    tk.event.service.signals.updateSeatWaitingLinked.dispatch();
    tk.event.service.signals.updateReservationSeatData.dispatch();
    tk.event.service.signals.updateReservationData.dispatch();
  
    // 상태 종료
    tk.state.waitingDetail.endLoading('refresh');
}
