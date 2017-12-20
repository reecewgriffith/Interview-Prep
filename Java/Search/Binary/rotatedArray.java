
/**
 * Checks how many times a sorted array is rotated
 * so basially checks index or lowest element (since rotated to the right)
 * could do iteratively but better with binary
 */
public class rotatedArray {
	
	public static int rotCount(int arr[]) {
		int low = 0;
		int high = arr.length - 1;

		while (high >= low) {
			int mid = (high + low) / 2;

			int next = (mid + 1) % arr.length;
			int prev = (mid - 1) % arr.length;

			if (arr[low] < arr[high]) {
				return low;
			}
			else if (arr[mid] < arr[prev] && arr[mid] < arr[next]) {
				return mid;
			}
			else if (arr[mid] > arr[prev]) {
				high = mid - 1;
			}
			else if (arr[mid] < arr[next]) {
				low = mid + 1;
			}
		}

		return -1;
	}

	public static void main(String[] args) {
		
		int arr[] = { 7, 9, 2, 4, 5, 6 };
		System.out.println("# of Rotations: " + rotCount(arr));

	}

}