public class Main {

    private static int addOddArray(int arr[])
    {
        int result = 0;
        for (int i = 0; i < arr.length; ++i)
        {
            if (arr[i]%2 == 1)
                result += arr[i];
        }
        return result;
    }

    public static void main(String[] args) {
	    int arr[] = {1, 2, 3, 4, 5};
	    int result = addOddArray(arr);
        System.out.println(result);
    }
}
