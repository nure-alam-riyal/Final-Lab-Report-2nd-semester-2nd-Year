import java.util.Comparator;

public class ASPComparator  implements Comparator<activitySelectionProblem> {

    @Override
    public int compare(activitySelectionProblem o1, activitySelectionProblem o2) {
        // TODO Auto-generated method stub
        return o1.getfinish()-o2.getfinish();
    }
    
    
}
