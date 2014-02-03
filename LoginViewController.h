//
//  LoginViewController.h
//  Ribbit
//
//  Created by Devan Beitel on 2/2/14.
//  Copyright (c) 2014 Devan Beitel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)login:(id)sender;

@end
