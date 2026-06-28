class Point
{
    private int x;
    private int y;
    public Point()
    {
        x=0;
        y=0;
    }
    public Point(int x , int y)
    {
        this.x = x;
        this.y = y;
    }
    public void setX(int x)
    {
        this.x = x;
    }
    public void setY(int y)
    {
        this.y = y;
    }
    public void setXY(int x ,int y)
    {
        this.x = x;
        this.y = y;
    }
    public void show()
    {
        System.out.println("x :" + x + " y:" + y);
    }
}
class Main
{
    public static void main(String args[])
    {
        Point obj1 = new Point();
        obj1.show();

        Point obj2 = new Point(2,5);
        obj2.show();

        Point obj3 = new Point();
        obj3.setX(4);
        obj3.setY(3);
        obj3.show();

        Point obj4 = new Point();
        obj4.setXY(5,7);
        obj4.show();
    }
}