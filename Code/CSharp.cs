/////////////////
// C# EXAMPLES //
/////////////////

using System;
using System.Linq;
using System.Collections.Generic;

public class Code {

	enum Boolenum {
		True, False
	}
	
	void Function() {

		try {
			//...
		} catch (Exception e) {
			throw e;
		}



		object[] objs = new object[1];
		foreach (var item in objs) {
			//...
		}



		int tern = true ? 1 : 0;



		object ob = new object();
		ob = (object)ob;
		Console.WriteLine((null ?? ob).ToString());



		for (; false;) {
			//...
		}



		switch (true) {
			default:
				//...
		}



		IEnumerable<int> collection;
		collection = collection.Select((x) => true);



		


	}

	public override string ToString() {
		return base.ToString() + "";
	}


}
