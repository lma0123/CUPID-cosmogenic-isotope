#include "G4ParticleGun.hh"
#include "G4VUserPrimaryGeneratorAction.hh"
#include "TH1D.h"
#include "TF1.h"

#include "globals.hh"
#include <vector>

class G4GeneralParticleSource;
class G4Event;

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
  PrimaryGeneratorAction();
  ~PrimaryGeneratorAction();

  /*
  virtual void GeneratePrimaries(G4Event*);

  virtual void SetParticle(G4double &x,G4double &y,G4double &z,G4double &px,G4double &py,G4double &pz,G4double &e,TH1D* h);//MLCC
  virtual void SetParticle(G4double &x,G4double &y,G4double &z,G4double &px,G4double &py,G4double &pz,G4double &e,TF1* f);//MLCC
  const G4ParticleGun* GetParticleGun() const {return particleGun;}
  */

public:
  void GeneratePrimaries(G4Event* anEvent);
  
private:
  G4GeneralParticleSource* particleGun;
};
