import http from 'k6/http';
import { check, sleep } from 'k6';

// 테스트 설정
export let options = {
    vus: 1000,             // 동시에 실행할 VU(가상 사용자) 수
    duration: '10s',       // 테스트 지속 시간

    thresholds: {
        http_req_duration: ['p(95)<500'],  // 95% 이상의 요청이 500ms 미만으로 응답하는지 확인
    }
};

// VU가 실행할 코드
export default function () {
    const url = 'https://api.lupg.me/user/test-register';  // 실제 엔드포인트로 변경하세요.
    const payload = JSON.stringify({
        username: 'test_user',
        password: 'test_password',
        tel: '010-3952-0517'
    });

    const params = {
        headers: {
            'Content-Type': 'application/json'
        },
    };

    const res = http.post(url, payload, params);

    // 응답 검증
    check(res, {
        'status is 201': (r) => r.status === 200,
        'transaction time < 500ms': (r) => r.timings.duration < 500,
    });

    sleep(1);
}
