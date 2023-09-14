package exam;

import javax.swing.*;

public class HelloJAVA {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Hello, Java!");
        frame.setSize(300, 150);
        JLabel label = new JLabel("Hello, Java!", JLabel.CENTER);
        frame.add(label);
        frame.setVisible(true);
    }
}