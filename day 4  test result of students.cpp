#include<iostream>
using namespace std;
class Physics;
class Chemistry;
class Mathematics;
class Marks{
	protected:
		int rollno;
		string name;
		int marks[3];
	public:
		Marks(){
		}
		Marks(int roll, string n){
			rollno = roll;
			name = n;
		}
		void display(){
			cout<<"Roll Number:   "<<rollno<<" \n ";
			cout<<"Name:     "<<name<<" \n ";
		
		}
		friend int getTotalMarks(Marks &, Physics&, Chemistry&,  Mathematics&);
};
 class Physics: public Marks{
 	private:
 		int mark;
 	public:
 		Physics(){
		 }
 		Physics(int mark){
 			this->mark = mark;
		 }
		 friend int getPhysicsMarks(Physics &);
 	
 };
 class Chemistry: public Marks{
 		private:
 		int mark;
 	public:
 		Chemistry(){
		 }
 		Chemistry(int mark){
 			this->mark = mark;
		 }
		 friend int getChemistryMarks(Chemistry &);
 	
 	
 }; 
 class Mathematics: public Marks{
 	private:
 		int mark;
 	public:
 		Mathematics(){
		 }
 		Mathematics(int mark){
 			this->mark = mark;
		 }
		 friend int getMathematicsMarks(Mathematics &);
 };
  int getPhysicsMarks(Physics &p){
 	
 	
 	return p.mark;
 }
  int getChemistryMarks(Chemistry &c){
 	
 	
 	return c.mark;
 }
 int getMathematicsMarks(Mathematics &m){
 	
 	
 	return m.mark;
 }
