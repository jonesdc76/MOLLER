//Calculate the electron polarization of an element
//given its molar mass in g, atomic number, density in g/m^3
//and susceptibility for a given applied field H in Gaus


#include <iostream>

int polarization(double H = 1){
  const double Gaus2Aperm = 79.577;
  const double Bohr_magneton = 9.274e-24;
  const double Avogadro = 6.022e23;

  double molmass = 55.85;
  double density = 7.9e6;
  double A = 26;
  double susc = 0.01;
  double pol = susc*H*Gaus2Aperm/Bohr_magneton/density*molmass/Avogadro/A;
  printf("Electron polarization for austenitic stainless with %0.2e susceptibility\n: %0.2e\n", susc, pol);

  molmass = 63.55;
  density = 8.96e6;
  A = 29;
  susc = -1e-5; 
  pol = susc*H*Gaus2Aperm/Bohr_magneton/density*molmass/Avogadro/A;
  printf("Electron polarization for Cu with %e susceptibility: %e \n", susc, pol);

  molmass = 207.2;
  density = 11.35e6;
  A = 82;
  susc = -1.8e-5; 
  pol = susc*H*Gaus2Aperm/Bohr_magneton/density*molmass/Avogadro/A;
  printf("Electron polarization for Pb with %e susceptibility: %e \n", susc, pol);

  molmass = 18.02;
  density = 1e6;
  A = 10;
  susc = -1e-5; 
  pol = susc*H*Gaus2Aperm/Bohr_magneton/density*molmass/Avogadro/A;
  printf("Electron polarization for H20 with %e susceptibility: %e\n", susc, pol);

  molmass = 183.84;
  density = 19.3e6;
  A = 74;
  susc = 6.8e-5; 
  pol = susc*H*Gaus2Aperm/Bohr_magneton/density*molmass/Avogadro/A;
  printf("Electron the polarization for W with %e susceptibility: %e\n", susc, pol);

  molmass = 26.98;
  density = 2.7e6;
  A = 13;
  susc = 2.2e-5; 
  pol = susc*H*Gaus2Aperm/Bohr_magneton/density*molmass/Avogadro/A;
  printf("Electron polarization for Al with %e susceptibility: %e\n", susc, pol);


  

  return 0;
}
