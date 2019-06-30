import java.util.*;

class llexicoLarger{
	public static void lexicolstring(String str,String osf, boolean bool)
	{
		if(str.length()==0){
			System.out.println(osf);
			return ;
		}

		for(int i=0;i<str.length();i++)
		{
			if(bool){
				char ch = str.charAt(i);
				String cos = str.substring(0,i) + str.substring(i+1);
				lexicolstring(cos,osf+ch,bool);
			}
			else
			{
				if(str.charAt(i) >= str.charAt(0))
				{
					char ch = str.charAt(i);
					String ros = str.substring(0,i) + str.substring(i+1);
					lexicolstring(ros,osf+ch,bool || ch>str.charAt(0));
				}
			}
		}
	}
	public static void main(String ... absdf)
	{	
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		lexicolstring(s,"",false);
	}
}