package music.wind;
import music.Playable;

public class Saxophone implements Playable {
    @Override
    public void play()
    {
        System.out.println("saxophone is an instrument from woodwind family.");
    }
    
}
