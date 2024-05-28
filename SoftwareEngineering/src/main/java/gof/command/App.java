package ajs.java.gof.command;

public class App {
    public static void main(String[] args) {
        Invoker controller1 = new Invoker();
        // off를 wiper 로 바꿔서도 해봄.
        controller1.setCommand(new OnCommand(new HeaterReceiver()),new OffCommand(new WiperReceiver()));

        Invoker controller2 = new Invoker();
        controller2.setCommand(new OnCommand(new WiperReceiver()),new OffCommand(new WiperReceiver()));

        controller1.on();
        //controller2.off();
    }
}