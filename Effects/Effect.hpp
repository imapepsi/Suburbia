//
// Created by Mia Seppi on 7/29/22.
//

#ifndef SUBURBIA_EFFECT_HPP
#define SUBURBIA_EFFECT_HPP

enum BenefitType {
    INCOME,
    REPUTATION,
    MONEY,
    POPULATION
};

class Effect {
private:
    BenefitType benefitType;
    int value;

protected:
    Effect();
    Effect(BenefitType b, int v) : benefitType(b), value(v) {}

    BenefitType getBenefitType() { return benefitType; }
    int getValue() { return value; }

    void setBenefitType(BenefitType b) { benefitType = b; }
    void setValue(int v) { value = v; }

    virtual int applyEffect () = 0;
};

#endif //SUBURBIA_EFFECT_HPP
