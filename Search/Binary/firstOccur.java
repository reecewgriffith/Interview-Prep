import java.util.Arrays;

/**
 * Basic Binary Search (Iterative) 
 */
public class firstOccur {
	
	public static int binSearchEle(int arr[], int ele) {

		int low = 0;
		int high = arr.length - 1;
		int index = -1;

		while (high >= low) {
			int mid = (high + low) / 2;

			if (arr[mid] == ele) {
				index = mid;
				high = mid - 1;
			}
			else if (arr[mid] > ele) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		return index;
	}

	public static void main(String[] args) {

		int arr[] = { 102, 366, 7, 7, 7, 9, 2, 1, 15, 22, 36, 58};

		Arrays.sort(arr);
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println("");

		System.out.println("INDEX: " + binSearchEle(arr, 7));
	}

}