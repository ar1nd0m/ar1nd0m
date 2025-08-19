class Student {
    String name;
    int roll;
    char section;

    // Default Constructor
    Student() {}

    // Copy Constructor
    Student(Student obj) {
        this.name = obj.name;
        this.roll = obj.roll;
        this.section = obj.section;
    }

    // Method to display student information
    public void getinfo() {
        System.out.println("Name: " + name + ", Roll: " + roll + ", Section: " + section);
    }
}

public class shallowCopy {
    public static void main(String[] args) {
        // Create the first Student object and assign values
        Student st = new Student();
        st.name = "Arindam";
        st.roll = 21;
        st.section = 'X';

        // Create a copy of the Student object using the copy constructor
        Student st1 = new Student(st);

        // Display information of both students
        st.getinfo();
        st1.getinfo();
    }
}
