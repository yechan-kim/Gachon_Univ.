package self_study.HotDogStands;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Scanner;

public class HotDogStand {
    private int ID;
    private int sold;

    private static int total_sold;

    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public void setSold(int sold) {
        this.sold = sold;
    }

    public static void setTotal_sold(int total_sold) {
        HotDogStand.total_sold = total_sold;
    }

    public void JustSold() {
        sold++;
        total_sold++;
    }

    public int getSold() {
        return sold;
    }

    public static int getTotal_sold() {
        return total_sold;
    }

    public HotDogStand(int ID) {
        this.ID = ID;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        List<HotDogStand> sList = new ArrayList<>();

        System.out.print("Stand count(3개~10개): ");
        int count = scan.nextInt();

        for (int i = 0; i < count; i++) {
            sList.add(new HotDogStand(i));
        }

        String ID;
        while (true) {
            System.out.print("ID: ");
            ID = scan.next();
            if (Objects.equals(ID, "q"))
                break;
            else if (Integer.parseInt(ID) > count - 1)
                System.out.println("This ID you entered is out of the 'stand count' range you entered. This count is excluded from the count.");
            else
                sList.get(Integer.parseInt(ID)).JustSold();
        }

        for (HotDogStand h : sList)
            System.out.printf("Stand %d sold %d\n", h.getID(), h.getSold());

        System.out.printf("Total sold = %d\n", HotDogStand.getTotal_sold());
    }
}
