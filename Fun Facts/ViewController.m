//
//  ViewController.m
//  Fun Facts
//
//  Created by Andras Kesik on 04/09/16.
//  Copyright © 2016 Andras Kesik. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.factBook = [[FactBook alloc]init];
    self.colorWheel = [[ColorWheel alloc]init];
    
    UIColor *randomColor = [self.colorWheel randomColor];
    self.funFactButton.tintColor = randomColor;
    self.view.backgroundColor = randomColor;

    
    self.funFactLabel.text = [self.factBook randomFact];
    

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact {
//    NSLog(@"You pressed me!");
    UIColor *randomColor = [self.colorWheel randomColor];
    self.funFactButton.tintColor = randomColor;
    self.view.backgroundColor = randomColor;
    self.funFactLabel.text = [self.factBook randomFact];
}



@end
