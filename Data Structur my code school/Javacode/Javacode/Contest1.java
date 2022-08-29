package Javacode;

public class Contest1 {
    public String solve(String A) {

        int len = A.length();
        String s1 = "";
        int bi = 0;
        boolean a_bool = true;
        boolean b_bool = true;
        
        if(A == "a"){
            return "No";
        }
        if(A == "b"){
            return "No";
        }
        
        for(int i=0;i<A.length();i++){
            if(A.charAt(i) != 'b'){
                s1 += A.charAt(i);
            } else {
                break;
            }
        }
        
        //System.out.println(s1);
        
        if(s1.length() != 0){
            for(int j=0;j<s1.length();j++){
                if(s1.charAt(j) != 'a'){
                    a_bool = false;
                    break;
                }
            }
        } else {
            a_bool = false;
        }
        
        if(s1.length() == A.length()){
            bi = 0;
        } else {
            bi = s1.length()+1;
        }
        
        for(int k=bi;k<A.length();k++){
            if(A.charAt(k) != 'b'){
                b_bool = false;
                break;
            }
        }
        if((a_bool == true) && (b_bool == true)){
            return "Yes";
        }else {
            return "No";
        }
    }

    public static void main(String[] args) {
        
    }
}
