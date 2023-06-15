/* 폴다운 메뉴 */
$(document).ready(function () {
    $('.outer-menu-item').hover(function () {
        $(this).find('.inner-menu').stop().slideDown();
    }, function () {
        $(this).find('.inner-menu').stop().slideUp();
    });
});