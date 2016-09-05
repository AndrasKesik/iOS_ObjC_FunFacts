//
//  ColorWheel.h
//  Fun Facts
//
//  Created by Andras Kesik on 05/09/16.
//  Copyright © 2016 Andras Kesik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
