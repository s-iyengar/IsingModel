/*
 * Basic Ising model simulator.
 * To be used as a scaffold to develop a more robust simulation.
 * Process of Ising model: start with a NxM lattice of spins at some value
 * At each time, calculate the change in the overall Hamiltonian if you flipped or changed
 * the value at each position. Accept the changes based on the metropolis Hastings algorithm:
 * if \Delta H < 0 accept automatically, else accept with probability exp(-beta*\Delta H) where
 * beta is the inverse temperature.
 * 
 * Generally, the Hamiltonian
 * H = B*\Sum_i s_i + J*\Sum_(j,k)s_j*s_k is used. In magnetism this correspends to
 * an energy from an external field B (which is summed against every spin) and the spin-spin interaction
 * J (which is summed for all neighbor pairs once). The interesting behaviour is that based on B and J,
 * you will find that there's a critical beta: values of beta above it (cold temperatures)
 * will have a defined magnetisation after many iterations. Lower values of beta (hot
 * temperatures) will not have a well-defined magnetisation. Furthermore, the heat capacity
 * (proportional to the standard deviation of energy) will spike at this point marking a phase transition.
 * 
 * 
 * This file will work to replicate the basic Ising Model, however will be used to template how to make nice generalisations
 * by changing the Hamiltonian and the connectivity of the model.
 */

#include <iostream>
#include <vector>

typedef int spin_t; //spins may be integer or float, this allows a toggle for the time being
typedef std::vector<spin_t> row_t; //single row of a lattice
typedef std::vector<row_t> lattice_t; //lattice is composite of rows

/*
 * void spinchange(lattice_t lattice,int i,int j,spin_t newvalue)
 * update the lattice at position j in row i to a spin of value newvalue.
 * Returns nothing
 */
void spinchange(lattice_t lattice,int i,int j,spin_t newvalue){
	lattice.at(i).at(j) = newvalue;
}




int main(){
	
	std::cout << "Pass";
	
	
return 0;	
	
}
