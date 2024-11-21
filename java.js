  /**
   * @description 선점 성공 시 callBack
   * @param {Object} q 결과 데이터
   */
  function preOccupancySuccess(q) {
    tkLoading.loadingOff();

    if (q.hasOwnProperty('data')) {
      if (q.data.resultCode) {
        location.replace(`/mbuster/Mbuster_${q.data.resultCode}`);
        return;
      }
    }

    if (q.hasOwnProperty('result') && tk.utils.hasErrorCode(q.result)) {
      if (q.result.code === 2000) {
        // 이미 선점하고 있는 경우 처리
        location.href = location.protocol + '//' + location.host + location.pathname;
        return;
      }
      actionWhenHasError();
      tk.utils.errorNotice(q);
      return;
    }

    if (q.hasOwnProperty('errorInfo')) {
      actionWhenHasError();
      tk.utils.errorNotice(q);
      return;
    }

    if (q.data !== undefined) {
      // 다음 단계로 이동
      tk.util.reserve.nextStep(q.data);
    }
  }
