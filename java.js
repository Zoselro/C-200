// 구역 정보를 담고 있는 배열
const sectionInfo = [
    {
        "sectionName": "A구역",
        "grades": [
            {
                "productGradeId": 107806,
                "sectionId": 67989,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "B구역",
        "sectionId": 68057,
        "grades": [
            {
                "productGradeId": 107806,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "C구역",
        "sectionId": 67991,
        "grades": [
            {
                "productGradeId": 107806,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "D구역",
        "sectionId": 67992,
        "grades": [
            {
                "productGradeId": 107806,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "E구역",
        "sectionId": 68004,
        "grades": [
            {
                "productGradeId": 107806,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "F구역",
        "sectionId": 68005,
        "grades": [
            {
                "productGradeId": 107806,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "G구역",
        "sectionId": 68007,
        "grades": [
            {
                "productGradeId": 107807,
                "priority": 0
            }
        ]
    },
    {
        "sectionName": "H구역",
        "sectionId": 68006,
        "grades": [
            {
                "productGradeId": 107807,
                "priority": 0
            }
        ]
    }
];

// setInterval을 사용하여 주기적으로 좌석 상태 확인
const intervalId = setInterval(() => {
    let hasPriorityZero = false; // priority가 0인 좌석이 있는지 추적
    let hasPriorityOne = false; // priority가 1인 좌석이 있는지 추적

    // 각 구역을 확인
    sectionInfo.forEach(section => {
        // 각 구역의 grades 배열에서 priority가 0인 좌석이 있는지 확인
        const hasPriorityZeroInSection = section.grades.some(grade => grade.priority === 0);
        const hasPriorityOneInSection = section.grades.some(grade => grade.priority === 1);

        // priority가 0인 좌석이 있으면 hasPriorityZero를 true로 설정
        if (hasPriorityZeroInSection) {
            hasPriorityZero = true;
        }

        // priority가 1인 좌석이 있으면 hasPriorityOne을 true로 설정
        if (hasPriorityOneInSection) {
            hasPriorityOne = true;
        }
    });

    if (hasPriorityOne) {
        console.log("좌석이 하나라도 있습니다. 새로고침을 멈춥니다.");
        clearInterval(intervalId); // 좌석이 있으면 새로고침을 멈추기 위해 setInterval을 중단
    } else if (hasPriorityZero) {
        console.log("좌석이 없습니다. 새로고침 버튼을 클릭합니다.");

        // 새로고침 버튼을 클릭
        const refreshButton = document.querySelector('.btn_refresh');
        if (refreshButton) {
            refreshButton.click();
        }
    }
}, 1500); // 1.5초마다 확인