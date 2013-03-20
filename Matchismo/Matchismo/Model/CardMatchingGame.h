//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by kgaddy on 3/01/13.
//  Copyright (c) 2013 kgaddy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
#import "Deck.h"

#define TWO_CARDS_MATCHING_GAME     0 // segmented control index for 2-cards matching game
#define THREE_CARDS_MATCHING_GAME   1 // segmented control index for 3-cards matching game

@interface CardMatchingGame : NSObject

@property (readonly, nonatomic) int score;
@property (readonly, strong, nonatomic) NSString *result; // description of flipped cards

// designated initializer
- (id)initWithCardCount:(NSUInteger)count
              usingDeck:(Deck *)deck;

// added another argument to the flipCardAtIndex method which tells the game mode (2-cards or 3-cards match)
- (void)flipCardAtIndex:(NSUInteger)index forMatchingMode:(NSUInteger)mode;

- (Card *)cardAtIndex:(NSUInteger)index;

@end
