public class Singleton {

    private static Singleton unique_instance = null;

    private string value = null;

    private Singleton() {
      
    }

    public static Singleton getInstance() {

        if(unique_instance == null){
            unique_instance =  new Singleton();
        }

        return unique_instance;

    }

    public string getValue() {

        return this.value;

    }

    public void setValue(string value){

        this.value = value;

    }
}
