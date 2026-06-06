//cdpackage Summer_Assignment_2401921540123.Week 1.OOPS;
interface LibraryUser{
    void registerAccount();
    void requestBook();
}
class KidUsers implements LibraryUser{
  int age;
  String bookType;
  public void registerAccount()
  {
    if (age < 12)
    {
        System.out.println("You have successfully registered under a Kids Account.");
    }
    if(age>12)
    {
        System.out.println(" Sorry,Age must be less than 12 to register as a Kid.");
    }
  }
  public void requestBook()
  {
    if(bookType.equals("Kids"))
    {
        System.out.println("Book issued successfully, please return the book within 10 days.");
    }
    else
    {
      System.out.println("Oops, you are allowed to take only kids books.");
    }
  }
}
class AdultUsers implements LibraryUser{
    int age;
    String bookType;
    public void registerAccount()
    {
        if(age>12)
        {
            System.out.println("You have successfully registered under an Adult Account.");
        }
        if(age<12)
        {
            System.out.println("Sorry,Age must be greater than 12 to register as an adult.");
        }
    }
    public void requestBook()
    {
        if(bookType.equals("Fiction"))
        {
          System.out.println("Book issued successfully,please return the book within 7 days.");
        }
        else
        {
            System.out.println("Oops,you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        KidUsers kid1 = new KidUsers();  //creating intance1 of KidUSers
        kid1.age=10;
        kid1.bookType="Kids";

        KidUsers kid2 = new KidUsers();   //creating instance of KidUsers
        kid2.age=18;
        kid2.bookType="Fiction";

        //calling functions....
        kid1.registerAccount();
        kid1.requestBook();
        kid2.registerAccount();
        kid2.requestBook();

        AdultUsers adult1 = new AdultUsers();  //creating instance of AdultUSers
        adult1.age=5;
        adult1.bookType="Kids";

        AdultUsers adult2 = new AdultUsers();  //creating instance of AdultUsers
        adult2.age=23;
        adult2.bookType="Fiction";

        //calling functions.....
        adult1.registerAccount();;
        adult1.requestBook();
        adult2.registerAccount();
        adult2.requestBook();

    }
}
