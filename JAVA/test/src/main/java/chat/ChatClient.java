package chat;

import javax.swing.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.util.Scanner;

public class ChatClient {
    final String SERVER = "localhost"; // localhost, 210.102.180.144
    final int PORT = 9090;
    final String name = "황희정";

    public void start() {
        System.out.println(">>> "+name+" <<<");
        try {
            Socket socket = new Socket(SERVER, PORT);

            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            // 서버로 부터 메시지를 받는 쓰레드
            // while 문이 포함되어 서버로 부터 계속 메시지를 받는 구조지만 쓰레드를 사용하여 코드 흐름은 멈추지 않고 다음 단계로 진행됨.
            new Thread(() -> {
                String msg;
                try {
                    while((msg=in.readLine()) != null) {
                        System.out.println(msg);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }).start();

            // 쓰레드와 별개로 while 문을 사용하여 사용자가 입력한 메시지를 계속해서 서버로 전송
            while (true) {
                String message = JOptionPane.showInputDialog("메시지를 입력하세요. (종료: q)");

                if(message.equals("q")) {
                    out.println("quit/"+name);
                    System.out.println("채팅을 종료합니다.");
                    break;
                }
                out.println(name+"> "+message);
            }

            in.close();
            out.close();
            socket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        new ChatClient().start();
    }
}
