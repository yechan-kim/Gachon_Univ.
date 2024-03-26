package chat;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;

public class ChatServer {
    final int PORT = 9090;
    final List<Socket> socketList = new ArrayList<>();

    public void start() {
        try {
            ServerSocket serverSocket = new ServerSocket(PORT);
            System.out.println("Server is listening on port " + PORT);

            while (true) {
                Socket socket = serverSocket.accept();
                System.out.println("New client connected");
                socketList.add(socket);

                new Thread(() -> {
                    try {
                        while(true) {
                            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
                            String message = in.readLine();
                            if (message != null) {
                                if (message.startsWith("quit")) {
                                    socketList.remove(socket);
                                    System.out.println(message.split("/")[1]+"님이 채팅을 종료했습니다.");
                                    sendMsg(message.split("/")[1]+"님이 채팅을 종료했습니다.");
                                    break;
                                } else {
                                    System.out.println(message);
                                    sendMsg(message);
                                }
                            }
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }).start();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void sendMsg(String message) throws IOException {
        for (Socket s : socketList) {
            PrintWriter out = new PrintWriter(s.getOutputStream(), true);
            out.println(message);
        }
    }

    public static void main(String[] args) {
        new ChatServer().start();
    }
}
