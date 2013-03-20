//
//  PlayingCard.h
//  Matchismo
//
//  Created by kgaddy on 3/01/13.
//  Copyright (c) 2013 kgaddy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;


+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
