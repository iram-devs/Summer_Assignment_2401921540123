 class Outer
 {
    public void display()
    {
        System.out.println("This is an outer class.");
    }

    class Inner
    {
        public void display()
        {
            System.out.println("This is an inner class.");
        }
    }
 }
 class Main
 {
    public static void main(String args[])
    {
       Outer o = new Outer();
       o.display();
        
       Outer.Inner i = o.new Inner();
       i.display();
    }
 }