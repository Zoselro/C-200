








<!DOCTYPE html>
<link rel="apple-touch-icon" href="//tketlink.dn.toastoven.net/ticketlink-cdn/web/TLfavicon.ico"/>
<link rel="icon" type="image/png" href="//tketlink.dn.toastoven.net/ticketlink-cdn/web/TLfavicon.ico"/>
<link rel="shortcut icon" href="//tketlink.dn.toastoven.net/ticketlink-cdn/web/TLfavicon.ico"/>



<!DOCTYPE html>
<html lang="ko" ng-app="defaultApp">
<head>
	<meta charset="utf-8">
	<meta http-equiv="Cache-Control" content="no-cache, no-store, must-revalidate">
	<meta http-equiv="Pragma" content="no-cache">
	<meta http-equiv="Expires" content="0">
	<title>날짜/회차 선택</title>
	
	
	<meta name="viewport"
      content="width=device-width, initial-scale=1.0, minimum-scale=1.0, target-densitydpi=medium-dpi, user-scalable=no">
<meta name="format-detection" content="telephone=no">

<meta name="naver-site-verification" content="6997f210f5130a85c884a215404e659af2e85f25"/>



	<link rel="shortcut icon" type="image/x-icon" href="//tketlink.dn.toastoven.net/ticketlink-cdn/web/TLfavicon.ico" />



	
	
		<link rel="stylesheet" type="text/css" href="//tketlink.dn.toastoven.net/markup_resources/2024110401_M/web/92_webview/css/w.css">
	


	<link rel="stylesheet" type="text/css" href="//tketlink.dn.toastoven.net/markup_resources/2024110401_M/renewal/mobile/css/m_ticketlink.css">



<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/jquery-1.11.1.min.js"></script>
<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/jquery-ui.js"></script>


	
	
		<script type="text/javascript" src="/resources/js/util/tk.Utils-7163c54a3db4827847313d6ba7d45f1f.js"></script>
		<script type="text/javascript" src="/resources/js/login.js"></script>
		<script type="text/javascript" src="/resources/js/modal-mobile.js"></script>
		<script type="text/javascript" src="/resources/js/tk.Common.js"></script>
		<script type="text/javascript" src="/resources/js/netfunnel/netfunnel.js"></script>
		<script type="text/javascript" src="/resources/js/netfunnel/custom_skin.js"></script>

		<script type="text/javascript" src="/resources/js/google/gaScript.js"></script>
		<script type="text/javascript" src="/resources/js/aceCounter/aceCounter.mobile.js"></script>
		<script type="text/javascript" src="/resources/js/facebook/facebook.js"></script>
		<script type="text/javascript" src="/resources/js/nhn_ad/index.js"></script>
	


<noscript><img src='http://gmb.acecounter.com/mwg/?mid=AZ1A70693&tp=noscript&ce=0&' border='0' width='0' height='0' alt=''></noscript>

<!-- NHN AD MORE Script -->
<script async type="text/javascript" src="//cro.myshp.us/resources/common/js/more-common.js"></script>
<!-- End NHN AD MORE Script -->

<!-- S: NHN ACE Topics -->
<script async type="text/javascript" src="https://cdn.nhnace.com/libs/aceat.js?pub_code=1487841737"></script>
<!-- E: NHN ACE Topics -->

<style>
    .noselect {
        -webkit-touch-callout: none; /* iOS Safari */
        -webkit-user-select: none; /* Chrome/Safari/Opera */
        -khtml-user-select: none; /* Konqueror */
        -moz-user-select: none; /* Firefox */
        -ms-user-select: none; /* Internet Explorer/Edge */
        user-select: none; /* Non-prefixed version, currently not supported by any browser */
    }

    [v-cloak] {
        display: none;
    }

</style>

	
<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/action-tracer-1.2.0.js?1732171565626"></script>
<style>
    .react-datepicker__aria-live {
        display: none;
    }
</style>
	<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/angular.min.js"></script>

	<style>
      [ng\:cloak], [ng-cloak], [data-ng-cloak], [x-ng-cloak], .ng-cloak, .x-ng-cloak {
          display: none !important;
      }
	</style>
</head>
<body ng-controller="defaultCtrl">

	
		<div id="wrap" class="m_wrap">
			<header class="m_header">
				
					
					
						<div class="header_inner">
							<h1 class="header_title">날짜/회차 선택</h1>
							<div class="header_util_left">
								
								<button type="button" class="header_button button_back" onclick="prevButtonEvent()">
									<span class="blind">이전 페이지</span>
								</button>
								
							</div>
							
								
								<div class="header_util_right">
									<button type="button" class="header_button button_close" onclick="closeButtonEvent();">
										<span class="blind">닫기</span>
									</button>
								</div>
								
								
							
						</div>
					
				
			</header>
			<main id="m_content" class="m_container reserve_wrap bg_gray" role="main">
				<reserve-step-bar step="schedule" product-type-code="product.productTypeCode"
				                  product-class-type="product.productClassType"></reserve-step-bar>
				<form>
					<fieldset>
						<legend>날짜/회차 선택 폼</legend>
						<h2 class="mtt">날짜선택</h2>

						<div class="calender" id="calender"></div>

						<div class="sec">
							<h2 class="mtt">회차선택</h2>
							<ul id="schedule_list" class="list">
								<li class="item">
									<p class="notice_txt">관람일을 선택해주세요.</p>
								</li>
							</ul>
						</div>

						
							<div class="sec">
								<h2 class="mtt">잔여석 </h2>
								<div id="waitingReservationArea">
										
								</div>
								<ul id="grade_list" class="list">
									<li class="item">
										<p class="notice_txt">회차 선택 후 확인 가능합니다.</p>
									</li>
								</ul>
							</div>
						

						<div class="btn_wrap">
							<ul class="btn_lst">
								<li>
									<button type="button" class="btn" id="nextBtn" onclick="reserveNext()">
										다음단계<!--다음단계--></button>
								</li>
							</ul>
						</div>
					</fieldset>
				</form>
			</main>
		</div>
	
	

<script src="/resources/js/angular-locale_ko-kr.js"></script>
<input type="hidden" id="productId" value="53114"/>
<input type="hidden" id="productDate" value=""/>
<input type="hidden" id="productClassType" value="EXHIBITION">
<input type="hidden" id="restSeatExposureYn" value="true">
<script src="/resources/js/reserve/common/mobile-stepbar-directive.js"></script>

<script type="text/javascript">
    //<[CDATA[
    function _isAppWeb() {
        var hostName = window.location.hostname.split(/[.-]/);
        var arr = hostName.filter(function (hostName) {
            return hostName === 'appweb';
        });

        return arr.length > 0;
    }

    var initData = {};
    var isAppWeb = _isAppWeb();
    initData.product = {"productId":53114,"registerStateCode":"COMPLETE","productTypeCode":"DAY","productName":"검은사막 모바일 2024 칼페온 연회","productNameEng":"","representImageId":17581230,"representImageUrl":"//image.toast.com/aaaaab/ticketlink/TKL_4/main1106(2).jpg","placeName":"수원메쎄","placeNameEng":"","hallName":"수원메쎄 전시장","hallNameEng":"","viewAgeName":"12세이상","viewAgeNameEng":"12years and over","viewTypeName":"12개월이상","viewTypeNameEng":"12month and over","viewClassName":"연령별","viewClassCode":"AGE","runningTime":0,"chargeTypeCode":"CHARGE","productClassType":"EXHIBITION","exposureStateCode":"EXPOSURE","operateStateCode":"SALE","serviceType":"TKL","rootCategoryId":101,"managementCategoryId":10185,"categoryType":"CONCERT_EXHIBITION","adultYn":"N","emailNeedYn":"N","startDate":1734188400000,"endDate":1734188400000,"saleStartDate":1731409200000,"productClassCode":"EXHIBITION","bigProductYn":"N","restSeatExposureYn":true,"notice":"","reserveCommissionContent":"<b>① 좌석 선점이란?</b><br>\r\n                                            좌석배치도에서 동일한 좌석이 동시에 선택된 경우 먼저 다음 단계로 넘어간 고객이 좌석을 선점하게 됩니다. 따라서 좌석선택 이후 다음단계로 넘어가는 시점에 따라 좌석 선점 여부가 결정됩니다.\r\n                                            <br><br>\r\n                                            <b>② 좌석선택 시 주의사항</b><br>\r\n                                            좌석을 선택한 후 8분 이내에 결제를 완료해야 합니다. 해당 시간 내 결제가 이뤄지지 않을 경우 선택한 좌석의 예매가 취소됩니다.\r\n                                            또한 좌석 선택 시 잔여석은 표기되나 배치도에서 좌석이 보이지 않는 경우 해당 좌석이 선점되어 결제가 진행 중이므로 다른 좌석을 선택하여 주시기 바랍니다.​\r\n                                            \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                ","reserveCancelContent":"예매수수료는 예매 당일 취소하실 경우만 환불되며, 그 이후 취소 시에는 환불되지 않습니다.<br><br>\r\n                                            예매취소 시 취소일에 따라 취소수수료가 부과될 수 있습니다. (티켓금액의 0~30%)<br><br>\r\n                                            당일관람 예매건에 대해서는 취소가 불가하니 이점 양해 부탁드립니다.<br><br>티켓이 배송된 이후에는 온라인에서 취소가 불가합니다. 티켓을 받으신 후 반송 기한까지 티켓링크 본사로 직접 등기우편을 보내주셔야\r\n                                            취소가 가능합니다.\r\n                                            \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                ","cancelRefundContent":"<br>\r\n                                            <b>수수료 관련 유의사항</b><br>\r\n                                            예매수수료는 예매 당일 취소하실 경우만 환불되며, 그 이후 취소 시에는 환불되지 않습니다.<br>\r\n                                            취소수수료는 취소시점에 따라 다르게 부과됩니다. (티켓금액의 0~30%)<br>\r\n                                            자세한 사항은 [고객센터&gt;수수료안내] 페이지를 참고해주시기 바랍니다.<br>\r\n                                            <br>\r\n                                            <b>티켓수령안내</b><br>\r\n                                            행사 당일 공연 시작 1시간~30분 전부터 행사장 매표소에서 수령하실 수 있습니다.<br>\r\n                                            티켓 수령 시 예매번호, 예매자 신분증, 예매확인서 등 확인이 필요합니다.<br>\r\n                                            행사 또는 행사일에 따라 티켓 수령 방법 선택이 제한될 수 있습니다.\r\n                                            \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                        \r\n                                    \r\n                                ","fanclubYn":"N","prereserveYn":false,"allotmentYn":false,"memberRestrictionYn":false,"maxCountPerPerson":1,"maxCountOnetimePerInning":1,"maxCountPerPersonUnlimitedYn":"N","maxCountPerInningUnlimitedYn":"Y","maxBuyCountPerInningUnlimitedYn":"Y","maxCountOnetimePerInningUnlimitedYn":"N","okCashBackUseYn":"N","productDeduction":false,"paycoCouponUseCount":0,"ticketTypes":["MOBILE","REAL"],"nonBankExpiryUseYn":false,"facilityGlobalYn":false,"availMaxCountPerInning":999999,"availMaxCountPerPerson":1,"availMaxBuyCountPerInning":999999,"restSeatMessage":"schedule.select.alert","isPeriodType":false,"isSports":false,"isExhibition":true,"isSeasonType":false,"isConcert":false,"hasSeat":false,"isTicket":false,"isSeasonTicket":false,"isAdvanceTicket":false,"isPaycoCouponUse":false,"isConcertExhibition":true};

    angular.module('defaultApp', ['reserve.common.stepbar'])
        .controller('defaultCtrl', function ($scope, $filter) {
            $scope.product = initData.product;
            $scope.$evalAsync();
            $scope.isAppWeb = isAppWeb;

            window.dateformat = function (longDate, dateformat) {
                if (dateformat == null) {
                    dateformat = 'yyyy.MM.dd HH:mm';
                }
                return $filter('date')(longDate, dateformat);
            }
        });
    //]]>
</script>
<script type="text/javascript" src="//static.tagmanager.toast.com/tag/view/1484"></script>
<script type="text/javascript">
    function aceTraderScript (productId, price, quantity, device, name, totalPrice) {
        try {
            var d = new Date();
            var txNumber = d.getFullYear() + '' + (d.getMonth() + 1) + '' + d.getDate() + '' + d.getHours() + '' + d.getMinutes() + '' + d.getSeconds() + '' + d.getDay();

            window.ne_tgm_q = window.ne_tgm_q || [];
            window.ne_tgm_q.push(
                {
                    tagType: 'conversion',
                    device: device/*web, mobile, tablet*/,
                    uniqValue: '',
                    pageEncoding: 'utf-8',
                    orderNo: txNumber,
                    items: [{
                        id: productId/*(íì)IDê°ìë ¥*/,
                        price: price/*(íì)ê°ê²©ì ë³´ìë ¥*/,
                        quantity: quantity/*(íì)ê°¯ìì ë³´ìë ¥*/,
                        category: ""/*ì¹´íê³ ë¦¬ ë|ì¤|ì*/,
                        imgUrl: ""/*imgë§í¬ê°ìë ¥ ex)http://example.com/img/img.jpg*/,
                        name: name/*(íì)ì íëªëë ì íë©ë´ëªìë ¥*/,
                        desc: ""/*ìíìì¸ ì¤ëª text*/,
                        link: ""/*ìíìì¸íì´ì§ URL ex)http://example.com/detail/product.html*/
                    }],
                    totalPrice: totalPrice/*ìí ì´ ê¸ì¡ í©ì°*/
                });
        } catch (e) {

        }
    }
</script>

<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/moment.min.js"></script>
<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/moment-timezone.min.js"></script>
<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/moment-timezone-with-data.min.js"></script>
<script type="text/javascript" src="//tketlink.dn.toastoven.net/static/js/moment-timezone-with-data-2012-2022.min.js"></script>
<script type="text/javascript" src="/resources/js/date.js"></script>
<script type="text/javascript" src="/resources/js/mobile/code-snippet.js"></script>
<script type="text/javascript" src="/resources/js/mobile/calendar.js"></script>
<script type="text/javascript" src="/resources/js/mobile/date-picker.min.js"></script>
<script type="text/javascript" src="/resources/js/mobile/browser.js"></script>
<script type="text/javascript" src="/resources/js/util/tk.Utils.js?v=20220819"></script>
<script type="text/javascript" src="/resources/js/constants/waiting-reservation.constant.js"></script>
<script type="text/javascript" src="/resources/js/schedule/index.js?dummy=20240620"></script>
<script type="text/javascript">
    var commonCloseEvent = tk.Utils.commonCloseEvent();
    var commonPreviousEvent = tk.Utils.commonPreviousEvent('');
    
    
    
    var prevButtonEvent = commonCloseEvent;
    var closeButtonEvent = commonCloseEvent;
    
    

    var _globalUrl = '/global/';
    var _globalLocale = '';
    var _isGlobal = !!_globalLocale;
    if (_globalLocale === '' || _globalLocale === 'ko') {
        _globalUrl = '';
    }
    var roundInfo = [];

    var RESERVE_DATA = {
        SELECTED_DATE: '',
        SELECTED_ROUND: '',
        SELECTED_SCHEDULE: '',
        SELECTED_SCHEDULE_NOTICE: ''
    };
    var NOTICE_DATA = {};
    var calendar = null;
    var totalRemainSeatCount = 0;

    var _constDayOfWeek = ['일', '월', '화', '수', '목', '금', '토'];
    var _constDayOfWeekEng = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat'];
    var _dateFormatType = {
        TYPE1: 0,
        TYPE2: 1
    };

    // Date Formatting 함수
    function filterFormatDate(datetime, type) {
        var utcTimestamp = new Date(datetime).getTime() + new Date(datetime).getTimezoneOffset() * 60 * 1000;
        var timezoneDiff = 9 * 60 * 60 * 1000;
        var dateObject = new Date(utcTimestamp + timezoneDiff);
        var year = dateObject.getFullYear();
        var month = dateObject.getMonth() + 1;
        var date = dateObject.getDate();
        var day = dateObject.getDay();
        var hours = dateObject.getHours();
        var minutes = dateObject.getMinutes();

        if (type === _dateFormatType.TYPE2) {
            return year + '-' + (month < 10 ? '0' + month : month) + '-' + (date < 10 ? '0' + date : date);
        } else {
            var dayOfWeek = _isGlobal ? _constDayOfWeekEng[day] : _constDayOfWeek[day];
            return year + '.' + (month < 10 ? '0' + month : month) + '.' + (date < 10 ? '0' + date : date) + '(' + dayOfWeek + ') ' + (hours < 10 ? '0' + hours : hours) + '시 ' + (minutes < 10 ? '0' + minutes : minutes) + '분';
        }
    }

    function splitDate(date) {
        var dateArray = date.split('.');
        return {
            year: parseInt(dateArray[0]),
            month: parseInt(dateArray[1]),
            date: parseInt(dateArray[2])
        };
    }

    function setMonthButton(dateList) {
        if (!dateList) {
            return;
        }

        var firstDateOpt, lastDateOpt, dateLength = dateList.length;

        if (dateLength > 0) {
            firstDateOpt = splitDate(dateList[0].productDate);
            lastDateOpt = splitDate(dateList[dateLength - 1].productDate);
        }

        calendar = new tui.component.Calendar({
            element: $('#calender'),
            titleFormat: 'yyyy.mm',
            firstDateOpt: firstDateOpt,
            lastDateOpt: lastDateOpt
        });

        if (dateLength > 0) {
            var ranges = [];
            for (var i = 0; i < dateLength; i++) {
                var rangeDate = splitDate(dateList[i].productDate);
                ranges.push([rangeDate, rangeDate]);
            }

            new tui.component.DatePicker({
                dateForm: 'yyyy년 mm월 dd일',
                selectableClassName: 'ing',
                date: firstDateOpt,
                selectableRanges: ranges,
                showAlways: true
            }, calendar).open();
        }
    }

    function reserveNext() {
        var productId = document.getElementById('productId').value;
        var schedule = {
            productId: productId,
            productRound: RESERVE_DATA.SELECTED_ROUND,
            productDate: RESERVE_DATA.SELECTED_DATE,
            scheduleId: RESERVE_DATA.SELECTED_SCHEDULE
        };

        if (schedule.productDate === null || schedule.productDate === '' || schedule.productRound === null || schedule.productRound === '') {
            if (!_isGlobal) {
                iosVersionCheckSleepPop('날짜와 회차를 선택하세요.', alert);
            } else {
                iosVersionCheckSleepPop('Please select Date you want.', alert);
            }
            return;
        }

        if (totalRemainSeatCount <= 0 && document.getElementById('restSeatExposureYn').value === 'true') {
            if (!_isGlobal) {
                iosVersionCheckSleepPop('선택하신 회차는 매진되었습니다.', alert);
            } else {
                iosVersionCheckSleepPop('The selected date is sold out.', alert);
            }
            return;
        }

        var messages = [];
        var scheduleNotice = '';
        var currentRound;
        for (let i = 0; i < roundInfo.length; i++) {
            if (roundInfo[i].productRound === RESERVE_DATA.SELECTED_ROUND) {
                currentRound = roundInfo[i];
                break;
            }
        }

        schedule.productDate = schedule.productDate.replace(/[.]/gi, '-');
        if (currentRound) {
            if (moment.tz(new Date(), "Asia/Seoul").toDate().getTime() >= currentRound.reserveCancelCloseDate) {
                scheduleNotice += makeReserveCancelCloseText({isGlobal: _isGlobal, isHtml: true});
            }
        }

        if (RESERVE_DATA.SELECTED_SCHEDULE_NOTICE) {
            scheduleNotice += RESERVE_DATA.SELECTED_SCHEDULE_NOTICE;
        }

        if (scheduleNotice) {
            messages.push(scheduleNotice);
        }

        aceTraderScript(productId, 1, 1, 'mobile', '날짜회차선택', 1);

        customModal(messages,
            '예매안내',
            '확인',
            function () {
                $.ajax({
                    url: _globalUrl + '/reserve/product/' + productId + '/schedule',
                    method: 'post',
                    type: 'json',
                    data: {
                        productId: productId,
                        scheduleId: RESERVE_DATA.SELECTED_SCHEDULE
                    },
                    success: function (result) {
                        if (result.result.message !== 'success') {
                            document.location.reload();
                        } else {
                            location.href = result.data;
                        }
                    }
                });
            });
    }

    function onDateClicked(selectedDate, element) {
        // active 날짜 선택할 경우, HTTP 요청 보내지 않는다.
        if (RESERVE_DATA.SELECTED_DATE === selectedDate) {
            return;
        }

        // 날짜 전역변수값 설정, 회차, 스케쥴 초기화한다.
        RESERVE_DATA.SELECTED_DATE = selectedDate;
        RESERVE_DATA.SELECTED_ROUND = '';
        RESERVE_DATA.SELECTED_SCHEDULE = '';
        RESERVE_DATA.SELECTED_SCHEDULE_NOTICE = '';

        requestSchedule(selectedDate);

        // 달력에 선택한 날짜를 체크한다.
        var i, calendarDates = document.getElementsByClassName('calendar-date');
        for (i = 0; i < calendarDates.length; i++) {
            if (calendarDates[i] !== element) {
                calendarDates[i].classList.remove('checked');
            } else {
                calendarDates[i].classList.add('checked');
            }
        }
    }

    function selectScheduleItem(productRound, scheduleId, scheduleWaitingReservation) {
        event.preventDefault();

        // 이미 선택된 회차를 선택하면 동작하지 않는다.
        if (this.parentElement.classList.contains('active')) {
            return;
        }

        var elScheduleItem = document.getElementsByClassName('schedule_item');
        for (var i = 0; i < elScheduleItem.length; i++) {
            elScheduleItem[i].classList.remove('active');
        }
        this.parentElement.classList.add('active');

        //회차, 스케쥴 아이디 전역 변수값 설정
        RESERVE_DATA.SELECTED_ROUND = productRound;
        RESERVE_DATA.SELECTED_SCHEDULE = scheduleId;
        RESERVE_DATA.SELECTED_SCHEDULE_NOTICE = NOTICE_DATA[scheduleId];

        if (document.getElementById('restSeatExposureYn').value === 'true') {
            if (document.getElementById('productClassType').value === 'CONCERT' || document.getElementById('productClassType').value === 'SPORTS_SEAT' || document.getElementById('productClassType').value === 'SEASON_TICKET') {
                requestGradeForConcert(scheduleId);
            } else {
                requestGradeForExhibition(scheduleId);
            }
        }

        // 취소표 예매
        makeWaitingButton(scheduleId, scheduleWaitingReservation);
    }

    function initTotalRemainSeatCount(scheduleGrades) {
        totalRemainSeatCount = 0;

        if (Array.isArray(scheduleGrades) && scheduleGrades.length !== 0) {
            scheduleGrades.forEach(function (grade) {
                if (!grade.restriction) {
                    totalRemainSeatCount += grade.remainCnt;
                }
            });
        }
    }

    function renderSchedule(scheduleData) {
        var scheduleList = document.getElementById('schedule_list');
        // var waitingReservationArea = document.getElementById('waitingReservationArea');
        //
        // waitingReservationArea.text = '';
        scheduleList.empty();

        if (scheduleData.length === 0) {
            var elScheduleItem = document.createElement('li');
            elScheduleItem.className = 'item';
            var elScheduleItemTitle = document.createElement('p');
            elScheduleItemTitle.className = 'notice_txt';
            elScheduleItemTitle.appendChild(document.createTextNode('관람일을 선택해주세요.'));

            elScheduleItem.appendChild(elScheduleItemTitle);
            scheduleList.appendChild(elScheduleItem);

            return;
        }

        scheduleData.forEach(function (scheduleItem, index) {
            NOTICE_DATA[scheduleItem.scheduleId] = scheduleItem.notice;

            var elScheduleItem = document.createElement('li');
            elScheduleItem.className = 'item schedule_item';

            var elScheduleItemAncor = document.createElement('a');
            elScheduleItemAncor.href = '#';
            elScheduleItemAncor.className = 'link';
            elScheduleItemAncor.addEventListener('click', function () {
                selectScheduleItem.call(this, scheduleItem.productRound, scheduleItem.scheduleId, scheduleItem.scheduleWaitingReservation);
            });

            var elScheduleItemDefinitionList = document.createElement('dl');
            var elScheduleItemDefinitionDate = document.createElement('dd');
            elScheduleItemDefinitionDate.className = 'date_info';
            var elScheduleItemDefinitionDateEm = document.createElement('em');
            elScheduleItemDefinitionDateEm.appendChild(document.createTextNode(filterFormatDate(scheduleItem.startDatetime)));
            elScheduleItemDefinitionDate.appendChild(elScheduleItemDefinitionDateEm);
            elScheduleItemDefinitionList.appendChild(elScheduleItemDefinitionDate);

            if ('' === 'true' && '' === 'true') {
                if (scheduleItem.actors && scheduleItem.actors.length > 0) {
                    var elScheduleItemDefinitionActor = document.createElement('dd');
                    elScheduleItemDefinitionActor.className = 'actor_info';

                    var txtActors = '';
                    scheduleItem.actors.forEach(function (actor, index) {
                        txtActors += actor.personName;
                        if (index + 1 < scheduleItem.actors.length) {
                            txtActors += ', ';
                        }
                    });

                    elScheduleItemDefinitionActor.appendChild(document.createTextNode(txtActors));
                    elScheduleItemDefinitionList.appendChild(elScheduleItemDefinitionActor);
                }
            }

            elScheduleItemAncor.appendChild(elScheduleItemDefinitionList);

            elScheduleItem.appendChild(elScheduleItemAncor);
            scheduleList.appendChild(elScheduleItem);

            const selectedScheduleId = localStorage.getItem("selected_scheduleId");
            if (selectedScheduleId != null) {
                if (scheduleItem.scheduleId === parseInt(selectedScheduleId, 10)) {
                    selectScheduleItem.call(elScheduleItemAncor, scheduleItem.productRound, scheduleItem.scheduleId, scheduleItem.scheduleWaitingReservation);
                    localStorage.removeItem("selected_scheduleId");
                }
            } else {
                if (index === 0) {
                    selectScheduleItem.call(elScheduleItemAncor, scheduleItem.productRound, scheduleItem.scheduleId, scheduleItem.scheduleWaitingReservation);
                }
            }
        });
    }

    function makeWaitingButton(scheduleId, scheduleWaitingReservation) {
        var waitingReservationArea = document.getElementById('waitingReservationArea');
        if (!waitingReservationArea) {
            return;
        }

        waitingReservationArea.empty();

        if (!scheduleWaitingReservation) {
            return;
        }

        if (scheduleWaitingReservation.saleStatus === WAITING_SALE_STATUS['CLOSED']) {
            return;
        }

        var newA = document.createElement("a");
        var newContent = document.createElement("span");
        var contentText = null;
        if (scheduleWaitingReservation.saleStatus === WAITING_SALE_STATUS['INSALE']) {
            contentText = document.createTextNode('취소표 제가 살래요');
        } else {
            contentText = document.createTextNode('취소표대기 언제 신청할 수 있어요?');
        }

        newA.append(newContent);
        newA.classList.add('btn_reserve_wait');
        newA.style.cursor = 'pointer';
        newContent.classList.add('btn_txt');
        newContent.append(contentText);
        waitingReservationArea.appendChild(newA);

        if (scheduleWaitingReservation.saleStatus === WAITING_SALE_STATUS['INSALE']) {
            newA.addEventListener("click", function () {
                location.href = '/reserve/waiting/schedule/' + scheduleId;
            });
        } else {
            newA.classList.add('not_started');
            newA.addEventListener("click", function () {
                var saleStartDate = moment(scheduleWaitingReservation.saleStartDatetime).format('M월 D일 HH:mm');
                alert('해당 회차는 ' + saleStartDate + '부터 취소표대기 신청이 가능합니다.');
            });
        }
    }

    function renderGrade(gradeData) {
        var gradeList = document.getElementById('grade_list');
        gradeList.empty();

        var elGradeItem = document.createElement('li');
        elGradeItem.className = 'item';

        var elGradeItemAncor = document.createElement('span');
        elGradeItemAncor.className = 'link';

        var elGradeItemSeatList = document.createElement('ul');
        elGradeItemSeatList.className = 'seat_list';

        if (gradeData.length === 0) {
            var elGradeItemSeatListItem = document.createElement('li');
            elGradeItemSeatListItem.className = 'seat_item';

            var elGradeItemSeatName = document.createTextNode('전체');
            var elGradeItemSeatCount = document.createElement('em');
            elGradeItemSeatCount.className = 'seat sold_out';
            elGradeItemSeatCount.appendChild(document.createTextNode('매진'));

            elGradeItemSeatListItem.appendChild(elGradeItemSeatName);
            elGradeItemSeatListItem.appendChild(elGradeItemSeatCount);
            elGradeItemSeatList.appendChild(elGradeItemSeatListItem);
        } else {
            gradeData.forEach(function (grade) {
                if (!grade.restriction) {
                    var elGradeItemSeatListItem = document.createElement('li');
                    elGradeItemSeatListItem.className = 'seat_item';

                    var elGradeItemSeatName = document.createTextNode(grade.name);
                    var elGradeItemSeatCount = document.createElement('em');
                    elGradeItemSeatCount.className = 'seat';

                    if (grade.remainCnt <= 0) {
                        elGradeItemSeatCount.classList.add('sold_out');
                        elGradeItemSeatCount.appendChild(document.createTextNode('매진'));
                    } else {
                        elGradeItemSeatCount.appendChild(document.createTextNode(grade.remainCnt + '석'));
                    }

                    elGradeItemSeatListItem.appendChild(elGradeItemSeatName);
                    elGradeItemSeatListItem.appendChild(elGradeItemSeatCount);
                    elGradeItemSeatList.appendChild(elGradeItemSeatListItem);
                }
            });
        }

        elGradeItemAncor.appendChild(elGradeItemSeatList);
        elGradeItem.appendChild(elGradeItemAncor);

        gradeList.appendChild(elGradeItem);
    }

    function previous() {
        location.href = '/product/list?partnerNo' + encodeURIComponent('');
    }

    function previousStep() {
        window.location.href = 'ticketlink://closeWebView';
    }

    function requestSchedule(productDate) {
        $.ajax({
            method: 'POST',
            url: _globalUrl + '/api/reserve/round',
            dataType: 'json',
            data: JSON.stringify({
                productId: document.getElementById('productId').value,
                productDate: productDate
            }),
            contentType: 'application/json',
            success: function (result) {
                var message = result.result.message;
                if (message === 'success') {
                    renderSchedule(result.data);
                    roundInfo = result.data;
                } else {
                    if (!_isGlobal) {
                        alert('오류가 발생하였습니다. 관리자에게 문의하세요');
                    } else {
                        alert('An error has occurred.');
                    }
                }
            }
        });
    }

    function requestGradeForConcert(scheduleId) {
        $.ajax({
            url: _globalUrl + '/api/V2/plan/schedules/' + scheduleId + '/grades',
            method: 'get',
            type: 'json',
            contentType: 'application/json',
            data: '',
            timeout: 5000,
            crossDomain: true,
            async: false,
            success: function (result) {
                initTotalRemainSeatCount(result.data);
                renderGrade(result.data);
            }
        });
    }

    function requestGradeForExhibition(scheduleId) {
        $.ajax({
            method: 'POST',
            url: _globalUrl + '/api/reserve/exhibition/grade/' + document.getElementById('productId').value,
            dataType: 'json',
            contentType: 'application/json',
            data: JSON.stringify(scheduleId),
            success: function (result) {
                initTotalRemainSeatCount(result.data);
                renderGrade(result.data);
            },
            error: function () {
                if (!_isGlobal) {
                    alert('오류가 발생하였습니다. 관리자에게 문의하세요');
                } else {
                    alert('An error has occurred.');
                }
            }
        });
    }

    function requestProductDatesByProductId() {
        $.ajax({
            method: 'POST',
            url: _globalUrl + '/api/reserve/dates',
            dataType: 'json',
            contentType: 'application/json;charset=UTF-8',
            data: document.getElementById('productId').value,
            success: function (result) {
                if (result.data && result.data.length > 0) {
                    setMonthButton(result.data);

                    setSelectedDate();
                } else {
                    window.location.href = '/error/error?wait';
                }
            },
            error: function () {
                if (!_isGlobal) {
                    alert('오류가 발생하였습니다. 관리자에게 문의하세요');
                } else {
                    alert('An error has occurred.');
                }
            }
        });
    }

    requestProductDatesByProductId();

    // 특정 요소의 자식 요소들을 삭제하는 polyfill 함수
    if (!Element.prototype.empty) {
        Element.prototype.empty = function () {
            while (this.firstChild) {
                this.removeChild(this.lastChild);
            }
        };
    }

    // 좌석선택단계에서 '이전' 클릭 후 날짜/회차 선택단계 진입 시 기존에 선택했던 날짜 유지
    function setSelectedDate() {
        const selectedDate = localStorage.getItem("selected_date");
        if (selectedDate != null) {
            var day = moment(parseInt(selectedDate, 10)).format('D');
            var i, calendarDates = document.getElementsByClassName('calendar-date ing');
            for (i = 0; i < calendarDates.length; i++) {
                var buttonText = calendarDates[i].querySelector('button').innerText;
                if (buttonText === day) {
                    onDateClicked(moment(parseInt(selectedDate, 10)).format('YYYY.MM.DD'), calendarDates[i]);
                }
            }
        }
        localStorage.removeItem("selected_date");
    }

    //]]>
</script>
</body>
</html>
