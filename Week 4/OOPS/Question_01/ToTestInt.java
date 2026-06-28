package Question_01;
interface Test
{
  int square(int x);
}
class Arithmetic implements Test
{
    public int square(int n)
    {
        return n*n;
    } 
}
class ToTestInt
{
    public static void main(String args[])
    {
        Arithmetic obj = new Arithmetic();
        int num = 4;
        int ans = obj.square(num);
        System.out.println("answer : "+ ans);
    }
}