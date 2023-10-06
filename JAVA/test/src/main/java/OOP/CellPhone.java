package OOP;

public class CellPhone {
    private String number;

    public CellPhone(String number) {
        this.number = number;
    }

    public String getNumber() {
        return number;
    }

    public void setNumber(String number) {
        this.number = number;
    }

    public void callTo(Person person) {
        System.out.printf("Calling %s-%s\n", person.getName(), person.getPhone().getNumber());
    }

    public void receiveFrom(Person person) {
        System.out.printf("receiving %s-%s\n", person.getName(), person.getPhone().getNumber());
    }
}
