package gof.cor.v1;

public class AppHandler extends CarOpenHandler {

    public AppHandler(){}

    @Override
    public boolean open(OpenMethod method) {
        if(method == OpenMethod.APP) {
            System.out.println("# 스마트폰 앱으로 원격 문열기 성공 했습니다.!!");
            return true;
        } else if(next != null) {
            System.out.println(OpenMethod.APP+" >> Pass..");
            return next.open(method);
        }
        return false;
    }
}