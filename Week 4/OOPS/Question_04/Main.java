class Box
{
    double length;
    double breadth;
    Box(double x , double y)
    {
        length = x;
        breadth = y;
    }
    double area()
    {
        return length*breadth ;
    }
}
class Box3d extends Box
{
    double height;
    Box3d(double x , double y, double z)
    {
        super(x , y);
        height = z;

    }
    double volume()
    {
        return length * breadth * height;
    }
}
class Main
{
    public static void main(String args[])
    {
        Box3d obj = new Box3d(4, 5, 3);
        double area = obj.area();
        double vol = obj.volume();
        System.out.println("area :"+area+"\nvolume :"+vol);
    }
}