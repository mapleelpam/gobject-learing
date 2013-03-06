
public class SubBar : MamanBar{
	public int c;
	public int d;
	
	public SubBar(){
		c = 1; d = 2;
	}
	public override void dumpall() {
		stdout.printf ("a = %d b = %d, c = %d d = %d\n",a,b,c,d);
	}

}
