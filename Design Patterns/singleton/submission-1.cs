public class Singleton {

    private static Singleton unique_instance = null;

    private string mode = null;

    private Singleton() {
      
    }

    public static Singleton getInstance() {

        if(unique_instance == null){
            unique_instance =  new Singleton();
        }

        return unique_instance;

    }

    public string getValue() {

        return mode;

    }

    public void setValue(string value){

        mode = value;

    }
}
