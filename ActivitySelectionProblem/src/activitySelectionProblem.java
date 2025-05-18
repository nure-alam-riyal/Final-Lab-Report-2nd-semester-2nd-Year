public class activitySelectionProblem{
    private int finish;
    private int start;
    private String activity;

    /**
     * @return int return the finish
     */
    public int getfinish() {
        return finish;
    }

    /**
     * @param finish the finish to set
     */
    public void setfinish(int finish) {
        this.finish = finish;
    }

    /**
     * @return int return the start
     */
    public int getStart() {
        return start;
    }

    /**
     * @param start the start to set
     */
    public void setStart(int start) {
        this.start = start;
    }

    /**
     * @return String return the activity
     */
    public String getActivity() {
        return activity;
    }

    /**
     * @param activity the activity to set
     */
    public void setActivity(String activity) {
        this.activity = activity;
    }

    @Override
    public String toString() {
        return "activitySelectionProblem [finish=" + finish + ", start=" + start + ", activity=" + activity + "]";
    }
    

}