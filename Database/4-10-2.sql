-- 예약된 비디오 테이프의 ID 를 검색하라. 
SELECT DISTINCT(VIDEO_ID)
FROM RESERVED
ORDER BY VIDEO_ID ASC; -- 정렬