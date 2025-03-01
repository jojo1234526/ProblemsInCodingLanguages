package NewJava;

public class array {
    public static void main(String[] args)
    {
        array obj = new array();
        int[] array = new int[]{1,1,1,1,1};
        obj.runningSum(array);
    }
    public int[] runningSum(int[] nums)
    {
        int temp = 0;
        int [] results = new int[nums.length];
        for (int i = 0; i < nums.length; i++)
        {
            temp += nums[i];
            results[i] = temp;
            System.out.println(results[i]);
        }
        return results;
    }
    
}
