bool test_config();

#ifndef QUESTION1_H
#define QUESTION1_H

class Receipt{
    public:
        Receipt(double meal_price, double tip_rate) : price(meal_price), gratuity(tip_rate){}
        
        double calculate_tax();

        double calculate_gratuity();

        double display_receipt(double tax_amount, double gratuity_amount);
    private:
        const double tax{.08};
        double price;
        double gratuity;
};
#endif