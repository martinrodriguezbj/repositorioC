int suma(int a, int b){
	return a + b;
	}
	static int prod(int a, int b){
		return a*b;
	}
//gcc -o funciona.exe -Wall main-1.c suma.c ya que la funcion suma es extern por defecto, entonces es visibles en otros archivos .c
//gcc -o no-funciona.exe -Wall main-2.c suma.c no funciona ya que la funcion prod es static, esto quiere decir que solo es visible en el archivo actual.
