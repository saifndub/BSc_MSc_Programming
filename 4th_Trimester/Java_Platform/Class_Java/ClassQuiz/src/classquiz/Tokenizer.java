package classquiz;

import java.util.StringTokenizer;

public class Tokenizer {

    public static void main(String[] args) {

        String s = "I have a pet ;and its name is pappu."; 
        StringTokenizer st = new StringTokenizer(s, ";");
        while (st.hasMoreTokens()) {
            System.out.println(st.nextToken());
        }
    }

}
