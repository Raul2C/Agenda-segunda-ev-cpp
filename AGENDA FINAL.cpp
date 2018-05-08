//Voy a crear una agenda que ordene por alturas, peso o color de pelo a los contactos.
 #include<iostream>
 #include<iostream>
 #include<fstream>
 using namespace std;
 int main(){
      int salir;
      int nlinea;
 //Voy a crear una struct que indique los rasgos de las personas
   struct persona{
      string nombre;
      int edad;
      float altura;
      float peso;
      string colorPelo;
   };
   int cont;
   persona amigo[4];
   for(cont=0;cont<4;cont++){
     cout<<"DATOS AMIGO "<<cont<<endl;                        
     cout<<"Como se llama tu amigo: ";
     cin>>amigo[cont].nombre;
     cout<<"Cuantos anos tiene: ";
     cin>>amigo[cont].edad;
     cout<<"Cuanto mide: ";
     cin>>amigo[cont].altura;
     cout<<"Cuanto pesa: ";
     cin>>amigo[cont].peso;
     cout<<"De que color tiene el pelo: ";
     cin>>amigo[cont].colorPelo; 
    }
   //Voy a crear un fichero con los datos introducidos
    string mensaje;
    ofstream f("Agenda.txt");
    for(cont=0;cont<4;cont++){
      f<<amigo[cont].nombre<<",";
      f<<amigo[cont].edad<<",";
      f<<amigo[cont].altura<<",";
      f<<amigo[cont].peso<<",";
      f<<amigo[cont].colorPelo<<endl;
      
    } 
    f.close();
    ifstream f2("Agenda.txt");
	while(f2.eof()!=1){
	   getline (f2,mensaje);
	   if (f2.eof()!=1){
		  cout<<mensaje<<endl;
		
	}		
		
	}
	
	f2.close();
    cin>>salir;
	return 0;
}
