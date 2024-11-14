import http from 'k6/http';
import { check, sleep } from 'k6';

// 테스트 설정
export let options = {
    vus: 5000,             // 동시에 실행할 VU(가상 사용자) 수
    duration: '1m',       // 테스트 지속 시간

    thresholds: {
        http_req_duration: ['p(95)<500'],  // 95% 이상의 요청이 500ms 미만으로 응답하는지 확인
    }
};

// VU가 실행할 코드
export default function () {
    const url = 'https://api.lupg.me/pub/all';  // 테스트할 URL

    let res = http.get(url);

    // 응답 검증
    check(res, {
        'status is 200': (r) => r.status === 200,
        'transaction time < 500ms': (r) => r.timings.duration < 500,
    });

    sleep(1);
}
