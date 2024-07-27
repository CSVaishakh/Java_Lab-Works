package com.vaishakh.OOPs;

public class classesobjectsconstructors {
    static class Student{
        String name;
        int rollno;
        double cgpa;
        Student(String name, int rollno, double cgpa){
            this.name = name;
            this.rollno = rollno;
            this.cgpa = cgpa;
        }
    }

    public static void main(String[] args) {
        Student student = new Student("Aarvind",1,8.5);
        System.out.println(student.name+ " , " + student.rollno+ " , " + student.cgpa);
        }
}
