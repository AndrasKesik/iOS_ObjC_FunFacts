//
//  ViewController.h
//  Fun Facts
//
//  Created by Andras Kesik on 04/09/16.
//  Copyright © 2016 Andras Kesik. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong , nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

