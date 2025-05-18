
import java.util.PriorityQueue;

public class App {
    public static void   priority(HuffmanNode root,String s,char[] charArray,String[] newArray){
        if(root==null)
        return;
        else if(root.left==null && root.right==null){
            for(int i=0;i<charArray.length;i++){
                  if(root.c==charArray[i]){
                    newArray[i]=s;
                System.out.println(root.c+"  : "+s);
            }
            }
           
        }
priority(root.left, s+'0', charArray, newArray);
priority(root.right, s+'1', charArray, newArray);
    }
    public static void main(String[] args) {
       int n=6;
     char[] charArray={'a','b','c','d','e','f'};
      int[] Farray={5,9,12,13,16,45};
       PriorityQueue<HuffmanNode> h=new PriorityQueue<HuffmanNode>(n,new HuffmanComparator());
       for(int i=0;i<n;i++){
        HuffmanNode hn=new HuffmanNode();
        hn.c=charArray[i];
        hn.data=Farray[i];
        hn.left=null;
        hn.right=null;
        h.add(hn);
       }
       HuffmanNode root=null;

       while(h.size()>1){
        HuffmanNode x=h.peek();
        h.poll();
        HuffmanNode y=h.peek();
        h.poll();
        HuffmanNode f=new HuffmanNode();
        f.c='_';
        f.data=x.data+y.data;
        f.left=x;
        f.right=y;
        h.add(f);
       }
       root=h.poll();
       String[] newArray=new String[n];
       if(root!=null)
      priority(root,"",charArray,newArray);
    }
}
