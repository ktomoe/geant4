//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// $Id: TiaraConcreteShieldB.hh,v 1.3 2003/06/25 09:12:36 gunter Exp $
// GEANT4 tag $Name: geant4-05-02-patch-01 $
//
// ----------------------------------------------------------------------
//
// Class TiaraConcreteShieldB
//

#ifndef TiaraConcreteShieldB_hh
#define TiaraConcreteShieldB_hh TiaraConcreteShieldB_hh

#include "TiaraVComponent.hh"

class TiaraDimensions;
class TiaraMaterials;

class TiaraConcreteShieldB : public TiaraVComponent {
public:
  TiaraConcreteShieldB(TiaraMaterials &mfac,
		       const TiaraDimensions &tiaraDimensions);
  ~TiaraConcreteShieldB();

  virtual TiaraParts GetParts();

private:
  TiaraParts fTiaraParts;
};

#endif