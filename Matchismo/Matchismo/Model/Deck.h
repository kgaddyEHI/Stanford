//
//  Deck.h
//  Matchismo
//
//  Created by kgaddy on 3/01/13.
//  Copyright (c) 2013 kgaddy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
