//
//  FirstViewController.m
//  UrbanDict
//
//  Created by Michael on 11/04/2018.
//  Copyright © 2018 Michael. All rights reserved.
//

#import "FirstViewController.h"

@interface FirstViewController () <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *firstLabel;

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [NSTimer scheduledTimerWithTimeInterval:10 repeats:YES block:^(NSTimer * _Nonnull timer) {
        
    }];
}

- (IBAction)didTapSearch:(UIButton *)sender {
    if (self.textField.text) {
        
    }
}

- (BOOL)textFieldShouldEndEditing:(UITextField *)textField {
    
    return true;
}


@end
