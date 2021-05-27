class A1{

};
class B1: public A1{ // Single inheritance 
	
};

class A2{

};
class B2{

};
class C2: public A2, public B2{ // Multiple inheritance

};

class A3{

};
class B3: public A3{	// Hierarchy inheritance

};
class C3: public A3{	// Hierarchy inheritance

};
class D3: public A3{	// Hierarchy inheritance

};

class A4{
	
};
class B4: public A4{

};
class C4: public B4{	// Multilevel inheritance

};

class A5{

};
class B5: public A5{

};
class C5: public A5{

};
class D5: public B5, public C5{	// Hybrid inheritance

};
