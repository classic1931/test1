//
//  Card.h
//  test1
//
//  Created by Christopher De Jong on 9/3/19.
//  Copyright © 2019 Christopher De Jong. All rights reserved.
//

#ifndef Card_h
#define Card_h
class Card
{
private:
    char rank;
    char suit;
public:
    int getValue();
    void setCard(char, char);
    void display();
};

#endif /* Card_h */
