package L_111_inheriting_private_member;

public class Teacher extends Person{    
    //getName(),setNmae(),getAge(),steAge()
    private String qualification;

    public String getQualification() {
        return qualification;
    }

    public void setQualification(String qualification) {
        this.qualification = qualification;
    }
    void displayinfo(){
        System.out.println(getName());
        System.out.println(getAge());
        System.out.println(getQualification());
        System.out.println();
    }
}
