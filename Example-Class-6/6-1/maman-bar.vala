public class MamanBar : Object {
	public int a;
	public int b;
	
	public MamanBar(){
		a = 1; b = 2;
	}
	public void dumpall() {
		stdout.printf ("a = %d b = %d\n",a,b);
	}

}
