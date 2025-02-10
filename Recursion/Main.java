public class Main {
    public static void main(String args[]) {
        
        print(1);

    }
    static void print(int number){
        if(number <= 5){
            System.out.println(number);

        }
        else{
            return;
        }
        
        print(number + 1);
    }

    

    
}