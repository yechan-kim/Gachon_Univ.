package self_study.Circle;

import static java.lang.Math.PI;

public class Circle {
    private double radius;

    public Circle (){
        radius = 0.0;
    }
    public Circle(double radius){
        this.radius = radius;
    }
    public double getRadius() {
        return radius;
    }

    public double getArea() {
        return radius * radius * PI;
    }

    public double getPerimeter() {
        return radius * 2 * PI;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public static void main(String[] args) {
        System.out.println("Circle 1: ");
        Circle circle1 = new Circle();
        circle1.setRadius(10.0);
        System.out.println("Radius: " + circle1.getRadius());
        System.out.println("Area: " + circle1.getArea());
        System.out.println("Perimeter: " + circle1.getPerimeter());

        System.out.println("Circle 2: ");
        Circle circle2 = new Circle(20.0);
        System.out.println("Radius: " + circle2.getRadius());
        System.out.println("Area: " + circle2.getArea());
        System.out.println("Perimeter: " + circle2.getPerimeter());
    }
}
