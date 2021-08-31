#pragma once

#include "SmallPig.h"
#include "MediumPig.h"
#include "BigPig.h"
#include <vector>


class Level :
    public VisualGameObject
{
protected:
    int Number;
    int NrOfSmallPigs, NrOfMediumPigs, NrOfBigPigs;
    vector <SmallPig> small;
    vector <MediumPig> medium;
    vector <BigPig> big;
    
public:
    Level(string id = "", string name = "", bool isVisible = true, int number = 1, int smallPigs = 1, int mediumPigs = 1, int bigPigs = 1);
    virtual ~Level();
    virtual void dmgAllSmallPigs(int dmg);
    virtual void dmgAllMediumPigs(int dmg);
    virtual void dmgAllBigPigs(int dmg);
    virtual vector <SmallPig>& GetSmall();
    virtual vector <MediumPig>& GetMedium();
    virtual vector <BigPig>& GetBig();
    virtual int GetNrOFSmallPigs() const;
    virtual int GetNrOFMediumPigs() const;
    virtual int GetNrOFBigPigs() const ;
    virtual void EraseSmall();
    virtual void EraseMedium();
    virtual void EraseBig();
    virtual int GetSmallHealth();
    virtual int GetMediumHealth();
    virtual int GetBigHealth();
};

