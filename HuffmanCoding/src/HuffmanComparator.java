
import java.util.Comparator;

public class HuffmanComparator implements Comparator<HuffmanNode> {

    @Override
    public int compare(HuffmanNode o1, HuffmanNode o2) {
        // TODO Auto-generated method stub
        return o1.data-o2.data;
    }

   
    

}