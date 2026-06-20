abstract class Compartment
{
    public abstract String notice();
}

class FirstClass extends Compartment
{
   @Override
   public String notice()
   {
     return "This is First Class.";
   }
}

class Ladies extends Compartment
{
    @Override
    public String notice()
    {
        return "This is Ladies Class.";
    }
}

class General extends Compartment
{
    @Override
    public String notice()
    {
       return "This is General Class.";
    }
}

class Luggage extends Compartment
{
  @Override
  public String notice()
  {
    return "This is Luggage Class";
  } 
}
 class TestCompartment
 {
    public static void main(String args[])
    {
        Compartment [] compartments = new Compartment[10];
        for(int i=0;i< compartments.length;i++)
        {
            int choice = (int) (Math.random() * 4) + 1;
            switch(choice)
            {
                case 1 : compartments[i] = new FirstClass();
                         break;
                case 2 : compartments[i] = new Ladies();
                         break;
                case 3 : compartments[i] = new General();
                         break;
                case 4 : compartments[i] = new Luggage();
                         break;
            } 
            
        }
        for (Compartment c : compartments)
            {
                System.out.println(c.notice());
            }
    }
 }

