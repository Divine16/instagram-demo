//
//  loginpage.h
//  instagram
//
//  Created by Divine Uchechukwu Linus on 7/9/20.
//  Copyright © 2020 Divine Uchechukwu Linus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface loginpage : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *username;
@property (weak, nonatomic) IBOutlet UITextField *password;
@property (weak, nonatomic) IBOutlet UIButton *loginbutton;

-(void) loginu;
@end
