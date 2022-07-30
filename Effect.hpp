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
    bool isRecurring;

protected:
    Effect();
    Effect(BenefitType b, int v, bool isDynamic) :
        benefitType(b),
        value(v),
        isRecurring(isDynamic)
    {}

    BenefitType getBenefitType() { return benefitType; }
    int getValue() { return value; }
    bool getIsRecurring() { return isRecurring; }

    void setBenefitType(BenefitType b) { benefitType = b; }
    void setValue(int v) { value = v; }
    void setIsRecurring(bool isRecur) { isRecurring = isRecur; }

    virtual int applyEffect () = 0;

};

#endif //SUBURBIA_EFFECT_HPP
