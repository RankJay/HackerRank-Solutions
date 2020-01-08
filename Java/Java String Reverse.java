import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();

        String reverseString = new StringBuilder(str).reverse().toString();
        System.out.println(str.equals(reverseString) ? "Yes" : "No");
    }
}
