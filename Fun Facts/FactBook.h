//
//  FactBook.h
//  Fun Facts
//
//  Created by Andras Kesik on 04/09/16.
//  Copyright © 2016 Andras Kesik. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

-(NSString *)randomFact;

@end
