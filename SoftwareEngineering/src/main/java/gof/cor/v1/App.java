package gof.cor.v1;

public class App {
    public static void main(String[] args) {

        CarOpenHandler handler = new AppHandler();
        CarOpenHandler h1 = new KeyHandler();
        CarOpenHandler h2 = new VoiceHandler();
        //CarOpenHandler handler = new KeyHandler(new VoiceHandler(h1));

//        handler.setNext(h1);
//        h1.setNext(h2);
        // chain 구성
        handler.setNext(h2).setNext(h1);

        boolean result = handler.open(OpenMethod.KEY);
        if(!result) {
            System.out.println("## 요청한 방법으로 문을 열 수 없습니다!!!");
        }
    }
}