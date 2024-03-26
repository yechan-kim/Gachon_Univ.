package Network;

import java.io.*;
import java.net.*;
import java.util.Scanner;

public class BasicSocketClient {
    public static void main(String[] args) {
        String serverIP = "192.9.202.181";
        int serverPort = 9090;

        try {
            Socket socket = new Socket(serverIP, serverPort);

            // 입출력 스트림 생성
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            // 키보드로 입력받아 메시지를 전송하는 것으로 개선.
            System.out.print("서버에 보낼 메시지를 입력하세요: ");
            Scanner scan = new Scanner(System.in);
            String message = scan.nextLine();
            out.println("202035130김예찬> "+message);

            // 서버로 부터 메시지 수신
            String response = in.readLine();
            System.out.println("Server response: " + response);

            // 소켓 및 스트림 close
            out.close();
            in.close();
            socket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}