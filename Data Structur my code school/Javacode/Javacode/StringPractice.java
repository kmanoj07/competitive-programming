package Javacode;

import java.util.*;

public class StringPractice
{

    public static int countNonalphbet(String str) {
        int count = 0;
        for(int i=0;i<str.length();i++){
            if(!(str.charAt(i) >= 'a' && str.charAt(i) <='z') 
            && (!(str.charAt(i) >= 'A' && str.charAt(i) <='Z'))){
                count++;
            }
        }
        return count;
    }

    //lexicographical order or dictionaries order
    //"ABCD" "abcd" "cdba"
    //Alphabetical order

    public static ArrayList<Integer> evenList(ArrayList<Integer> list) {
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0;i<list.size();i++){
            if(i%2 == 0){
                ans.add(i);
            }
        }
        return ans;
    }

    public static void returnArrayList(){
        Scanner scn = new Scanner(System.in);
        int lists = scn.nextInt();
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        for(int i=0;i<lists;i++){
            ArrayList<Integer> list = new ArrayList<Integer>();

            
            int sizeOflist = scn.nextInt();
            for(int j=0;j<sizeOflist;j++){
                list.add(scn.nextInt());
            }

            ans.add(list);
            print2Array(ans);
        }
    }

    public static void print2Array(ArrayList<ArrayList<Integer>> list) {
        int rows = list.size();

        for(int i=0;i<rows;i++){
            for(int j=0;i<list.get(i).size();j++){
                System.out.print(list.get(i).get(j) + ", ");
            }System.out.println();
        }
    }

    public static ArrayList<ArrayList<Integer>> retrunidentityMatrix(int n){
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        for(int i=0;i<n;i++){
            ArrayList<Integer> list = new ArrayList<Integer>();
            for(int j=0;j<n;j++){
                if(i==j){
                    list.add(1);
                } else {
                    list.add(0);
                }
            }
            ans.add(list);

        }
        return ans;
    }

    public static ArrayList<ArrayList<Integer>> retrunidentityMatrix(ArrayList<ArrayList<Integer>> lists){
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        for(int i=0;i<lists.size();i++){
            ArrayList<Integer> list = new ArrayList<Integer>();
            for(int j=0;j<lists.get(i).size();j++){
                if(j%2 != 0){
                   // ans.add(lists.get(i).get(j));
                }
            }
            ans.add(list);

        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        System.out.println(countNonalphbet(str));
    }
}

