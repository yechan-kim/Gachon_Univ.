-- 비디오 테이프를 예약한 고객의 이름을 검색하라. 
SELECT DISTINCT NAME
FROM CUSTOMER C, RESERVED R
WHERE R.CUSTOMER_ID IN C.CUSTOMER_ID;