import java.util.Arrays;
public class Main {
    public static void main(String args[]) 
    {
        int[] x = new int[5];
        x[0] = 1;
        x[1] = 1;
        x[2] = 1;
        x[3] = 1;
        x[4] = 1;
        Main obj = new Main();
        obj.runningSum(x);
    }


    public int[] runningSum(int[] nums) {
        int temp = 0;
        int [] value =new int[nums.length];
        for (int i = 0; i < nums.length; i++)
        {
            temp += nums[i];
            value[i] = temp;
            System.out.println(value[i]);
        }
        return value;
    }
}
