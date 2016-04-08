#include <iostream>
using namespace std;
//problema 1
class data{
public:
	string data
	data *netx;
	data(){}
};
class TDA{
public:
	TDA(){}
	void insert(data x){}
	data delete(){}
	bool isempty(){}
};

class conjunto{
public:
	TDA head;
	conjunto(){}
	void agregar(){
 void insert(data x)
}
data sacar(){
	data delete()
}
bool estaVacio(){
	bool isempty()
}
	bool pertenece(data x){
		if(estaVacio())
			return false;
		else{
			TDA *aux = head;
			while(aux -> sacar() != x){
				if(aux -> estaVacio()){
					return false;
				}
				aux = aux ->sacar();
			}
			return true;
		}
	}

	conjunto interseccion(conjunto c){
		conjunto *aux = c;
		conjunto *nuevo = new conjunto();
		data *aux2 = aux ->sacar();
		while(true){
			if(aux -> estaVacio() == true){
				break;
			}
			if(pertenece(aux2) == true){
				nuevo ->agregar(aux2);
			}else{
				aux2 = aux->sacar();
				continue;
			}
			return *nuevo;
		}
	}
	void intersecta(conjunto c){
			conjunto *aux = c;
		data *aux2 = aux ->sacar();
		while(true){
			if(aux -> estaVacio() == true){
				break;
			}
			if(pertenece(aux2) == false){
			aux2 = aux->sacar();
			continue;
		}
		
	}
}
conjunto union(conjunto c){
		conjunto *aux = c;
		conjunto *nuevo = new conjunto();
		data *aux2 = aux ->sacar();
		while(true){
			if(aux -> estaVacio() == true){
				break
			}
			if(pertenece(aux2) == true){
				nuevo ->agregar(aux2);
			}else{
				nuevo ->agregar(aux2);
				continue;
			}
			return *nuevo;
		}
}
void une(conjunto c){
		conjunto *aux = c;
		conjunto *nuevo = new conjunto();
		data *aux2 = aux ->sacar();
		while(true){
			if(aux -> estaVacio() == true){
				break
			}
			if(pertenece(aux2) == false){
				aux ->agregar(aux2);		
}
}
}

};
//problema 2
class Item{
	public:
		string valor;
		int cant_llamados;
	void agregar(Item i){
		if(estavacio()){
		head = new Item();
		}
		else {
			Item *aux = new Item();
			aux -> sig = head;
			head = aux;
		}
	}
	int probabilidad(string valor){
		if(estavacio()){
			return false;
		}
		else{
			Item *aux = head;
			int P = 0;
			int Q = 0;
			while(aux!=NULL){
				Q = Q+1;
				if(aux->data == valor){
					P=P+1;
				}
				else {
					aux = aux->sig;
				}
			} 
		}
		Int R= (P/Q)*100;
		return R;
	}
	
};
