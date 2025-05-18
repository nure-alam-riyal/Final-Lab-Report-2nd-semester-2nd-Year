
import java.util.ArrayList;
import java.util.Collections;

public class App {
    public static void solve(ArrayList<activitySelectionProblem>A){
        int lastaFinish=0;
        for (activitySelectionProblem activity : A) {
            if(activity.getStart()>=lastaFinish){
                System.out.println("activity   "+activity.getActivity()+"   Start     "+activity.getStart()+"     Finish      "+activity.getfinish());
                lastaFinish=activity.getfinish();
            }
            
        }
    }
    public static void main(String[] args) throws Exception {
        ArrayList<activitySelectionProblem> A= new ArrayList<>();
        activitySelectionProblem a1=new activitySelectionProblem();
        a1.setActivity("A1");
        a1.setStart(0);
        a1.setfinish(6);
            activitySelectionProblem a2=new activitySelectionProblem();
        a2.setStart(3);
        a2.setfinish(4);
        a2.setActivity("A2");
        activitySelectionProblem a3=new activitySelectionProblem();
        a3.setStart(01);
        a3.setfinish(2);
        a3.setActivity("A3");
        activitySelectionProblem a4=new activitySelectionProblem();
        a4.setStart(05);
        a4.setfinish(9);
        a4.setActivity("A4");
        activitySelectionProblem a5=new activitySelectionProblem();
        a5.setStart(07);
        a5.setfinish(5);
        a5.setActivity("A5");
        activitySelectionProblem a6=new activitySelectionProblem();
        a6.setStart(8);
        a6.setfinish(9);
        a6.setActivity("A6");
        A.add(a1);
        A.add(a2);
        A.add(a3);
        A.add(a4);
        A.add(a5);
        A.add(a6);

        Collections.sort(A,new ASPComparator());
        solve(A);
    }
}
